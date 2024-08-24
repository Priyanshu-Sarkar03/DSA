class Solution {
public:
    void count(int n, vector<int>& candidates, int target, int index, int sum,
               vector<int>& ans, vector<vector<int>>& res) {
        if (sum == target) {
            res.push_back(ans);
            return;
        }
        if (index == n || sum > target) {
            return;
        }
        
        // Include the current candidate
        ans.push_back(candidates[index]);
        count(n, candidates, target, index, sum + candidates[index], ans, res);
        
        // Exclude the current candidate
        ans.pop_back();
        count(n, candidates, target, index + 1, sum, ans, res);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> res;
        int n = candidates.size();
        count(n, candidates, target, 0, 0, ans, res);
        return res;
    }
};
