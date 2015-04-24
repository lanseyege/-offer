/*book's another solution**/
/*基于递归，看成全排列*/
 
 void print_max_digit(int n){
  if(n<=0)
    return;
  char *number=new char[n+1];
  number[n]='\0';
  for(int i=0;i<10;i++){
   number[i]=i+'0';
   print_recursive(number,n,0);
  }
  delete[] number;
 }
 void print_recursive(char* number, int length, int index){
  if(index==n-1){
   print_number(number);
   return;
  }
  for(int i=0;i<10;i++){
   number[index+1]=i+'0';
   print_recursive(number,length,index+1);
  }
 }
