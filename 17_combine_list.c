/*合并两个排序的链表*/

struct ListNode{
  int value;
  ListNode* next;
};
ListNode* combine_list(ListNode* head1, ListNode* head2){
  if(head1==NULL || head2==NULL)
    return NULL;
  ListNode* new_node=NULL,head_node=NULL;
  if(head1->value>heqad2->value){
    new_node=head2;
    head2=head2->next;
  }
  else{
    new_node=head1;
    head1=head1->next;
  }
  head_node=new_node;
  while(head1 != NULL && head2 != NULL){
    if(head1->value > head2->value){
      new_node->next=head2;
      new_node=head2;
      head2=head2->next;
    }else{
      new_node->next=head1;
      new_node=head1;
      head1=head1->next;
    }
    if(head1 == NULL)
      new_node->next=head2;
    if(head2 == NULL)
      new_node->next=head1;
  }
  return head_node;
}
