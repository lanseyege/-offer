/*用两个队列实现栈*/
template <typename T> class cstack
{
  public:
    cstack(void);
    ~cstack(void);
    void push(const T& node);
    T pop();
  private:
    queue<T> queue1;
    queue<T> queue2;
}
template<typename T> void cstack<T>::push(const T& element){
  if(queue1.size>0){
    queue1.append(element);
  }else{
    queue2.append(element);
  }
}
template<typename T> T& pop(){
  if(queue1.size>0){
    if(queue1.size == 1)
      queue1.delete();
    else{
      while(queue1.size>1){
        T& data=queue1.delete();
        queue2.append(data);
      }
      queue1.delete()
    }
  }else if(queue2.size>0){
    if(queue2.size == 1)
      queue2.delete();
    else{
      while(queue2.size>1){
        T& data=queue2.delete();
        queue1.append(data);
      }
      queue2.delete()
    }
  }else{
    throw new exception("stack is empty");
  }
}
