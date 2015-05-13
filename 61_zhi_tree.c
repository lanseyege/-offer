
void print_tree(TreeNode* root){
  if(root == NULL)
    return;
  stack<TreeNode*> stack1;
  stack<TreeNode*> stack2;
  stack1.push(root);
  while(!(stack1.empty()&&stack2.empty())){
    while(!stack1.empty()){
      TreeNode* node=stack1.pop();
      printf("%d ",node->value);
      if(node->left!=NULL)
        stack2.push(node->left);
      if(node->right!=NULL)
        stack2.push(node->right);
    }
    printf("\n");
    while(!stack2.empty()){
      TreeNode* node=stack2.pop();
      printf("%d ",node->value);
      if(node->right!=NULL)
        stack1.push(node->right);
      if(node->right!=NULL)
        stack1.push(node->left);
    }
    printf("\n");
  }
}
