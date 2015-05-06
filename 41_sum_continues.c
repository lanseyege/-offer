#include <stdio.h>

void fun(int num){
  if(num<3)
    return ;
  int k=(num+1)/2;
  int low=1,high=1;
  int sum=low;
  while(high<=k){
    if(sum<num){
      high++;
      sum+=high;
    }else if(sum>k){
      low=low+1;
      high=low;
      sum=low;
    }else if(sum==k){
      printf("%d %d\n",low,high);
      low=low+1;
      high=low;
      sum=low;
    }
  }
}
int main(){
  int n;
  scanf("%d",&n);
  fun(n);
}
