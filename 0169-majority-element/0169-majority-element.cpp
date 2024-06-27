class Solution {
public:
    int majorityElement(vector<int>& nums) {
         unordered_map<int, int> map;
         int ans=0;
        for(int i = 0; i < nums.size(); i++) {
            map[nums[i]]++;
        }
        for(auto x : map) {
            if(x.second > nums.size() / 2)
                ans= x.first;
        }
        return ans;
    }
};