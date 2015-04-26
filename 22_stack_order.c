bool is_pop_order(const int* s_push, const int* s_pop, int length){
  if(s_push == NULL || s_pop == NULL || length == 0)
    return false;
  if(strlen(s_push) != strlen(s_pop))
    return false;
  if(strlen(s_push) == 1)
    return true;
  std::stack<int> m_data;
  int i = 0, j = 0;
  while(s_push[i] != '\0' && s_pop[j] != '\0'){
    if(s_push[i] != s_pop[j]){
      if(j == 0)
        m_data.push_back(s_push[i]);
        i++;
      else if(s_data)if(s_data.top() == s_pop(j))
        s_data.pop();
        j++;
      i++;  
    }
    else {
    //  m_data.pop();
      i++;
      j++;
    }
  } 
  if(i < nlength - 1)
    return false;
  if(m_data
}
bool fun(int * push,int * pop, int lenght){
  int i=0, j=0;
  while(1){
    if(pop[i] != m_data.top()){
      if(j < length )
        m_data.push_back(push[j++]);
      else
        return false;
    }else{
      m_data.pop();
      i++;
    }
  }
  return true;
}
