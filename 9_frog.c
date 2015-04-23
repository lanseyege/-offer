/*递归*/
int frog(int n){
  int a=1,b=2;
  if(n<=1)
    return a;
  if(n==2)
    return b;
  if(n>2)
    return frog(n-1)+frog(n-2);
}
/*循环*/
int frog(int n){
  int a=1,b=2,i,sum;
  if(n<=1)
    return a;
  if(n ==2)
    return b;
  for(i=3;i<=n;i++){
    sum=a+b;
    a=b;
    b=sum;
  }
  return sum;
}
