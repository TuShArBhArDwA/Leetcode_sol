class Solution {
public:
    void makesub(int index,vector<int>&arr,vector<vector<int>>&ans,vector<int>&dp){
            ans.push_back(dp);
        for(int i=index;i<arr.size();i++){
            if(i>index&&arr[i]==arr[i-1])continue;
            dp.push_back(arr.at(i));
            makesub(i+1,arr,ans,dp);
            dp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>dp;
        makesub(0,nums,ans,dp);
        return ans;
    }
};