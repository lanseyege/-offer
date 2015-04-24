#include<stdio.h>

void reorder(int *data, int length){
  if(data == NULL || length == 0 || length ==1)
    return;
  int head=0;
  int tail = length-1;
  while(tail>head){
    while(tail>head && (data[head] & 1 == 1))
      head++;
    while(tail>head && (data[tail] & 1 == 0))
      tail--;
    if(tail>head)
      swap(data[head],data[tail]);
  }
}

