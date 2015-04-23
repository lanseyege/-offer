/*求一个数的二进制你数中1的个数*/

/*book‘s solution:循环次数太多*/
int numberof1(int n){
  int flag=1;
  int sum=0;
  while(flag){
    if(flag & n)
      sum++;
    flag=flag<<1;
  }
  return sum;
}

/*book's anather solution: 把一个整数减去1，再和原整数做与运算，会把该整数最右边一个1变成0*/
/*循环次数变少，有几个1便循环几次*/
int numberof1_2(int n){
  int sum=0;
  while(n){
    sum++;
    n=(n-1) & n;
  }
  return sum;
}
