class Solution {
public:
    bool present(string s, char ch){
        for(int i=0;s[i]!='\0';i++){
            if(s[i]==ch){
                return true;
            }
        }
        return false;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int ans=0;
        int temp;
        for(int i=0;i<words.size();i++){
            temp=0;
            for(int j=0;words.at(i)[j]!='\0';j++){
                if(present(allowed,words.at(i)[j])){
                    temp++;
                }
            }
            if(temp==words.at(i).length()){
                ans++;
            }
        }
        return ans;
    }
};