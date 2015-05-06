#include <stdio.h>

int two_sum(int* A, int length, int k, int* num1, int* num2){
  if(A==NULL||length<=0)
    return 0;
  int low=0,high=length-1;
  while(low<high){
    long long sum=A[low]+A[high];
    if(sum==k){
      *num1=low;
      *num2=high;
      return;
    }else if(sum>k){
      high--;
    }else if(sum<k){
      low++;
    }
  }
  return 0;
}
int main(){
  int A[]={1.2.4.7.11.15};
  int num1.num2;
  if(two_sum(A,6,15,&num1,&num2))
    printf("%d %d\n",num1,num2);
  else
    printf("%s\n","not found~~");
}
