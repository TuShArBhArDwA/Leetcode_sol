class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        int min=nums.at(0);
        for(int i=1;i<nums.size();i++){
           if(nums.at(i)<=nums.at(i-1)){
                ans=ans+(nums.at(i-1)-nums.at(i))+1;
                nums.at(i)=nums.at(i)+(nums.at(i-1)-nums.at(i)+1);
            }
        }
        return ans;
    }
};