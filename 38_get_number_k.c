/*书上给出的解法太复杂，下面是我自己的解法*/
#include <stdio.h>

int sum=0;
void get_number_k(int* data, int k, int p, int r){
  if(p<r){
    int q=(p+r)/2;
    if(data[q] == k){
      sum++;
      get_number_k(data, k, p, q);
      get_number_k(data, k,q+1, r);
    }else if(data[q]<k){
      get_number_k(data,k,q+1,r);
    }else if(data[q]>k){
      get_number_k(data,k,p,q);
    }
  }
}
int main(){
  int data[]={1,2,2,3,3,3,4,4,4,4,5,5,5,5,5,6,6};
  get_number_k(data,3,0,17);//后一个数是len(data)
  printf("%d\n",sum);
}
