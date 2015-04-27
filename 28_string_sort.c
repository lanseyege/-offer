void print_string(char* string){
  if(string == NULL)
    return NULL;
  print_string(string, string);
}
void print_string(char* string, char* begin){
  if(*begin == '\0'){
    printf("%s\n",string);
  }else{
    for(char *ch = begin; *ch != '\0'; ++ch){
      char temp = *ch;
      *ch = *begin;
      *begin = temp;
      print_string(string, begin+1);
      temp = *ch;
      *ch = *begin;
      *begin = temp;
    }
  }
}
