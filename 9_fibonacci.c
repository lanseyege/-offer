/*递归解法*/
int fibonacci(int n){
  if(n <= 0)
    return 0;
  if(n == 1)
    return 1;
  if(n>1)
    return fibonacci(n-1)+fibonacci(n-2);
}
/*循环*/
int fibonacci(int n){
  int a=0, b=1, i,sum;
  if(n <= 0)
    return a;
  if(n == 1)
    return b;
  for(i=2;i<=n;i++){
    sum = a+b;
    a=b;
    b=sum;
  }
  return sum;
}
