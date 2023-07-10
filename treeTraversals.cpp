//https://www.codingninjas.com/studio/problems/tree-traversals_8230775?challengeSlug=striver-sde-challenge&leftPanelTab=0
#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/

void inorder(BinaryTreeNode<int>* root,vector<int>& inorderVec){
    if(root == NULL)
        return;
    
    inorder(root->left,inorderVec);
    inorderVec.push_back(root->data);
    inorder(root->right,inorderVec);
}
void preorder(BinaryTreeNode<int>* root,vector<int>& preorderVec){
    if(root == NULL)
        return;
    
    preorderVec.push_back(root->data);
    preorder(root->left,preorderVec);
    preorder(root->right,preorderVec);
}
void postorder(BinaryTreeNode<int>* root,vector<int>& postorderVec){
    if(root == NULL)
        return;
    
    postorder(root->left,postorderVec);
    postorder(root->right,postorderVec);
    postorderVec.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>> ans;
    vector<int> inorderVec;
    vector<int> preorderVec;
    vector<int> postorderVec;

    inorder(root,inorderVec);
    preorder(root,preorderVec);
    postorder(root,postorderVec);

    ans.push_back(inorderVec);
    ans.push_back(preorderVec);
    ans.push_back(postorderVec);

    return ans;
}
