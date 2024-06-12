class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return 1;
        long long low=1;
        long long high=num/2;
        long long mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if((mid*mid)==num){
                return 1;
            }
            else if((mid*mid)>=num){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return 0;
    }
};