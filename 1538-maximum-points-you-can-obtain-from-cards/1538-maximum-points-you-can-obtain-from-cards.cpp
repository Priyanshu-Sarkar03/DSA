class Solution {
public:
    // Function to find the maximum score by picking k cards from either the
    // start or the end
    int maxScore(vector<int>& cardPoints, int k) {
        int lsum = 0, rsum = 0,
            sum = 0; // Initialize left sum, right sum, and total sum variables
        int n = cardPoints.size(); // Get the total number of cards

        // Calculate the sum of the first k cards from the left
        for (int i = 0; i < k; i++) {
            lsum =
                lsum + cardPoints[i]; // Add the i-th card point to the left sum
            sum = lsum; // Set the initial total sum to the left sum
        }

        int rpoint = n - 1; // Initialize the right pointer to the last card

        // Iterate through the cards to replace one left card with one right
        // card each time
        for (int i = k - 1; i >= 0; i--) {
            lsum -=
                cardPoints[i]; // Remove the i-th card point from the left sum
            rsum += cardPoints[rpoint]; // Add the rightmost card point to the
                                        // right sum
            rpoint--; // Move the right pointer one step to the left
            sum = max(
                sum,
                lsum + rsum); // Update the maximum sum if the new sum is larger
        }

        return sum; // Return the maximum score
    }
};
