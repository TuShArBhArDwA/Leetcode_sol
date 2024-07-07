class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
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