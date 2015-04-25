
struct binary_tree_node{
  int value;
  binary_tree_node* left;
  binary_tree_node* right;
};
struct binary_tree_node* tree_image(binary_tree_node* root){
  if(root == NULL)
    return NULL;
  binary_tree_node* node = root->left;
  root->left=tree_image(root->right);
  root->right=tree_image(node);
  return root;
}
