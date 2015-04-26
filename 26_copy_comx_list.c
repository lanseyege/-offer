/*the books solution*/
void clone_nodes(complex_list_node* head){
  complex_list_node* node = head;
  while(node != NULL){
    complex_list_node* cloned = new complex_list_node();
    cloned->value = node->value;
    cloned->next = node->next;
    cloned->sibling=NULL;
    node->next=cloned;
    node=cloned->next;
  }
}
void connect(complex_list_node* head){
  complex_list_node* node = head;
  while(node != NULL){
    complex_list_node* cloned = node->next;
    if(node->sibling != NULL){
      cloned->sibling = node->sibling->next;
    }
    node = cloned->next;
  }
}
