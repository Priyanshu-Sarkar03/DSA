class Solution {
public:
    string largestOddNumber(string num) {
        // Traverse the string from the end to find the first odd digit
        for (int i = num.length() - 1; i >= 0; i--) {
            if ((num[i] - '0') % 2 != 0) {
                // Return the substring from the start to the current index
                return num.substr(0, i + 1);
            }
        }
        // If no odd number is found, return an empty string
        return "";
    }
};
