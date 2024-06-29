class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        vector<pair<char,int>>namearr;
        vector<pair<char,int>>typedarr;
        int cnt=1;
        for(int i=0;i<name.size()-1;i++){
            if(name.at(i)==name.at(i+1)){
                cnt++;
            }
            else{
                namearr.push_back(make_pair(name.at(i),cnt));
                cnt=1;
            }
        }
        namearr.push_back(make_pair(name.at(name.size()-1),cnt));
        cnt=1;
        for(int i=0;i<typed.size()-1;i++){
            if(typed.at(i)==typed.at(i+1)){
                cnt++;
            }
            else{
                typedarr.push_back(make_pair(typed.at(i),cnt));
                cnt=1;
            }
        }
        typedarr.push_back(make_pair(typed.at(typed.size()-1),cnt));
        if(typedarr.size()!=namearr.size()){
            return false;
        }
        for(int k=0;k<namearr.size();k++){
            if(namearr.at(k).first!=typedarr.at(k).first||namearr.at(k).second>typedarr.at(k).second){
                return false;
            }
        }
        return true;
    }
};