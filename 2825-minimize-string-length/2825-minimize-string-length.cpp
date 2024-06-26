class Solution {
public:
    int minimizedStringLength(string s) {
        set<char>s1;
        for(int i=0;s[i]!='\0';i++){
                s1.insert(s[i]);
        }
        return s1.size();
    }
};