#include <stdio.h>

void swch(char* a, char* b){
  char temp=*a;
  *a=*b;
  *b=temp;
}
void reverse(char* string, int length, int k){
  if(string==NULL||length<=0||k>=length)
    return;
  int low=0,high=length-1,i=k-1;
  while(low<i){
    swch(&string[low],&string[i]);
    low++;
    i--;
  }
  i=k;
  while(i<high){
    swch(&string[i],&string[high]);
    i++;
    high--;
  }
  low=0,high=length-1;
  while(low<high){
    swch(&string[low],&string[high]);
    low++;
    high--;
  }
}
int main(){
  char string[]="abcdefgh";
  int n=strlen(string);
  int k=2;
  reverse(string,n,k);
  printf("%s\n",string);
}
