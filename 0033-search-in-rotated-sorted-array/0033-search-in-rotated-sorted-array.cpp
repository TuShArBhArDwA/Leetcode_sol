class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums.at(mid)==target){
                return mid;
            }
            else if(nums.at(low)<=nums.at(mid)){
                if(nums.at(low)<=target&&nums.at(mid)>=target){
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else{
                if(nums.at(high)>=target&&nums.at(mid)<=target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};