bool is_balance_btree(BinaryTreeNode* root， int* depth){
  if(root == NULL){
    depth=0;
    return true;
  }
  int left,right;
  if(is_balance_btree(root->left,&left) && is_balance_btree(root->right,&right)){
    int evl=left-right;
    if(evl<=1 && evl>=-1){
      depth=1+left>right?left:right;
      return true;
    }
  }
  return false;
}
