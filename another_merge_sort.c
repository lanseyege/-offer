/*归并排序，另一种解法
首先确定一个全局变量 数组，用来保存中间值
*/
#include <stdio.h>
#include <stdlib.h>

void merge(int* A, int* B, int p, int q, int r){
  int low = p;
  int high = q+1;
  int i=0;
  while(low<=q && high<=r){
    if(A[low]<=A[high])
      B[i++]=A[low++];
    else
      B[i++]=A[high++];
  }
  
}
void merge_sort(int* A, int* B, int p, int r){
  if(p<r){
    int q=(p+r)/2;
    merge_sort(A,B,p,q);
    merge_sort(A,B,q+1,r);
    merge(A,B,p,q,r);
  }
}
int main(){
  int n;
  scanf("%d",&n);
  int A[n],B[n];
  int i;
  for(i=0;i<n;i++)
    scanf("%d",&A[i]);
  B=(int *)malloc(n*sizeof(int));
  merge_sort(A,B,0,n-1);
  for(i=0;i<n;i++)
    printf("%d ",A[i]);
  printf("\n");
}
