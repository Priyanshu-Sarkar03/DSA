class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            nums[i]=nums[i]%3;
            int num1=abs(nums[i]-0);
            int num2=abs(nums[i]-3);
            if(num1<num2){
                sum+=num1;
            }
            else
            sum+=num2;
        }
        return sum;
    }
};