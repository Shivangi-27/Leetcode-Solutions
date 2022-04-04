/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
     
        vector<int>ans;
        stack<TreeNode*>temp;
        
        TreeNode *curr = root;
        
        if(curr == NULL)
        return ans;
        
        while(true)
        {
            if(curr != NULL)
            {
                temp.push(curr);
                curr = curr->left;                
            }
            
            else
            {
                if(temp.empty() == true)
                break;
                
                curr = temp.top();
                temp.pop();
                ans.push_back(curr->val);
                
                curr = curr->right;
            }
        }
        
        return ans;             
        
    }
};