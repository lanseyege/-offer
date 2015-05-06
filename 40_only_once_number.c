#include <stdio.h>

void only_once(int* A, int length, int* num1, int* num2){
  if(A==NULL||length<=2)
    return;
  int sum=A[0];
  int i;
  for(i=1;i<length;i++)
    sum=sum^A[i];
  int index=place_one(sum);
  *num1=0,*num2=0;
  for(i=0;i<length;i++){
    if(A_place_one(A[i], index))
      *num1=*num1^A[i];
    else
      *num2=*num2^A[i];
  }
}
int place_one(int sum){
  int index=0;
  while((sum & 1) == 0){
    index++;
    sum=sum>>1;
  }
  return index;
}
int A_place_one(int num, int index){
  if((num>>index & 1 )== 0) //计算优先级的问题
    return 1;
  return 0;
}
