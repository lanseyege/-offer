#include <stdio.h>
#include <stdlib.h>

int compare(int a, int b, int c){

}
int ugly(int n){
  int index=1;
  int index2=0,index3=0,index5=0;
  int *data;
  data=(int *)malloc(n*sizeof(int));
  data[0]=1;
  while(index<n){
    int min = compare(data[index2]*2,data[index3]*3,data[index5]*5);
    data[index]=min;
    while(data[index2]*2<=data[index]) index2++;
    while(data[index3]*3<=data[index]) index3++;
    while(data[index5]*5<=data[index]) index5++;
    index++;
  }
  int result = data[index-1];
  free(data);
  return result;
}
int main(){
  int n;//你想得到第几个丑数
  scanf("%d",&n);
  printf("%d\n",ugly(n));
  return 0;
}
