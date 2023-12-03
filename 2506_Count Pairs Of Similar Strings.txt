class Solution {
public:
    int similarPairs(vector<string>& words) {
        int count =0;
        for(int i=0;i<words.size();i++){
            unordered_set<char> st;
            for(auto w:words[i]){
                st.insert(w);
            }   
            for(int j=i+1;j<words.size();j++){
                bool flag = true;
                unordered_set<int> temp;
                for(auto w:words[j]){
                    temp.insert(w);
                    if(st.find(w) == st.end()){
                        flag = false;
                        break;
                    }
                }
                if(flag && temp.size() == st.size()) {
                    cout<<words[i]<<"-->"<<words[j]<<endl;
                    count++;
                }
            }  
        }
        return count;
    }
};