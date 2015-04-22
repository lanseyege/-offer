#include<stdio.h>
void replace(char string[], int length){
  if(string == null || length<=0)
    return;
  int n, i=0;
  for(i=0;i<length;i++){
    if(string[i]== ' ')
      n++;
  }
  int p1=length;
  length += n * 2;
  int p2=length;
  while(p1 >0){
  while(string[p1] != ' ' ){
    string[p2]=string[p1];
    p2--;
    p1--;
  }
  string[p2--]='0';
  string]p2--]='2';
  string[p2--]='%';
  p1--;
  }
}
