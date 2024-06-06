class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
       int first;
    int count;
    if(hand.size()%groupSize!=0){
        return false;
    }
    sort(hand.begin(),hand.end());
    for(int j=0;j<hand.size()/groupSize;j++){
        for(int i=0;i<hand.size();i++){
            if(hand.at(i)==-1){
                continue;
            }
            else{
                first=hand.at(i);
                hand.at(i)=-1;
                break;
            }
        }
        count=1;
        for(int j=0;j<hand.size();j++){
            if(hand.at(j)==(first+1)){
                count++;
                first++;
                hand.at(j)=-1;
            }
            if(count==groupSize){
                break;
            }
        }
        if(count!=groupSize){
            return false;
        }
    }
    return true;
    }
};