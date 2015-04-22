void vectors_instert(int A1[], int A2, int length){
  if(A1 == NULL || A2 == NULL || length <=0)
    return;
  int a1_old_length=0;
  int a2_length=0;
  int a1_new_length=0;
  int i=0;
  while(A1[i] != '\0'){
    i++;
  }
  a1_old_length = i;
  i=0;
  while(A2[i] != '\0'){
    i++;
  }
  a2_length = i;
  a1_new_length = a1_old_length+a2_length;
  if(a1_new_length > length)
    return;
  A1[a1_new_length]='\0';
  while(a1_new_length >= 0){
    if(A1[a1_old_length-1] > A2[a2_length-1]){
      A1[a1_new_length--]=A1[a1_old_length];
      a1_old_length--;
    }else{
      A1[a1_new_length--]=A2[a2_length];
      a2_length--;
    }
  }
}
