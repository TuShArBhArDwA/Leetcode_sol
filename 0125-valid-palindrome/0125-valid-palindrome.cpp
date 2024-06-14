class Solution {
public:
    bool isPalindrome(string s) {
        string temp="";
        for(int i=0;s[i]!='\0';i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<='9')){
                temp+=s[i];
            }
            if(s[i]>='A'&&s[i]<='Z'){
                temp+=(s[i]+32);
            }
        }
        for(int j=0;j<temp.length()/2;j++){
            if(temp[j]!=temp[temp.length()-j-1]){
                return false;
            }
        }
        return true;
    }
};