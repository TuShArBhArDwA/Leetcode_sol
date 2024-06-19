class Solution {
public:
    vector<int> evenOddBit(int n) {
        int odd=0;
        int even=0;
        string ans="";
        while(n!=0){
            if(n%2==0){
                ans+="0";
            }
            else{
                ans+="1";
            }
            n/=2;
        }
        for(int i=ans.length()-1;i>=0;i--){
            if(ans[i]=='1'){
                if(i%2==0){
                    even++;
                }
                else{
                    odd++;
                }
            }
        }
        return {even,odd};
    }
};