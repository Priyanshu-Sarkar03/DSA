class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans=0;
        unordered_map<int,int>map;//for storing freq
        for(auto i:nums){
            if(map.count(i)){
                ans+=map[i];
            }
            map[i]++;
        }
        return ans;
    }
};