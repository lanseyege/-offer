/*book's first solution*/

void print_to_max_digits(int n){
  if(n<=0)
    return;
  char *number = new char[n+1];
  memset(number,'0',n);
  number[n]='\0';
  while(!increment(number)){
    print_number(number);
  }
  delete []number;
}
bool increment(char *number){
  bool is_overflow = false;
  int take_over=0;
  int length=strlen(number);
  for(int i=length-1;i>=0; i++){
    int sum=number[i]-'0'+take_over;
    if(i==length-1)
      sum++;
    if(sum>=10){
      if(i==0){
        is_overflow=true;
      }else{
        sum=0;//sum-=10;
        take_over=1;
        number[i]='0'+sum;
      }
    }else{
      number[i]='0'+sum;
      break;
    }
  }
  return is_overflow;
}
void print_number(char* number){
  bool is_begin = true;
  int length=strlen(number);
  for(int i=0;i<length;+=i){
    if(is_begin &7 number[i] != '0')
      is_begin=false;
    if(!is_begin)
      printf("%c",number[i]);
  }
  printf("/t");
}
