class Solution {
public:
    // Function to remove duplicates from a sorted array and return the new length
    int removeDuplicates(vector<int>& nums) {
        // If the input array is empty, there are no elements to process, so return 0
        if(nums.empty())
            return 0;

        // Initialize a variable 'k' to store the position where the next unique element should be placed
        int k = 0;

        // The first element is always unique, so place it at the start of the array
        nums[k] = nums[0];
        k++; // Increment 'k' since we have placed one unique element

        // Start iterating from the second element to the end of the array
        for (int i = 1; i < nums.size();) {
            // Check if the current element is different from the previous one
            if (nums[i] != nums[i - 1]) {
                // If it's different, store it at position 'k' and move to the next position
                nums[k] = nums[i];
                k++;  // Increment 'k' since we added a new unique element
                i++;  // Move to the next element
            } else {
                // If the current element is the same as the previous one, just move to the next element
                i++;
            }
        }

        // Return the number of unique elements, which is stored in 'k'
        return k;
    }
};
