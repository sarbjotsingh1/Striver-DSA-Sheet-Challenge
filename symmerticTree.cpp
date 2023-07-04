// https://www.codingninjas.com/studio/problems/symmetric-tree_8230686?leftPanelTab=0
/*****************************************************

    Following is the Binary Tree node structure:
    
    class BinaryTreeNode {
        public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if(left) 
                delete left;
            if(right) 
                delete right;
        }
    };

******************************************************/


bool solve(BinaryTreeNode<int>* l,BinaryTreeNode<int>* r){
    if(!l && !r)
        return true;
    if(!l || !r)
        return false;
    if(l->data != r->data)
        return false;

    return solve(l->left,r->right) && solve(l->right,r->left);
}

bool isSymmetric(BinaryTreeNode<int>* root){
    // Write your code here.    
    if(!root)
        return true;
    return solve(root->left,root->right);
    
}
