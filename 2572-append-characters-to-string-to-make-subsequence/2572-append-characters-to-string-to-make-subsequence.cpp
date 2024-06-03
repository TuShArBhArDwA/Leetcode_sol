class Solution {
public:
    int appendCharacters(string s, string t) {
        int ans=0;
        int ind=0;
        for(char c:s){
            if(c==t[ind]){
                ans++;
                ind++;
            }
            if(ind==t.length()){
                break;
            }
        }
        return t.length()-ans;
    }
};