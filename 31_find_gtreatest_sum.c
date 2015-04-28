/*连续子数组的最大和*/
int find_sum(int numbers[], int length){
  if(numbers == NULL || length <= 0)
    return 0;
  if(length == 1)
    return numbers[0];
  int i;
  int sum = 0 , max = numbers[0];
  for(i = 0; i<length; i++){
    if(sum <= 0){
      sum = numbers[i];
    }else 
      sum += numbers[i];
    if(sum > max)
      max = sum;
  }
  return max;
}
