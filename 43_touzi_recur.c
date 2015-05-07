#include <stdio.h>
#define Q 6

float rev(int n, int sum){
  return 1.0*sum/(pow(Q,n));
}
void count(int n, int s, int* num ){
  if(s<n || n<=0)
    return;
  if(n==1&&s>=1&&s<=Q){
    (*num)++;
    return;
  }
  int i;
  for(i=1;i<=Q;i++)
    count(n-1,s-i,num);
}
int cal(int n){
  int num=0;
  int i;
  for(i=1;i<=Q;i++)
    count(n-1,s-i,&num);
    printf("%d %d: %e\n",i,num,rev(n,num));
}
int main(){
  int n;
  scanf("%d",&n);
  cal(n);
}
