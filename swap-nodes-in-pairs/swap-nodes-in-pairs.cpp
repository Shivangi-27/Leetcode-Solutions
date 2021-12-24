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
    ListNode* swapPairs(ListNode* head) {
         int temp;
	struct ListNode *node;
	node=head;
	
	while(node!=NULL && node->next!=NULL)
	{
		temp=node->val;
		node->val=node->next->val;
		node->next->val=temp;
		node=node->next->next;
	}
    return head;
    }
};