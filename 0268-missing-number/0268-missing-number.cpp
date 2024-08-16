class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        //   sort(nums.begin(),nums.end());
        //   for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]+1!=nums[i+1]){
        //         ans=nums[i]+1;
        //     }
        //   }
        for(int i=0;i<=nums.size();i++){
            auto pos=find(nums.begin(),nums.end(),i);
            if(pos == nums.end()){
                ans=i;
            }
        }
          return ans;
    }
};