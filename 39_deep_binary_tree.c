struct BinaryTreeNode{
  int value;
  BinaryTreeNode* left;
  BinaryTreeNode* right;
};
/*
int deep(BinaryTreeNode* root){
  if(root == NULL)
    return 0;
  Queue<BinaryTreeNode* > queue;
  queue.inqueue(root);
  BinaryTreeNode* node;
  while(queue.size() != 0){
    node = queue.dequeue();
    if(node->left != NULL)
      queue.inqueue(node->left);
    if(node->right != NULL)
      queue.inqueue(node->right);
  }
}*/
int tree_deep(BinaryTreeNode* root){
  if(root = NULL)
    return 0;
  int lft = tree_deep(root->left);
  int rght= tree_deep(root->right);
  return (lft>rght)?(lft+1):(rght+1);
}
