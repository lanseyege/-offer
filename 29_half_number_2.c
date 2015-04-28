/*book's another solution, time cost O(n)*/
int more_than_half(int *numbers, int length){
  if(numbers == NULL || length <= 0)
    return 0;
  int max = 0;
  int count = 0;
  for(int i=0; i<length; i++){
    if(count == 0){
      max = number[i];
      count++;
    }else if(numbers[i] == max){
      count++;
    }else if(numbers[i] != max){
      count--;
    }
  }
  count = 0;
  for(int i=0; i<length; i++){
    if(numbers[i] == max)
      count++;
  }
  if(count <= length >> 1)
    return 0;
  return max;
}
