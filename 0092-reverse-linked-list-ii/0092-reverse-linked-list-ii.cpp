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
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        vector<int>arr;
        ListNode* curr=head;
        while(curr!=nullptr){
            arr.push_back(curr->val);
            curr=curr->next;
        }
        reverse(arr.begin()+left-1,arr.begin()+right);
        curr=head;
        int ind=0;
        while(curr!=nullptr){
            curr->val=arr.at(ind++);
            curr=curr->next;
        }
        return head;
    }
};