class Solution {
public:
    long long minimumSteps(string s) {
        long long ans=0;
        int l=0;
        int r=s.size()-1;
        while(l<=r){
            if(s[r]=='1'){
                r--;
            }
            else if(s[l]=='0'){
                l++;
            }
            else{
                swap(s[l],s[r]);
                ans+=(r-l);
                l++;
                r--;
            }
        }
        return ans;
    }
};