class Solution {
public:
    vector<vector<int>> findPrimePairs(int n) {
        vector<bool>arr(n+1,true);
        arr.at(0)=false;
        arr.at(1)=false;
        for(int j=2;j*j<n+1;j++){
            if(arr.at(j)){
                for(int k=j*j;k<n+1;k+=j){
                    arr.at(k)=false;
                }
            }
        }
        vector<vector<int>>ans;
        for(int k=2;k<=(n+1)/2;k++){
            if(arr.at(k)&&arr.at(n-k)&&(n-k>=k)){
                ans.push_back({k,n-k});
            }
        }
        return ans;
    }
};