class Solution {
public:
    void canfill(vector<int>arr,int index,int target,vector<vector<int>>& ans,vector<int>& ds){
        if(index==arr.size()){
            if(target==0){
                ans.push_back(ds);
            }
            return;
        }
        if(arr.at(index)<=target){
            ds.push_back(arr.at(index));
            canfill(arr,index,target-arr.at(index),ans,ds);
            ds.pop_back();
        }
        canfill(arr,index+1,target,ans,ds);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        canfill(candidates,0,target,ans,ds);
        return ans;
    }
};