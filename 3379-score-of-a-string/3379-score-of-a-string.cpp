class Solution {
public:
    int scoreOfString(string s) {
        int ans=0;
        for(int i=0;i<s.length()-1;i++){
            if(s[i]==s[i+1]){
                continue;
            }
            else{
                ans+=abs(s[i]-s[i+1]);
            }
        }
        return ans;
    }
};