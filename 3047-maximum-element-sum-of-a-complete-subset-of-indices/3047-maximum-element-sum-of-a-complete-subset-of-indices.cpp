class Solution {
public:
    long long maximumSum(vector<int>& nums) {
        long long ans=0;
        long long sz=nums.size();
        long long l=1;
        
        for(;l<=sz;l++){
            long long t=1;
            long long sum=0;
            while(1){
                long long index=l*(t*t);
                if(index>sz)
                    break;
                sum+=nums[index-1];
                t++;
            }
           ans=max(ans,sum); 
        }
        return ans;
    }
};