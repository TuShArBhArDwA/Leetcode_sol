class Solution {
public:
    void solve(vector<vector<int>>&image,vector<vector<int>>&ans,vector<int>&row,vector<int>&col,int sr,int sc,int color,int init){
        ans[sr][sc]=color;
        for(int i=0;i<4;i++){
            int nrow=sr+row[i];
            int ncol=sc+col[i];
            if(nrow>=0&&nrow<image.size()&&ncol>=0&&ncol<image.at(0).size()&&image.at(nrow).at(ncol)==init&&ans.at(nrow).at(ncol)!=color){
                solve(image,ans,row,col,nrow,ncol,color,init);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>>ans=image;
        vector<int>row={-1,0,1,0};
        vector<int>col={0,1,0,-1};
        int init=image.at(sr).at(sc);
        solve(image,ans,row,col,sr,sc,color,init);
        return ans;
    }
};