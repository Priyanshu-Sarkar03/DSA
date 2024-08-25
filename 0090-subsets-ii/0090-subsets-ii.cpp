class Solution {
public:
    void sub(int index, vector<int>& nums, vector<int>& ans,
             vector<vector<int>>& res) {

        res.push_back(ans);
        for (int i = index; i < nums.size(); i++) {
            if (i > index && nums[i] == nums[i - 1]) {
                continue;
            }
            ans.push_back(nums[i]);
            sub(i + 1, nums, ans, res);
            ans.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        sort(nums.begin(), nums.end());
        sub(0, nums, ans, res);
        return res;
    }
};