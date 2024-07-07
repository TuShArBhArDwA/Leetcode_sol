#pragma GCC optimize("Ofast")    
class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        if(purchaseAmount%10>4){
            purchaseAmount+=(10-purchaseAmount%10);
        }
        else{
            purchaseAmount-=(purchaseAmount%10);
        }
        return 100-purchaseAmount;
    }
};