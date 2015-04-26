struct complex_list_node{
  int value;
  complex_list_node* next;
  complex_list_node* sibling;
};
struct complex_list_node* copy_it(complex_list_node* head){
  if(head == NULL)
    return NULL;
  complex_list_node* node;
  node = head;
  hash_map<complex_list_node*> hash ;
  complex_list_node* new_node;
  while(node != NULL){
    new_node = new complex_list_node();
    hash(node)=new_node;
  }
  node=head;
  complex_list_node* new_head;
  new_head = hash(node);
  while(node!=NULL){
    new_node=hash(node);
    new_node->next = hash(node->next);
    new_node->sibling=hash(node->sibling);
    new_node->value=node->value;
  }
  return new_head;
}
