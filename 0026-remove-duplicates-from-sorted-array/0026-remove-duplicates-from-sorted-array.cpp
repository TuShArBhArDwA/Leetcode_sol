class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s1;
        vector<int>ans;
        int temp_size;
        for(int i=0;i<nums.size();i++){
            temp_size=s1.size();
            s1.insert(nums.at(i));
            if(s1.size()>temp_size){
                ans.push_back(nums.at(i));
            }
        }
        nums=ans;
        return s1.size();
    }
};