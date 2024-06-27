#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        // k = k % n; // handle cases where k is greater than the size of the array
if(k>nums.size())
k=k%n;
        
        reverse(nums.begin(), nums.end());

       
        reverse(nums.begin(), nums.begin() + k);

        
        reverse(nums.begin() + k, nums.end());
    }
};
