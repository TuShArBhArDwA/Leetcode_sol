class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt;
        vector<int>ans;
        int found; // To check for duplicacy
        int start=1; // To break the loop
        for(int j=0;start!=0;j++){
            found=0;
        for(int i=0;i<ans.size();i++){
            if(ans.at(i)==nums.at(j)){
                found=1;
                break;
            }
        }
        if(found==0){
            ans.push_back(nums.at(j));
            cnt=0;
            for(int k=0;k<nums.size();k++){
                if(nums.at(j)==nums.at(k)){
                    cnt++;
                    if(cnt>(nums.size()/2)){
                        start=0;
                        break;
                    }
                }
            }
        }
        }
        return (*(ans.end()-1));
    }
};