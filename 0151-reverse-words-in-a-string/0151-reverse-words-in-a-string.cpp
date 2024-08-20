class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int l = 0, r = 0;
        int i = 0;
        while (i < s.length()) {
            while (i < s.length() && s[i] != ' ') {
                s[r] = s[i];
                r++;
                i++;
            }
            if (l < r) {
                reverse(s.begin() + l, s.begin() + r);
                s[r] = ' ';
                r++;
                l = r;
            }
            i++;
        }
        
        return s.substr(0,r-1);
    }
};