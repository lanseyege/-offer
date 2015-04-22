/*
输入一个链表的头结点，从尾到头反过来打印出每个节点的值
*/
struct ListNode{
  int key;
  ListNode* next;
};
/*my solution*/
void print_list(ListNode* pHead){
  ListNode* p = pHead;
  if(pHead == NULL)
    return;
  int n=0;
  while(p != NULL){
    p=p->next;
    n++;
  }
  int list[n];
  list = malloc(n * sizeof(int));
  p = pHead;
  n=0;
  while(p!=NULL){
    list[n]=p->key;
    p=p->next;
    n++;
  }
  while(--n >= 0)
    printf("%d\t",list[n]);
}
/*book's solution:stack*/
void print_list(ListNode* pHead){
  std::stack<ListNode*> nodes;
  ListNode* pNode=pHead;
  while(pNode != NULL){
    nodes.push(pNode);
    pNode=pNode->next;
  }
  while(!nodes.empty()){
    pNode=nodes.top();
    printf("%d\t",pNode->key);
    nodes.pop();
  }
}
/*book's another solution:recursive..*/
void print_list_recursive(ListNode* pHead){
  if(pHead != NULL){
    print_list_recursive(pHead->next);
    printf("%d\t",pHead->value);
  }
}




