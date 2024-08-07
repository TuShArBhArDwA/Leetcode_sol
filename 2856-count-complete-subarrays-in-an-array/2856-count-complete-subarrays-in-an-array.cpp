#pragma GCC optimize("Ofast")     
class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        cin.tie(0);
        cout.tie(0);
        ios::sync_with_stdio(false);
        int cnt=0;
        set<int>s1;
        for(int k:nums){
            s1.insert(k);
        }
        for(int i=0;i<nums.size();i++){
            set<int>s2;
            for(int j=i;j<nums.size();j++){
                s2.insert(nums.at(j));
                if(s1.size()==s2.size()){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};