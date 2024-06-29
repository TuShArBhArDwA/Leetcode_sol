class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()<2){
            return nums.size();
        }
        sort(nums.begin(),nums.end());
        int ans=1;
        int temp=1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums.at(i+1)==nums.at(i)){
                continue;
            }
            else if(nums.at(i+1)-1==nums.at(i)){
                temp++;
            }
            else{
                ans=max(ans,temp);
                temp=1;
            }
        }
        ans=max(ans,temp);
        return ans;
    }
};