class Solution {
public:
    string removeStars(string s) {
       string str;
        for(int i=0;i<s.length();i++){
            if(s[i]!='*'){
                str.push_back(s[i]);
            }
            if(s[i]=='*'){
             // s.erase();
              str.pop_back();
            }
        }
        return str;
    }
};