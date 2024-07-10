class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxLength = 0;  // To store the maximum length of subarray found
        int l = 0;  // Left pointer of the window
        int r = 0;  // Right pointer of the window
        int zeroes = 0;  // Counter for the number of zeroes in the current window
        int n = nums.size();  // Size of the input array

        // Iterate over the array with the right pointer
        while (r < n) {
            // If the current element is zero, increment the zero counter
            if (nums[r] == 0)
                zeroes++;

            // If the number of zeroes exceeds k, shrink the window from the left
            while (zeroes > k) {
                // If the element at the left pointer is zero, decrement the zero counter
                if (nums[l] == 0)
                    zeroes--;
                // Move the left pointer to the right
                l++;
            }

            // Update the maximum length of the subarray found so far
            maxLength = max(maxLength, r - l + 1);

            // Move the right pointer to the right
            r++;
        }

        return maxLength;  // Return the maximum length of the subarray
    }
};
