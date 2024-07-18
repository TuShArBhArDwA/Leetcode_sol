class Solution {
public:
    void solve(int col,vector<string>& board,vector<vector<string>>& ans, vector<int>& leftRow, vector<int>& lowerDig,vector<int>& upperDig,int n){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftRow[row]==0 && lowerDig[row+col]==0 && upperDig[n-1+(col-row)]==0){
                board[row][col]='Q';
                leftRow[row]=1;
                lowerDig[row+col]=1;
                upperDig[n-1+(col-row)]=1;
                solve(col+1,board,ans,leftRow,lowerDig,upperDig,n);
                board[row][col]='.';
                leftRow[row]=0;
                lowerDig[row+col]=0;
                upperDig[n-1+(col-row)]=0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int> leftRow(n,0),lowerDig(2*n-1,0),upperDig(2*n-1,0);
        solve(0,board,ans,leftRow,lowerDig,upperDig,n);
        return ans;
    }
};