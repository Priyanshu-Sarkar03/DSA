class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map; // To store the prefix sums and their frequencies
        int sum = 0; // Current prefix sum
        int cnt = 0; // Count of subarrays that sum to 'k'
        
        // Initialize the map to handle the case where a subarray starts from index 0
        map[0] = 1;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i]; // Update the prefix sum

            // Check if there is a prefix sum that, when removed, gives us 'k'
            if (map.find(sum - k) != map.end()) {
                cnt += map[sum - k]; // Add the frequency of (sum - k) to count
            }

            // Increment the frequency of the current prefix sum in the map
            map[sum]++;
        }
        
        return cnt;
    }
};
