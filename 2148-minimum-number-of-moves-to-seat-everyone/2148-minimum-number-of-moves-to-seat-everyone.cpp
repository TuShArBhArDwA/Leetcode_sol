class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int ans=0;
        for(int j=0;j<students.size();j++){
            ans+=abs(seats.at(j)-students.at(j));
        }
        return ans;
    }
};