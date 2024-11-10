class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[0]=-1;
        int currSum=0;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            int rem=currSum%k;
            if(rem<0){
                rem+=k;
            }
            if(map.count(rem)){
                if(i-map[rem]>1)
                 return true;
            }else{
                map[rem]=i;
            }
        }
        return false;
    }
};