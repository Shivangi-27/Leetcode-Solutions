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
    bool hasCycle(ListNode *head) {
        struct ListNode *slow=head;
	struct ListNode *fast=head;
    if(slow == NULL || slow->next==NULL) 
        return false;
    while(fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
		fast=fast->next->next;
        if(slow==fast)
		    return true;
	}
    return false;
    }
};