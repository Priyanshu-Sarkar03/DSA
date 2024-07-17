
class Solution {
public:
    // Helper function to count subarrays with at most k distinct integers
    int atMostKDistinct(vector<int>& nums, int k) {
        int l = 0, r = 0, cnt = 0; // Initialize left and right pointers and the
                                   // count of subarrays
        unordered_map<int, int>
            map; // Map to count the frequency of elements in the current window

        while (r < nums.size()) {
            map[nums[r]]++; // Add the current element to the map
            // If the number of distinct elements exceeds k, shrink the window
            // from the left
            while (map.size() > k) {
                map[nums[l]]--; // Decrease the frequency of the leftmost
                                // element
                if (map[nums[l]] == 0) { // If the frequency becomes 0, remove
                                         // the element from the map
                    map.erase(nums[l]);
                }
                l++; // Move the left pointer to the right
            }
            // Count the number of valid subarrays ending at r
            cnt += r - l + 1; // All subarrays ending at r and starting from l
                              // to r are valid
            r++;              // Move the right pointer to the right
        }
        return cnt; // Return the count of subarrays with at most k distinct
                    // integers
    }

    // Function to count subarrays with exactly k distinct integers
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        // The number of subarrays with exactly k distinct integers is equal to
        // the number of subarrays with at most k distinct integers minus
        // the number of subarrays with at most k-1 distinct integers
        return atMostKDistinct(nums, k) - atMostKDistinct(nums, k - 1);
    }
};
