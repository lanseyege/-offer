/*算法导论上的归并排序*/
#include <stdio.h>
#include <limits.h>

void merge(int* A,int p, int q, int r){
  int n1=q-p+1;
  int n2=r-q;
  int L[n1+1];
  int R[n2+1];
  int i,j,k;
  for(i=0;i<n1;i++)
    L[i]=A[p+i];
  for(j=0;j<n2;j++)
    R[j]=A[q+j+1];
  L[n1] = INT_MAX;
  R[n2] = INT_MAX;
  i=0,j=0;
  for(k=p;k<=r;k++){
    if(L[i]<=R[j]){
      A[k]=L[i++];
    }else{
      A[k]=R[j++]
    }
  }
}
void merge_sort(int* A,int p, int r){
  if(p<r){
    int q=(p+r)/2;
    merge_sort(A,p,q);
    merge_sort(A,q+1,r);
    merge(A,p,q,r);
  }
}
int main(){
  int n;
  printf("%s: \n","input the total number");
  scanf("%d",&n);
  int A[n];
  printf("%s: \n","input the number");
  int i;
  for(i=0;i<n;i++)
    scanf("%d",&A[i]);
  merge_sort(A,0,n-1);
  for(i=0;i<n;i++)
    printf("%d ",A[i]);
  printf("\n");
}
