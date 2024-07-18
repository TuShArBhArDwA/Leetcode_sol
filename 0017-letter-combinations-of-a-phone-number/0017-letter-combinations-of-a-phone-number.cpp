class Solution {
public:
    void solve(int ind,string digits,vector<string>&ans,string temp,vector<string>&mpp){
        if(ind==digits.size()){
            ans.push_back(temp);
            return;
        }
        string value=mpp[digits[ind]-'0'];
        for(char c:value){
            temp.push_back(c);
            solve(ind+1,digits,ans,temp,mpp);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        vector<string>ans;
        string temp;
        vector<string>mpp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};   
        solve(0,digits,ans,temp,mpp);
        return ans;
    }
};