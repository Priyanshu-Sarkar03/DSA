class Solution {
public:
    int numberOfSubstrings(string s) {
        int l = 0, r = 0, cnt = 0;
        unordered_map<char, int> map;
        while (r < s.length()) {
            map[s[r]]++;
            while(map['a'] && map['b'] && map['c']){
                cnt+=s.size()-r;
                map[s[l]]--;
                l++;
            }
            r++;
        }
        return cnt;
    }
};