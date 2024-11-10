class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[0]=1;
        int currSum=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            int rem=currSum%k;
            if(rem<0)
            rem+=k;
            if(map.count(rem)){
                cnt+=map[rem];
            }
            
            map[rem]++;
        }
        return cnt;
    }
};