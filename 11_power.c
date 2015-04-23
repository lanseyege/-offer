#include<stdio.h>

double power_exponent(double base, int exponent){
  if(exponent == 0）
    return 1;
  if(exponent == 1)
    return base;
  double result = power_exponent(base, exponent>>1);
  result *=result;
  if(exponent & 0x1 == 1)
    result *= base;
  return result;
}

int main(){
  double base;
  int exponent;
  scanf("%lf %d", &base, &exponent);
  printf("%f\n", power_exponent(base, exponent));
}
