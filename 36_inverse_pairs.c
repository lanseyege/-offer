/*归并排序的应用～～*/
#include <stdio.h>

int sum=0;//1
void merge(int* A, int* B, int p, int q, int r){
  int low = p;
  int high = q+1;
  int i = 0;
  while(low<=q && high<=r){
    if(A[low]<=A[high])
      B[i++]=A[low++];
    else{
      sum += q-low+1;//2
      B[i++]=A[high++];
    }
  }
  while(low<=q)
    B[i++]=A[low++];
  while(high<=r)
    B[i++]=A[high++];
  low=p;
  for(i=0;i<r-p+1;i++)
    A[low+i]=B[i];
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
  for(i=0;i<n;i++){
    scanf("%d",&A[i]);
    B[i]=0;
  }
  merge_sort(A,B,0,n-1);
  for(i=0;i<n;i++)
    printf("%d ",A[i]);
  printf("\n%d\n",sum);//3
}
