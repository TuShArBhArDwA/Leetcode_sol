#pragma GCC optimize("Ofast")      
class Solution {
public:
     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        vector<int>ans;
        int temp,found;
        for(int i=0;i<nums1.size();i++){
            temp=-1;
            found=0;
            for(int j=0;j<nums2.size();j++){
                if(nums1.at(i)==nums2.at(j)){
                    found=1;
                }
                if(found==1){
                    if(nums2.at(j)>nums1.at(i)){
                        temp=nums2.at(j);
                        break;
                    }
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};