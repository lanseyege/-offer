/*判断B是不是A的子结构*/

struct BinaryTreeNode{
  int value;
  BinaryTreeNode* left;
  BinaryTreeNode* right;
};
int sub_tree(BinaryTreeNode* tree_a, BinaryTreeNode* tree_b){
  if(tree_b == NULL)
    return 1;
  if(tree_a == NULL && tree_b != NULL)
    return 0;
  if(tree_a->value == tree_b->value){
    return sub_tree(tree_a->left, tree_b->left) && sub_tree(tree_a->right, tree_b->right);
  }else{
    return sub_tree(tree_a->left, tree_b) || sub_tree(tree_a->right, tree_b);
  }
}
