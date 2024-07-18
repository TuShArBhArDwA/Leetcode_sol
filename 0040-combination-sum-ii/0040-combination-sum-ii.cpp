class Solution {
public:
    void canfill(int index,vector<int>arr,int target,vector<vector<int>>&ans,vector<int>&ds){
            if(target==0){
                ans.push_back(ds);
                 return;
            }
        for(int i=index;i<arr.size();i++){
            if(i>index&&arr[i]==arr[i-1]){
                continue;
            }
            if(arr.at(i)>target){
                break;
            }
            ds.push_back(arr.at(i));
            canfill(i+1,arr,target-arr.at(i),ans,ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;
        canfill(0,candidates,target,ans,ds);
        return ans;
    }
};