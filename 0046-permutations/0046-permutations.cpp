class Solution {
public:
    void find(int index, vector<int>& nums, vector<int>& ans,
              vector<vector<int>>& res, vector<bool>& arr) {
        if (index == nums.size()) {
            res.push_back(ans);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (!arr[i]) {
                arr[i] = true;
                ans.push_back(nums[i]);
                find(index+1 , nums, ans, res, arr);
                ans.pop_back();
                arr[i] = false;
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;
        vector<bool> arr(nums.size(),false);
        find(0, nums, ans, res, arr);
        return res;
    }
};