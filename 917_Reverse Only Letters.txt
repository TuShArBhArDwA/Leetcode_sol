class Solution {
public:
    string reverseOnlyLetters(string s) {
        queue<int>indice; // vector to store indice
        string ch; // to store the characters
        for(int i=0;s[i]!='\0';i++){
            if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                indice.push(i);
                ch+=s[i];
            }
        }
        int m=ch.length()-1;
        while(!indice.empty()){
            s[indice.front()]=ch[m--];
            indice.pop(); 
        }
        return s;
    }
};