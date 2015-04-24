/*my recursive solution*/

#include<stdio.h>
#include<stdlib.h>

void print_lcoal(char* string, int n);
void print_it(char* string, int n, int index);
void print_number(int n){
  if(n<=0)
    return;
  char* string;
  string=malloc((n+1)*sizeof(char));
  for(int i=0;i<n;i++)
    string[i]='0';
  string[n]='\0';
  print_it(string, n , -1);
}
void print_it(char* string, int n, int index){
  if(index==n-1){
    print_local(string,n);
    return;
  }else{
    index++;
    for(int i=0;i<n;i++){
      string[i]='0'+i;
      print_it(string,n,index);
    }
  }
}
void print_local(char* string, int n ){
  int flag=0;
  for(int i=0;i<n;i++){
    if(string[i]='0' && flag==0)
      continue;
    else
      flag=1;
    printf("%c",string[i]);
  }
  if(flag==1)
    printf("%t");
}
int main(){
  int n;
  scanf("%d",n);
  print_number(n);
  printf("\n");
}
