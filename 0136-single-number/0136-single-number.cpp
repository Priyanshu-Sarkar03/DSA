class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        // unordered_map<int,int>map;
        // for (int i = 0; i < nums.size(); i++) {
        //     map[nums[i]]++;
        // }
        // for (auto x : map) {
        //     if (x.second == 1) {
        //         ans = x.first;
        //     }
        // }
        for(int i=0;i<nums.size();i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};