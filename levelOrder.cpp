//https://www.codingninjas.com/studio/problems/level-order-traversal_8230716?challengeSlug=striver-sde-challenge&leftPanelTab=0
#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
vector<int> getLevelOrder(BinaryTreeNode<int> *root){
    //  Write your code here.
    vector<int> ans;
    if(root == NULL)
        return ans;
    queue<BinaryTreeNode<int>* > q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        for(int i = 0;i<size;i++){
            BinaryTreeNode<int>* top = q.front();
            q.pop();
            if(top->left != NULL)
                q.push(top->left);
            if(top->right != NULL)
                q.push(top->right);
            ans.push_back(top->val);
        }
    }
    return ans;

}
