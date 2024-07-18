#pragma GCC optimize("Ofast")    
class Solution {
public:
    bool valid(vector<vector<char>>&board,int row,int col,char ch){
        for(int i=0;i<9;i++){
            if(board[row][i]==ch){
                return false;
            }
            if(board[i][col]==ch){
                return false;
            }
            if(board[3*(row/3)+i/3][3*(col/3)+i%3]==ch){
                return false;
            }
        }
        return true;
    }
    bool solve(vector<vector<char>>&board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.at(0).size();j++){
                if(board.at(i).at(j)=='.'){
                    for(char k='1';k<='9';k++){
                        if(valid(board,i,j,k)){
                            board.at(i).at(j)=k;
                            if(solve(board)==true){
                                return true;
                            }
                            else{
                                board.at(i).at(j)='.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        solve(board);
    }
};