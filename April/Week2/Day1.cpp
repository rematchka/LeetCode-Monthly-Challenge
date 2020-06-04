/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        int len=0;
        if(head==NULL) return NULL;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        int mid;
        if (len%2==0)
            mid=(len/2);
        else
            mid=(len/2);
        temp=head;
        int cnt=0;
        while(mid)
        {
            mid--;
            temp=temp->next;
        }
        return temp;
            
    }
};