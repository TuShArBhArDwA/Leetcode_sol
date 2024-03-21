class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int check;
        int ans=0;
        for(int i=0;i<patterns.size();i++){
            for(int j=0;j<word.length();j++){
                if(word[j]==patterns.at(i)[0]){
                    check=1;
                    for(int k=1;k<patterns.at(i).length();k++){
                        if(patterns.at(i)[k]!=word[j+k]){
                            check=0;
                            break;
                        }
                    }
                    if(check==1){
                        ans++;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};