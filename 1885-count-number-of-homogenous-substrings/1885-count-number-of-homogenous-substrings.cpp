class Solution {
public:
   const long long mod=1e9+7;
    int countHomogenous(string s) {
        vector<int> len_homo;
        char prev='X';
        int count=0;

        #pragma unroll
        for(char c: s){
            if (c!=prev){
                len_homo.push_back(count);
                count=1;
            }
            else count++;
            prev=c;// update prev
        }
        len_homo.push_back(count);// last one

        long long ans=0;

        #pragma unroll
        for(int sz: len_homo)
            ans=(ans+(long long)sz*(sz+1)/2)%mod;
        return ans;
    }
};
auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();