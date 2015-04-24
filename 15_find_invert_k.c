#include<stdio.h>
struct ListNode{
  int value;
  ListNode* node;
};
int find_invert_k(ListNode* head, int k){
  if(head == NULL || k <=0 )
    return NULL;
  ListNode* p1=head;
  ListNode* p2=head;
  int record=1;
  while(p1->next != NULL && record < k){
    p1=p1->next;
    record++;
  }
  if(p1->next == NULL && record < k)
    return NULL;
  /* book's solution
  for(int i=0;i<k-1;++i){
    if(p1->next != NULL)
      p1=p1->next;
    else
      return NULL;
  }
  */
  while(p1->next != NULL){
    p1=p1->next;
    p2=p2->next;
  }
  return p1->value;
}
