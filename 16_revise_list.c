/*反转链表*/
struct ListNode{
  int value;
  ListNode* next;
};
ListNode* revise_list(ListNode* head){
  if(head == NULL || head->next == NULL)
    return head;
  ListNode* node=head;
  ListNode* temp=head->next;
  ListNode* temp_next=temp->next;
  node->next=NULL;
  while(temp != NULL){
    node=temp->next;
    temp=temp_next;
    if(temp != NULL)
      temp_next=temp_next->next;
  }
  return node;
}
