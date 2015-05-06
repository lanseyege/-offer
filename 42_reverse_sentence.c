#include <stdio.h>

void swch(char* a, char* b){
  char temp=*a;
  *a=*b;
  *b=temp;
}
void reverse(char* string, int length){
  if(string==NULL||length<=0)
    return;
  char temp;
  int low=0,high=length-1,i=0;
  while(low<high){
    swch(&string[low],&string[high]);
    low++;
    high--;
  }
  low=0;
  while(i<length-1){
    if(string[i]==' '){
      high=i-1;
      while(low<high){
        swch(&string[low],&string[high]);
        low++;
        high--;
      }
      low=i+1;
    }
    i++
  }
}
int main(){
  char* string="i am a student.";
  reverse(string,15);
  printf("%s\n",string);
}
