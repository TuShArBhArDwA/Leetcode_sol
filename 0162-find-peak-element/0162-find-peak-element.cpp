class Solution {
public:
    int findPeakElement(vector<int>&arr) {
        int low=0;
    int high=arr.size()-1;
    int mid;
    if(arr.size()==1){
        return 0;
    }
    else if(arr.size()==2){
        if(arr.at(0)>arr.at(1)){
            return 0;
        }
        return 1;
    }
    else{
        while(low<=high){
            mid=low+(high-low)/2;
            if(mid==low||mid==high){
                if(mid==low&&mid==high){
                    return mid;
                }
                else if(mid==low){
                    if(arr.at(mid)<arr.at(mid+1)){
                        low=mid+1;
                    }
                    else{
                    return mid;
                    }
                }
                else{
                    if(arr.at(mid)<arr.at(mid-1)){
                        high=mid-1;
                    }
                    else{
                        return mid;
                    }
                }
            }
            else if(arr.at(mid)>arr.at(mid+1)&&arr.at(mid)>arr.at(mid-1)){
                return mid;
            }
            else if(arr.at(mid)<arr.at(mid+1)){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
        return -1;
    }
};