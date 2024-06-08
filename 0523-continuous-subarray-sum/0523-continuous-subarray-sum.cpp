class Solution {
public:
    static bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if (n<2) return 0; //its length is at least two
        unordered_map<int, vector<int>> mod_k;// 1 <= k <= 2^31 - 1
        int prefix=0;
        mod_k[0].push_back(-1);//sum can begin from index i=0
        for(int i=0; i<n; i++){
            prefix+=nums[i];
            prefix%=k;
            if (mod_k.count(prefix) && i>mod_k[prefix].front()+1) 
                return 1;
            mod_k[prefix].push_back(i);// push index i to mod_k[prefix]
        }
        return 0;
    }
      
};