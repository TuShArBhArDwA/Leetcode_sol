class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        if(arr.size()<3){
            return false;
        }
        for(int i=0;i<arr.size()-2;i++){
            if(arr.at(i)%2!=0&&arr.at(i+1)%2!=0&&arr.at(i+2)%2!=0){
                return true;
            }
        }
        return false;
    }
};