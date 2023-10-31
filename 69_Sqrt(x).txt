class Solution {
public:
    int mySqrt(int x) {
        long ans=0;
        while(1){
            if(ans*ans>x){
                ans-=1;
                break;
            }
            else{
            ans++;
            }
        }
        return ans;
    }
};