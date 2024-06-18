class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sz = nums.size(), maxSum = INT_MIN;
        for(int indx = 0; indx<sz; indx++){
            for(int indx1 = indx+1; indx1 < sz; indx1++){
                int num1 = nums[indx], num2 = nums[indx1];
             
                if(maxEle(num1) == maxEle(num2)){
                    maxSum = max(maxSum, num1 + num2);
                }
            }
        }
        return maxSum == INT_MIN ? -1 : maxSum; 
    }
    int maxEle(int num){
        int maxEl = INT_MIN;
        while(num > 0){
            maxEl = max(maxEl, num % 10);
            num /=10;
        }
        return maxEl;
    }
};