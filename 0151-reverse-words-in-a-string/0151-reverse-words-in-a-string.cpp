class Solution {
public:
    string reverseWords(string s) {
        vector<string>arr;
        string temp="";
        s+=' ';
        for(int i=0;s[i]!='\0';i++){
            if(s[i]==' '){
                if(temp.size()>0){
                    arr.push_back(temp);
                    temp="";
                }
            }
            else{
                temp+=s[i];
            }
        }
        reverse(arr.begin(),arr.end());
        temp="";
        for(int k=0;k<arr.size()-1;k++){
            temp=temp+arr.at(k)+" ";
        }
        temp+=arr.at(arr.size()-1);
        return temp;
    }
};