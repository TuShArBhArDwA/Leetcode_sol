class Solution {
public:
    void solve(int index,string digits,vector<string>&ans,string temp,vector<string>&mpp){
        if(index==digits.size()){
            ans.push_back(temp);
            return;
        }
        string value=mpp[digits[index]-'0'];
        for(char c:value){
            temp.push_back(c);
            solve(index+1,digits,ans,temp,mpp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string>ans;
        vector<string>mpp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string temp;
        solve(0,digits,ans,temp,mpp);
        return ans;
    }
};