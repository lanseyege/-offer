
bool btree_number(binary_tree_node* root, int number){
  if(root == NULL)
    return false;
  if(root->value > number)
    return false;
  if(root->left == NULL && root->right == NULL)
    if(root->value == number)
      print();
      return true;
    else
      return false;
  else
    bool left = false, right = false;
    if((left = btree_number(root->left, number - root->value)))
      print()
    if(right = btree_number(root->right,number - root->value)))
      print();
    return left || right;
  return true;
}
