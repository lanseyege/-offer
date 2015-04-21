#include<stdio.h>
bool find(int *matrix, int col, int row, int number){
  bool found = false;
  if(matrix != NULL && row>0 && col>0)
  for(int i=0,j=col-1;i<row&& j>=0;)
  if(matrix[i*row+j] == number){
    found = true;
    break;
    }
  else if(matrix[i*row+j]>number){
    j--;
  }else
    i++;
  return found;
}
int main(){

}
