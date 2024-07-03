class Solution {
public:
    int minDifference(vector<int>& nums) {
        if(nums.size()<=4){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int minDiff = min({ 
            nums[nums.size()-1] - nums[3],      // Change 3 smallest elements
            nums[nums.size()-2] - nums[2],      // Change 2 smallest and 1 largest element
            nums[nums.size()-3] - nums[1],      // Change 1 smallest and 2 largest elements
            nums[nums.size()-4] - nums[0]       // Change 3 largest elements
        });

        return minDiff;
    }
};