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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
    
        int var;
	    struct ListNode *node , *temp;
        if(l1==NULL)
        return l2;
        if(l2==NULL)
        return l1;

	    node=l1;

	    while(node->next!=NULL)
	    {
		    node=node->next;
	    }
	    node->next=l2; 
    
        node=l1;
    
	    while(node!=NULL)
	    {
		    temp=node->next;
		    while(temp!=NULL)
		    {
			    if(temp->val < node->val)
			    {
				    var=node->val;
				    node->val=temp->val;
				    temp->val=var;
			    }
			    temp=temp->next;
		    }
		    node=node->next;
	    }
        return l1;
    }
};