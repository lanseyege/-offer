int find_half_number(int *number, int length){
  if(number == NULL || length <=0)
    return NULL;
  hash_map<int,int> hash;
  int i,j=1,k=0;
  for(i=0;i<length;i++){
    if(hash.has(number[i])){
      hash.get(number[i])++;
      if(j< ++hash.get(number[i]))
        j = hash.get(number[i]);
        k = number[i];
    }
    else
      hash.set(number[i]) = 1;
  }
  if(j>length >> 1)
    return k;
  return NULL;
}
