/*myself solution   */
int min(int *numbers, int length){
  if(numbers == NULL || length == 0)
    return;
  if(numbers[0]<numbers[length-1])
    return numbers[0];
  int *p1=*(numbers+length-1);
  int *p2=*numbers;
  while(p2+1 != p1){
    if(*(p1+p2)/2 >*p2){
      p2=(p1+p2)/2;
    }else if(*(p1+p2)<*p1){
      p1=(p1+p2)/2;
    }
  }
  return *p1;
}
/*book's solution1*/
int min(int *numbers, int length){
  if(numbers==NULL || length <= 0)
    throw new std::exception("");
  int index1=0;
  int index2=length-1;
  int mid_index=length;
  while(numbers[index1]>=numbers[index2]){
    if(index2-index1 == 1)
      break;
    mid_index=(index1+index2)/2;
    if(numbers[mid_index]==numbers[index1] && numbers[index1]==numbers[index2])
      return min_inorder(numbers, index1, index2);
    if(numbers[mid_index]>=numbers[index1])
      index1 = mid_index;
    else if(numbers[mid_index]<=numbers[index2])
      index2 = mid_index;
  }
  return numbers[mid_index];
}
int min_inorder(int *numbers, int index1, int index2){
  int result=numbers[index1];
  for(int i=index1+1;i<=index2;i++){
    if(result>numbers[i])
      result=numbers[i];
  }
  return result;
}
