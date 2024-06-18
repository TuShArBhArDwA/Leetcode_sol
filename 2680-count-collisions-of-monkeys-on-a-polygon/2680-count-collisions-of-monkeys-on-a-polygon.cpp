class Solution {
public:
    const int mod = 1e9+7;
long long int power(long long int a, long long int b){

	long long int res = 1;
	while(b){
		if(b&1) res = res*a%mod;
		a = a*a%mod;
		b /= 2;
	}

	return (int)((res - 2 + mod) % mod);
}

    int monkeyMove(int n) {
        
        return power(2,n);
    }
};