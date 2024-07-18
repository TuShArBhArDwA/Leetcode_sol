class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
    bool solve(vector<vector<char>>&board){
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board.at(0).size();j++){
                if(board.at(i).at(j)=='.'){
                for(char c='1';c<='9';c++){
                    if(valid(board,i,j,c)){
                        board.at(i).at(j)=c;
                    if(solve(board)==true){
                        return true;
                    }
                    else{
                        board[i][j]='.';
                    }
                }
                }
                return false;
                }
            }
        }
        return true;
    }
    bool valid(vector<vector<char>>& board,int row,int col,char ch){
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
};