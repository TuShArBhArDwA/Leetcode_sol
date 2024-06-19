class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int mx=-1;
        int cnt=-1;
        int temp;
        sort(divisors.begin(),divisors.end());
        for(int i:divisors){
            temp=0;
            for(int k:nums){
                if(k%i==0){
                    temp++;
                }
            }
            if(cnt<temp){
                cnt=temp;
                mx=i;
            }
        }
        return mx;
    }
};