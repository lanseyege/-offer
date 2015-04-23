/*输入两个整数m，n，计算需要改变m的二进制多少位才能变成n*/
int change(int m, int n){
  int a=m^n;
  int sum=0;
  while(a){
    sum++;
    a=(a-1) & a;
  }
  return sum;
}

