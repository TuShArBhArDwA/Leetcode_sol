#pragma GCC optimize("Ofast")     
class Solution {
public:
    int minOperations(vector<string>& logs) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
       int ans=0;
       for(string s:logs){
            if(s=="./"){
                continue;
            }
            else if(s=="../"){
                if(ans>0){
                    ans--;
                }
            }
            else{
                ans++;
            }
       }
       return ans;     
    }
};