class Solution {
public:
    int findComplement(int num) {
        string temp="";
        for(int i=num;i!=0;i/=2){
            if(i%2==0){
                temp+='0';
            }
            else{
                temp+='1';
            }
        }
    int ans=0,k=0;
    for(int j=0;j<temp.size();j++){
            // Taking the '0' bcz we have to complement
            if(temp[j]=='0'){
                ans+=pow(2,k);
            }
            k++;
        }
        return ans;
    }
};