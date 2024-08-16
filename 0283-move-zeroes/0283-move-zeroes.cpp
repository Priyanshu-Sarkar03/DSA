class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int j = 0; // Index to place the next non-zero element

        for(int i = 0; i < n; i++){
            if(nums[i] != 0){
                //if(i != j) // To avoid unnecessary swap when i equals j
                    swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};
