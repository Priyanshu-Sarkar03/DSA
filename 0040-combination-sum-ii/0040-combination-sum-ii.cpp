class Solution {
public:
    void count(int ind,vector<int>& can,int tar,vector<int>& ans,vector<vector<int>>& res){
        if(tar==0){
            res.push_back(ans);
            return;
        }
        if(ind==can.size() || tar<0){
            return;
        }
        for(int i=ind;i<can.size();i++){
            if(i>ind && can[i]==can[i-1]){
                continue;
            }
            if(can[i]>tar){
                break;
            }
            ans.push_back(can[i]);
            count(i+1,can,tar-can[i],ans,res);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& can, int tar) {
        sort(can.begin(),can.end());
        vector<int> ans;
        vector<vector<int>> res;
        count(0,can,tar,ans,res);
        return res;
    }
};