/*int a binary tree, not bst..*/
#include <iostream>
using namespace std;
struct Node{
  int key;
  struct Node * left, *right;
};
Node* newNode(int key){
  Node* temp = new Node;
  temp->key=key;
  temp->left=temp->right=NULL;
  return temp;
}
struct Node* lca(struct Node* root, int n1, int n2){
  if(root == NULL) return NULL;
  if(root->key == n1 || root->key == n2)
    return root;
  Node* lca_l = lca(root->left, n1, n2);
  Node* lca_r = lca(root->right, n1, n2);
  if( lca_l && lca_r) return root;
  return (lca_l != NULL) ? lca_l : lca_r;
}
int main()
{
    // Let us create binary tree given in the above example
    Node * root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    cout << "LCA(4, 5) = " << findLCA(root, 4, 5)->key;
    cout << "\nLCA(4, 6) = " << findLCA(root, 4, 6)->key;
    cout << "\nLCA(3, 4) = " << findLCA(root, 3, 4)->key;
    cout << "\nLCA(2, 4) = " << findLCA(root, 2, 4)->key;
    return 0;
}
