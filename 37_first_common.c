struct ListNode{
  int value;
  ListNode* next;
};
ListNode* first_common(ListNode* head1, ListNode* head2){
  if(head1 == NULL || head == NULL)
    return NULL;
  ListNode* h1 = head1;
  ListNode* h2 = head2;
  ListNode* comm = NULL;
  while(true){
    while(h1->next != comm)
      h1 = h1->next;
    while(h2->next != comm)
      h2 = h2->next;
    if(h1 != h2)
      return comm;
    else{
      comm = h1;
      h1 = head1;
      h2 = head2;
  }
}
ListNode* first_commom_2(ListNode* head1, ListNode* head2){
  if(head1 == NULL || head2 == NULL)
    return NULL;
  int len1=0,len2=0;
  ListNode* h1 = head1;
  ListNode* h2 = head2;
  while(h1 != NULL){
    len1 ++;
    h1 = h1->next;
  }
  while(h2 != NULL){
    len2++;
    h2 = h2->next;
  }
  h1=head1,h2=head2;
  if(len1>len2){
    while(len1-->len2)
      h1=h1->next;
  }else if(len2>len1){
    while(len2-->len1)
      h2=h2->next;
  }
  while((h1 != NULL) && (h2 != NULL) && h1->next != h2->next){
    h1=h1->next;
    h2=h2->next;
  }
  return h1->next;
}
