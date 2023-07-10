//https://www.codingninjas.com/studio/problems/diameter-of-binary-tree_8230762?challengeSlug=striver-sde-challenge&leftPanelTab=0
int solve(TreeNode<int> *root,int& diameter){
    if(root == NULL)
        return 0;
    
    int lt = solve(root->left,diameter);
    int rt = solve(root->right,diameter);

    diameter = max(diameter,lt+rt);
    return 1 + max(lt,rt);
}
int diameterOfBinaryTree(TreeNode<int> *root){
	// Write Your Code Here.
    int diameter =  0;
    solve(root,diameter);
    return diameter;
}
