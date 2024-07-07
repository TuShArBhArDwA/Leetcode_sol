#pragma GCC optimize("Ofast")     
class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) { 
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        int ans=0;
        int extra=0;
        while(numBottles!=0){
            ans+=numBottles;
            extra+=numBottles%numExchange;
            numBottles/=numExchange;
            if(extra>=numExchange){
                numBottles+=extra/numExchange;
                extra%=numExchange;     
            }
        }
        return ans;
    }
};