class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        vector<int>temp;
        int ind;
        // Sorting right diagonals from primary diagnoal
        for(int i=0;i<mat.at(0).size()-1;i++){
            ind=0;
            for(int j=0;j<mat.size();j++){
                if(i+j<mat.at(0).size()){
                    temp.push_back(mat.at(j).at(i+j));
                }
            }
            sort(temp.begin(),temp.end());
            for(int j=0;j<mat.size();j++){
                if(i+j<mat.at(0).size()){
                    mat.at(j).at(i+j)=temp.at(ind++);
                }
            }
            temp.clear();
        }
        // Sorting left diagonals from primary diagonal
        for(int i=mat.size()-2;i>0;i--){
            ind=0;
            for(int j=0;j<mat.at(0).size();j++){
                if(i+j<mat.size()){
                    temp.push_back(mat.at(i+j).at(j));
                }
            }
            sort(temp.begin(),temp.end());
            for(int j=0;j<mat.at(0).size();j++){
                if(i+j<mat.size()){
                    mat.at(i+j).at(j)=temp.at(ind++);
                }
            }
            temp.clear();
        }
        return mat;
    }
};