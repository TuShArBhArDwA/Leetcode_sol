class Solution {
public:
     int n;
    vector<int> dp;
    int solve(int ind,vector<int>& prices){
        if(ind>=n)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        int ans = INT_MAX;
        int x = prices[ind];
        for(int i=ind;i<=2*ind;i++){
            int y = solve(i+1,prices);
            ans = min(ans,x+y);
        }
        return dp[ind] = ans;
    }
    int minimumCoins(vector<int>& prices) {
        //To make it 1-indexed array
        prices.insert(prices.begin(),0);
        n = prices.size();
        dp.resize(n,-1);
        return solve(1,prices);
    }
};