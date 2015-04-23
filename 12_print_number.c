/*my solution*/
#include<stdio.h>
#include<stdlib.h>

int mplus(int n){
  if(n <= 0)
    return ;
  char* string;
  string=malloc((n+1)*sizeof(char));
  int i;
  for(i=0;i<n;i++)
    string[i]='0';
  string[n-1]='1';
  string[n]='\0';
  int flag=1,s=0,sig=0;
  while(flag){
    for(i=0;i<n;i++){
      if(string[i]=='0' && s==0)
        continue;
      else
        s=1;
      printf("%c",string[i]);
    }
    printf("%t");
    for(i=n-1;i>=0;i--){
      if(i==n-1)
        s=string[i]-'0'+1;
      else
        s=string[i]-'0'+sig;
      if(s==10){
        if(i==0){
          flag=0;
          break;
        }
        s=0;
        sig=1;
        string[i]=s+'0';
      }else{
        sig=0;
        string[i]=s+'0';
        s=0;
        break;
      }
    }
  }
  printf("\n");
}
