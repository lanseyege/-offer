/*it is not easy to understand..., so sad...*/
bool has_sub_tree(BinaryTreeNode* root1, BinaryTreeNode* root2){
  bool result=false;
  if(root1 != NULL && root2 != NULL){
    if(root1->value == root2->value)
      result=tree1_has_tree2(root1, root2);
    if(!result)
      result=has_sub_tree(root1->left,root2);
    if(!result)
      result=has_sub_tree(root1->right,root2);
  }
  return result;
}
bool tree1_has_tree2(BinaryTreeNode* root1, BinaryTreeNode* root2){
  if(root2 == NULL)
    return true;
  if(root1 == NULL)
    return false;
  if(root1->value != root2->value)
    return false;
  return tree1_has_tree2(root1->left,root2->left) && tree1_has_tree2(root1->right, root2->right);
}
