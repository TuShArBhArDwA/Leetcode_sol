class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            if(nums.at(i)==val){
                continue;
            }
            else{
                ans.push_back(nums.at(i));
            }
        }
        nums=ans;
        return ans.size();
    }
};