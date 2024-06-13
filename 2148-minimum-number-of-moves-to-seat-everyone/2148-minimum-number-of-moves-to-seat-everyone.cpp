class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int ans=0;
        for(int j=0;j<students.size();j++){
            if(students.at(j)==seats.at(j)){
                continue;
            }
            else if(students.at(j)<seats.at(j)){
                while(students.at(j)!=seats.at(j)){
                    students.at(j)++;
                    ans++;
                }
            }
            else{
                while(students.at(j)!=seats.at(j)){
                    students.at(j)--;
                    ans++;
                }
            }
        }
        return ans;
    }
};