class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
        return 0;
        int k = 0;
        nums[k]=nums[0];
        k++;
    
        for (int i = 1; i < nums.size();) {
            if (nums[i] != nums[i - 1]) {
                nums[k] = nums[i];
                k++;
                i++;
            } else {
                i++;
            }
        }
         return k;
    }
   
};