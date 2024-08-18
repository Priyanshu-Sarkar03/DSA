class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>map;
        //map[a]=0;
        for(char ch='a';ch<='z';ch++){
            map[ch]=0;
        }
        for(auto x:sentence){
            map[x]++;
        }
        for(auto ans:map){
            if(ans.second==0)
            return false;
        }
        return true;
    }
};