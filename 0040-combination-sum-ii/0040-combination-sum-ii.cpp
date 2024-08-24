class Solution {
public:
    // This function finds all combinations that sum up to the target.
    void count(int ind, vector<int>& can, int tar, vector<int>& ans, vector<vector<int>>& res) {
        // Base Case: If target becomes 0, we found a valid combination.
        if (tar == 0) {
            res.push_back(ans); // Add the current combination to the result.
            return;
        }
        
        // Loop through the candidates starting from index 'ind'.
        for (int i = ind; i < can.size(); i++) {
            // Skip duplicate numbers to avoid duplicate combinations.
            if (i > ind && can[i] == can[i - 1]) {
                continue; // Skip this candidate and move to the next one.
            }
            
            // If the current candidate is greater than the remaining target, stop further exploration.
            if (can[i] > tar) {
                break; // Since the array is sorted, no further elements will be valid.
            }
            
            // Include the current candidate in the current combination.
            ans.push_back(can[i]);
            // Recursively try to find further combinations with the remaining target.
            count(i + 1, can, tar - can[i], ans, res);
            // Backtrack: Remove the last added candidate to try other possibilities.
            ans.pop_back();
        }
    }
    
    // This function starts the process and returns all valid combinations.
    vector<vector<int>> combinationSum2(vector<int>& can, int tar) {
        sort(can.begin(), can.end()); // Sort the candidates to help with duplicate handling.
        vector<int> ans; // Temporary array to hold the current combination.
        vector<vector<int>> res; // Final result array to hold all unique combinations.
        count(0, can, tar, ans, res); // Start the recursive backtracking.
        return res; // Return the final list of combinations.
    }
};
