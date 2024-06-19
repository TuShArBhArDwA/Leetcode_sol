class Solution {
public:
    long long maximumSumOfHeights(vector<int>& m) {
         int ind = 0, height; 
        int n = m.size(); 
        long long ans = 0; 
        

        // Iterate through the elements of the input vector
        for(int i=0;i<n;i++)
        {
            long long res = 0; // Initialize a variable to store the current sum
            int temp = m[i]; // Initialize a temporary variable with the current element

            // Calculate the sum of heights to the left of the current element
            for(int j=i; j>=0; j--)
            {
                temp = min(temp, m[j]); // Update the minimum height encountered so far
                res = res + temp; // Add the minimum height to the sum
            }

            

            temp = m[i]; // Reset the temporary variable with the current element

            // Calculate the sum of heights to the right of the current element
            for(int j = i+1; j<n; j++)
            {
                temp = min(temp, m[j]); // Update the minimum height encountered so far
                res = res + temp; // Add the minimum height to the sum
            }

            ans = max(ans, res); // Update the maximum sum if the current sum is greater
        }

        return ans; // Return the maximum sum
    }
};