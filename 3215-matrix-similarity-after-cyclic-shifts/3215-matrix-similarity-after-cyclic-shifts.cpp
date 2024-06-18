class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        bool isSimilar = true;
        
        int m = mat.size(), n = mat[0].size();

        for(int i = 0; i < m; i+=2) {
            for(int j = 0; j < n; j++) {
                isSimilar &= mat[i][j] == mat[i][(j+k)%n];
            }
        }
        for(int i = 1; i < m; i+=2) {
            for(int j = 0; j < n; j++) {
                int y = j - (k%n);
                y = y < 0 ? y + n : y;

                isSimilar &= mat[i][j] == mat[i][y];
            }
        }
        return isSimilar;
    }
};