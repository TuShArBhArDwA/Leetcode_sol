class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int>ans;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<arr1.size();j++){
                if(arr1.at(j)==-1){
                    continue;
                }
                else if(arr1.at(j)==arr2.at(i)){
                    ans.push_back(arr1.at(j));
                    arr1.at(j)=-1;
                }
            }
        }
        sort(arr1.begin(),arr1.end());
        for(int k:arr1){
            if(k==-1){
                continue;
            }
            else{
                ans.push_back(k);
            }
        }
        return ans;
    }
};