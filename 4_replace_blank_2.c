void ReplaceBlank(char string[], int length)
{
  if(string == NULL || length <= 0)
    return;
  int original_length = 0;
  int number_of_blank=0;
  int i=0;
  while(string[i] != '\0' ){
    original_length++;
    if(string[i] == ' ')
      number_of_blank++;
    i++;
  }
  int new_length=original_length + number_of_blank*2;
  if(new_length>length)
    return;
  int index_of_original=original_length;
  int index_of_new = new_length;
  while(index_of_original >= 0 && index_of_new > index_of_original){
    if(string[index_of_original] == ' '){
      string[index_of_new--] = '0';
      string[index_of_new--] = '2';
      string[index_of_new--] = '%';
    }
    else{
      string[index_of_new--] = string[index_of_original];
    }
    index_of_original--;
  }
}
