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
    int helper(TreeNode* root)
    {
        if(!root)
        {
            return 0;
        }
        return max(helper(root->left),helper(root->right))+1;
    }
    int maxDepth(TreeNode* root) {
        if(root==nullptr)
        return 0;
        int lh=helper(root->left);
        int rh= helper(root->right);
        return max(lh,rh)+1;
        /*int left_height=maxDepth(root->left);
        int right_height=maxDepth(root->right);
        return max(left_height,right_height)+1;*/
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna