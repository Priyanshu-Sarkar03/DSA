class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        // Mark the indices
        for (int i = 0; i < n; i++) {
            int num = abs(nums[i]) - 1;
            if (nums[num] > 0) {
                nums[num] = -nums[num];
            }
        }
        vector<int> arr;
        // Collect the missing numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                arr.push_back(i + 1);
            }
        }
        return arr;
    }
};
