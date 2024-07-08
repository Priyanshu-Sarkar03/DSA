class Solution {
public:
    // Function to find the length of the longest substring without repeating characters
    int lengthOfLongestSubstring(string s) {
        // If the input string is empty, return 0
        if (s.size() == 0)
            return 0;

        int l = 0, r = 0; // Initialize left and right pointers
        int maxLength = 0; // Variable to store the maximum length of substring found
        int n = s.length(); // Get the length of the input string

        // Create a vector to store the last seen index of each character (ASCII size 256)
        vector<int> arr(256, -1);

        // Iterate through the string with the right pointer
        while (r < n) {
            // If the character at the right pointer has been seen before and is within the current window
            if (arr[s[r]] != -1 && arr[s[r]] >= l) {
                // Move the left pointer to the right of the last seen index of the current character
                l = arr[s[r]] + 1;
            }
            // Update the maximum length of the substring found so far
            maxLength = max(maxLength, r - l + 1);

            // Update the last seen index of the current character
            arr[s[r]] = r;
            
            // Move the right pointer to the next character
            r++;
        }

        // Return the maximum length of the substring without repeating characters
        return maxLength;
    }
};
