/*求从1到整数中1出现的次数*/
#include <stdio.h>
int number_count(int n){
  int sum = 0;
  int factor=1;
  int current=0;
  int pre_num=0;
  int bf_num=0;
  while(n/factor !=0){
    pre_num = n-n/factor*factor;
    current=n/factor%10;
    bf_num=n/factor/10;
    if(current == 0)
      sum += bf_num*factor;
    else if(current == 1)
      sum += bf_num*factor+pre_num+1;
    else
      sum += (bf_num+1)*factor;
    factor *= 10;
  }
  return sum;
}
