class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        vector<int>ele;
        vector<int>freq;
        sort(nums.rbegin(),nums.rend());
        int curr=nums.at(0);
        int cnt=1;
        for(int i=1;i<nums.size();i++){
            if(nums.at(i)!=curr){
                ele.push_back(curr);
                freq.push_back(cnt);
                curr=nums.at(i);
                cnt=1;
            }
            else{
                cnt++;
            }
        }
        ele.push_back(curr);
        freq.push_back(cnt);
        for(int i=0;i<freq.size();i++){
            for(int j=0;j<freq.size()-1;j++){
                if(freq.at(j)>freq.at(j+1)){
                    curr=freq.at(j);
                    freq.at(j)=freq.at(j+1);
                    freq.at(j+1)=curr;
                    cnt=ele.at(j);
                    ele.at(j)=ele.at(j+1);
                    ele.at(j+1)=cnt;
                }
            }
        }
        nums.clear();
        for(int i=0;i<ele.size();i++){
            for(int j=0;j<freq.at(i);j++){
                nums.push_back(ele.at(i));
            }
        }
        return nums;
    }
};