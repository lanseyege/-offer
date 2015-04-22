/*用两个栈实现队列*/

template <typename T> class CQueue
{
  public:
    CQueue(void);
    ~CQueue(void);
    void appendTail(const T& node);
    T deleteHead();
  private:
    stack<T> stack1;
    stack<T> stack2;
}
/*book's solution**/
template<typename T> void CQueue<T>::appendTail(const T& element){
  stack1.push(element);
}
template<typename T> T CQueue<T>::deleteHead(){
  if(stack2.size<=0){
    while(stack1.size>0){
      stack2.push(stack1.top());
      stack1.pop();
      /*
      T& data = stack1.top();
      stack1.pop();
      stack2.push(data);
      */
    }
  }
  if(stack2.size == 0)
    throw new exception("queue is empty");
  T head = stack2.top();
  stack2.pop();
  returm head;
}