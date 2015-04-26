bool is_bst(int sequence[], int length){
  if(seuqence == NULL || length <= 0)
    return false;
  int root = sequence[length-1];
  int i = 0
  while(sequence[i] < root)
    i++;
  int j=i;
  for(;j<length-1;j++){
    if(sequence[j] < root)
      return false;
  }
  bool left = true;
  if(i > 0)
    left = is_bst(sequence, i);
  bool right = true;
  if(i<length-1)
    right = is_bst(sequence+i,length-i-1);
  return left && right ;
}
