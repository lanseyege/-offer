void tree_double_list(binary_tree_node* root, binary_tree_node* node){
  if(root == NULL)
    return NULL;
  if(root->left != NULL)
    tree_double_list(root->left, node);
  root->left = node;
  node=root;
  if(root->right != NULL)
    tree_double_list(root->right,node);
  root->right = node;
  
}
