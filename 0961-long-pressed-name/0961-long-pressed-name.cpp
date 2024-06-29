class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        /*
        vector<int>namecount(26,0);
        vector<int>typedcount(26,0);
        vector<char>nameorder,typedorder;
        for(char c:name){
            if(namecount[c-'a']==0){
                nameorder.push_back(c);
            }
            namecount[c-'a']++;
        }
        for(char c:typed){
            if(typedcount[c-'a']==0){
                typedorder.push_back(c);
            }
            typedcount[c-'a']++;
        }
        for(int z=0;z<nameorder.size();z++){
            if(nameorder.at(z)!=typedorder.at(z)){
                return false;
            }
        }
        for(int k=0;k<namecount.size();k++){
            if(namecount.at(k)>typedcount.at(k)){
                return false;
            }
        }
        return true;
        */

        /*
        int pt1=0;
        for(int pt2=0;pt2<typed.size();pt2++){
            if(name.at(pt1)==typed.at(pt2)){
                if(pt1+1<name.size()&&name.at(pt1)==name.at(pt1+1)){
                    pt1++;
                }
            }
            else{
                if(name.at(pt1+1)!=typed.at(pt2)){
                    return false;
                }
                if(pt1+1<name.size()){
                    pt1++;
                }
            }
        }
        return true;

        */
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