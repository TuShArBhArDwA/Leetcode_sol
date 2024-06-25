class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1){
            return strs.at(0);
        }
        string ans="";
        char ch;
        int cnt=0;
        while(1){
            ch=strs.at(0)[cnt];
            for(int j=1;j<strs.size();j++){
                if(strs.at(j)[cnt]=='\0'||ch!=strs.at(j)[cnt]){
                    return ans;
                }
            }
            ans+=ch;
            cnt++;
        }
        return ans;
    }
};