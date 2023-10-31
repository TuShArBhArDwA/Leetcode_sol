class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>ans;
        int found;
        for(int i=0;i<nums.size();i++){
            found=0;
            for(int j=0;j<ans.size();j++){
                if(ans.at(j)==nums.at(i)){
                    found=1;
                    break;
                }
            }
            if(found==0){
                ans.push_back(nums.at(i));
            }
        }
        nums=ans;
        return ans.size();
    }
};