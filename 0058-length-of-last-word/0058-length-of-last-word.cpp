class Solution {
public:
    int lengthOfLastWord(string s) {
        int var=0; // To check if the spaces are initiail;
        int ans=0;
        for(int i=s.length()-1;i>=0;i--){
            if(var==0&&s[i]==' '){
                continue;
            }
            else if(var!=0&&s[i]==' '){
                break;
            }
            else{
                ans++;
                var++;
            }
        }
        return ans;
    }
};