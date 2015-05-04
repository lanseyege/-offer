#include <stdio.h>

int is_ugly(int n){
  while(n%2 == 0) n /= 2;
  while(n%3 == 0) n /= 3;
  while(n%5 == 0) n /= 5;
  return (n==1)?1:0;
}
int ugly(int n){
  int num = 0;
  int sum = 0;
  while(sum < n){
    ++num;
    if(is_ugly(num))
      ++sum;
  }
  return num;
}
int main(){
  int n;
  scanf("%d", &n);
  printf("%d\n",ugly(n));
  return 0;
}
