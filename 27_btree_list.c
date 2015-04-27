void tree_double_list(binary_tree_node* current_node, binary_tree_node* last_node){
  
  if(current_node == NULL)
    return NULL;
    
  if(current_node->left != NULL)
    tree_double_list(current_node->left, last_node);
    
  current_node->left = last_node;
  
  if(last_node != NULL)
    last_node->right = current;
    
  last_node = current_node;
  
  if(current_node->right != NULL)
    tree_node_list(current_node->right, last_node);
}
