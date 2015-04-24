/*递归解法*/
ListNod× merge(ListNode* head1, ListNode* head2){
  if(head1 == NULL)
    return head2;
  if(head2 == NULL)
    return head1;
  ListNode* new_head=NULL;
  if(head1->value < head2->value){
    new_head=head1;
    new_head->next=merge(head1->next,head2);
  }else{
    new_head=head2;
    new_head->next=merge(head2->next,head1);
  }
  return new_head;
}
