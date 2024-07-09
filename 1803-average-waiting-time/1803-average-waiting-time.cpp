#pragma GCC optimize("Ofast")  
class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        double ans=0;
        double pre=customers.at(0).at(0);
        for(int i=0;i<customers.size();i++){
            if(pre>=customers.at(i).at(0)){
                pre+=customers.at(i).at(1);
                ans+=(pre-customers.at(i).at(0));
            }
            else {
                ans+=customers.at(i).at(1);
                pre=customers.at(i).at(0)+customers.at(i).at(1);
            }
            // cout<<pre<<" "<<ans<<endl;
        }
        return ans/customers.size()*1.0;
    }
};