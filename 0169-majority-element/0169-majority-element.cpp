class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele=nums.at(0);
        int count=1;
        for(int i=1;i<nums.size();i++){
            if(ele==nums.at(i)){
                count++;
            }
            else{
                if(count==0){
                    ele=nums.at(i);
                    count=1;
                }
                else{
                    count--;
                }
            }
        }
        return ele;
    }
};