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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* c1 = l1;
        ListNode* c2 = l2;
        ListNode* d = new ListNode(0);
        ListNode* sentinel =d;
        int sum = 0;
        
        while(c1!=NULL | c2!=NULL)
        {
            sum/=10;
            if (c1!=NULL)
            {
                sum+=c1->val;
                c1=c1->next;
            }
            if (c2!=NULL)
            {
                sum+=c2->val;
                c2=c2->next;
            }
            sentinel->next=new ListNode(sum%10);
            sentinel=sentinel->next;
        }
        if (sum/10==1)
        {
            sentinel->next=new ListNode(1);
        }
        return d->next;
    }
};
