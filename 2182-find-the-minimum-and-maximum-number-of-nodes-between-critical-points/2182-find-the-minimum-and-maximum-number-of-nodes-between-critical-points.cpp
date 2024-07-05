/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#pragma GCC optimize("Ofast")   
class Solution {
public:
    
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
        vector<int>crit;
        vector<int>temp;
        while(head!=nullptr){
            temp.push_back(head->val);
            head=head->next;
        }
        for(int i=1;i<temp.size()-1;i++){
            if(temp.at(i)>temp.at(i-1)&&temp.at(i)>temp.at(i+1)||temp.at(i)<temp.at(i-1)&&temp.at(i)<temp.at(i+1)){
                crit.push_back(i+1);
            }
        }
        if(crit.size()<2){
            return {-1,-1};
        }
        int mini=crit.at(1)-crit.at(0);
        for(int i=2;i<crit.size();i++){
            if(crit.at(i)-crit.at(i-1)<mini){
                mini=crit.at(i)-crit.at(i-1);
            }
        }
        return {mini,crit.at(crit.size()-1)-crit.at(0)};
    }
};