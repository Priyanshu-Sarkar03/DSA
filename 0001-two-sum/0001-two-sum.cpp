class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Step 1: Initialize a vector to store the result (the two indices that add up to the target)
        vector<int> ans1;

        // Step 2: Create an unordered_map to store the value of each element in 'nums' and its index
        // unordered_map works like a dictionary, where the key is the element from the array,
        // and the value is its index in the array
        unordered_map<int, int> ans;

        // Step 3: Variable to store the remaining value (the value needed to reach 'target')
        int rem = -1;

        // Step 4: Loop through each element in the 'nums' array
        for (int i = 0; i < nums.size(); i++) {

            // Step 5: Calculate the remaining value by subtracting the current element (nums[i]) from the target
            rem = target - nums[i];

            // Step 6: Check if this remaining value ('rem') is already in the unordered_map
            // If it exists, it means we have found two numbers that add up to the target
            if (ans.count(rem)) {

                // Step 7: If the remaining value is found, store the current index (i) in the result vector
                ans1.push_back(i);

                // Step 8: Also store the index of the previously seen element that equals 'rem'
                ans1.push_back(ans[rem]);
            }

            // Step 9: Store the current element and its index in the unordered_map
            // This will allow us to check if its complement (remaining value) exists in future iterations
            ans[nums[i]] = i;
        }

        // Step 10: Return the indices of the two numbers that add up to the target
        return ans1;
    }
};
