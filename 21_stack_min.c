push(int data){
  if(m_stack.empty()){
    m_stack.push_back(data);
    m_min.push_back(data);
  }else{
    m_stack.push_back(data);
    int temp = m_min.top();
    if(temp>data)
      m_min.push_back(data);
    else
      m_min.push_back(temp);
  }
}
pop(){
  assert(m_stack.size()>0 && m_min.size() >0 );
  m_stack.pop();
  m_min.pop();
}
min(){
  assert(m_stack.size()>0 && m_min.size()>0);
  m_min.top();
}
