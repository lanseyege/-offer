/*层次遍历,树的宽度优先遍历*/
struct binary_tree_node{
  int value;
  binary_tree_node* left;
  binary_tree_node* right;
};
void print_btree(binary_tree_node* root){
  if(root == NULL)
    return;
  std::queue<int> qu_tree;
  qu_tree.inqueue(root);
  while( ! qu_tree.empty()){
    binary_tree_node* temp_node;
    temp_node = qu_tree.dequeue();
    print(temp_node->value);
    if(temp_node->left != NULL)
      qu_tree.inqueue(temp_node->left);
    if(temp_node->right != NULL)
      qu_tree.inqueue(temp_node->right);
  }
}
