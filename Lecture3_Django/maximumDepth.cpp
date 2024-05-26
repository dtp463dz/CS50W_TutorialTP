/*Given the root of a binary tree, return its maximum depth.
Độ sâu tối đa của cây nhị phân là số nút dọc theo đường dẫn dài nhất từ nút gốc xuống nút là xa nhất
*/

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct TreeNode{
    int val;
    TreeNode *right;
    TreeNode *left;
    TreeNode(): val(0), right(nullptr), left(nullptr){}
    TreeNode(int x): val(x), right(nullptr), left(nullptr){}
    TreeNode(int x, TreeNode *right, TreeNode *left): val(x), right(right), left(left){}
};

int maxDepth(TreeNode* root){
    if(!root) return 0;
    int maxLeft = maxDepth(root->left);
    int maxRight = maxDepth(root->right);
    return max(maxLeft, maxRight)+1;
}