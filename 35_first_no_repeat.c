#include <stdio.h>
#define max 256

char find_first_no_repeat(char* string){
  if(string == NULL)
    return '\0';
  int hash[max];
  int i;
  for(i=0;i<max;i++)
    hash[i]=0;
  char* start = string;
  while(*(start) != '\0')
    hash[*(start++)]++;
  while(*(start) != '\0'){
    if(hash[*(start)]==1)
      return *start;
    start++;  
  }
  return '\0';
}
