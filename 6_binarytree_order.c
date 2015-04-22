/*二叉树前序遍历-递归*/
int preorder(BinarayTree* ptree, int(*visit)(int)){
  if(ptree){
    if(visit(ptree->value))
      if(preoder(ptree->left, visit))
        if(preorder(ptree->right, visit))
          return 1;
    return 0;
  }else
    return 1;
}
/*中序遍历-递归*/
int inorder(BinaryTree* ptree, int(*visit)(int)){
  if(ptree){
    if(inorder(ptree->left,vist))
      if(visit(ptree->value))
        if(inorder(ptree->right,visit))
          return 1;
    return 0;    
  }else
    return 1;
}
/*后续遍历-递归*/
int aforder(BinaryTree* ptree, int(*visit)(int)){
  if(ptree){
    if(aforder(ptree->left,visit))
      if(aforder(ptree->right,visit))
        if(visit(ptree->value))
          return 1;
    return 0;
  }else
    return 1;
}
