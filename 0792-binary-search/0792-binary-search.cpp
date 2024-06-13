class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low=0;
        int high=arr.size()-1;
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(arr.at(mid)==target){
                return mid;
            }
            else if(arr.at(mid)>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};