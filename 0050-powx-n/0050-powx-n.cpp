class Solution {
public:
    // Function to calculate x raised to the power n
    double myPow(double x, int n) {
        // Convert n to a long long to handle the edge case where n is INT_MIN
        long long N = n;
        
        // If n is negative, we need to calculate the reciprocal
        if (N < 0) {
            x = 1 / x; // Take the reciprocal of x
            N = -N; // Make N positive
        }
        
        double result = 1.0;
        
        // Iteratively calculate power using exponentiation by squaring
        while (N > 0) {
            // If N is odd, multiply the current result by x
            if (N % 2 == 1) {
                result *= x;
            }
            // Square x and halve N
            x *= x;
            N /= 2;
        }
        
        return result;
    }
};
