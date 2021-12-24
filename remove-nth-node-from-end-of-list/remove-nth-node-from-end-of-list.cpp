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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        struct ListNode *node = head;
    int len=0,i=0;

    while(node!=NULL)
    {
        len++;
        node=node->next;
    }
    node = head;
    if(len==n)
    {
        return head->next;
    }
    
    while(node->next!=NULL && i!=len-n-1)
    {
        i++;
        node=node->next;
    }
    node->next = node->next->next;
    
    return head;
    }
};