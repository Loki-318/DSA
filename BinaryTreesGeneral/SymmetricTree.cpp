// #101
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
    bool checkSymmetry(TreeNode* leftSubTree, TreeNode* rightSubTree){
        if(leftSubTree == nullptr && rightSubTree == nullptr) return leftSubTree == rightSubTree;
        if(!leftSubTree || !rightSubTree) return false;
        if(leftSubTree->val != rightSubTree->val) return false;
        return checkSymmetry(leftSubTree->left, rightSubTree->right) &&
               checkSymmetry(leftSubTree->right, rightSubTree->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root == nullptr) return true;
        return checkSymmetry(root->left, root->right);
    }
};
