class Solution {
public:
    string countAndSay(int n) {
        // Base case for recursion
        if (n == 1)
            return "1";
        
        // Get the previous sequence by recursion
        string s = countAndSay(n - 1);
        string ans = "";
        
        // Iterate through the string s to construct the next sequence
        for (int i = 0; i < s.size(); i++) {
            char ch = s[i];
            int cnt = 1;
            
            // Count how many times the current character repeats consecutively
            while (i + 1 < s.size() && s[i] == s[i + 1]) {
                cnt++;
                i++;
            }
            
            // Append the count and the character to the result string
            ans += to_string(cnt);
            ans += ch;
        }
        
        return ans;
    }
};
