class Solution {
public:
    int lengthOfLastWord(string s) {
        // Trim trailing spaces
        int end = s.length() - 1;
        while (end >= 0 && s[end] == ' ') {
            end--;
        }

        int pos = s.rfind(" ", end);  // Find last space before the last word
        int len = 0;

        if (pos != string::npos) {
            for (int i = pos + 1; i <= end; i++) {  // Iterate only until the last non-space character
                len++;
            }
        } else {  // No spaces, single-word string
            for (int i = end; i >= 0; i--) {
                if (s[i] == ' ') break;
                len++;
            }
        }
        return len;
    }
};
