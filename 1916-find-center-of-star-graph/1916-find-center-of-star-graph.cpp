class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        if(edges.at(0).at(0)==edges.at(1).at(0)||edges.at(0).at(0)==edges.at(1).at(1)){
            return edges.at(0).at(0);
        }
        return edges.at(0).at(1);
    }
};