/*给定单向链表头的头指针和节点指针，在O(1)时间内删除节点*/

struct ListNode{
  int value;
  ListNode *next;
};
void delete_node(ListNode* head, ListNode* node){
  if(head == NULL || node == NULL)
    return;
  if(head == node){
    delete head;
    head=NULL;
    node=NULL;
  }
  if(node->next==NULL){
    ListNode* temp;
    temp=head;
    while(temp->next != node)
      temp=temp->next;
    temp->next=NULL;
    delete node;
  }else
  if(node->next != NULL){
    ListNode* temp;
    temp=node->next;
   // int value_temp=node->value;
    node->value=temp->value;
  //  temp->value=value_temp;
    node->next=temp->next;
    delete temp;
    temp=NULL;
  }
}
