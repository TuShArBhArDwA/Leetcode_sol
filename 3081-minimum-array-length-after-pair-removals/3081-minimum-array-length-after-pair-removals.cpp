class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n = nums.size(), max_f = 0;
        unordered_map<int, int> f;
        for(auto &x : nums) max_f = max(max_f, ++f[x]);
        return n - 2 * max_f < 0 ? 2 * max_f - n : n&1 ? 1 : 0;
    }
};