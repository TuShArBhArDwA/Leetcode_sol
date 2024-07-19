class Solution {
public:
    int mini(vector<int>& temp){
        int ans=temp.at(0);
        int ind=0;
        for(int i=0;i<temp.size();i++){
            if(temp.at(i)<ans){
                ans=temp.at(i);
                ind=i;
            }
        }
        return ind;
    }
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
         vector<int>ans;
         int ind,check;
         for(int i=0;i<matrix.size();i++){
            ind=mini(matrix.at(i));
            check=1;
            for(int j=0;j<matrix.size();j++){
                if(matrix.at(i).at(ind)<matrix.at(j).at(ind)){
                    check=0;
                    break;
                }
            }
            if(check==1){
                ans.push_back(matrix.at(i).at(ind));
            }
         }
         return ans;
    }
};