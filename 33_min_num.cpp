#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

bool compare(const string &str1, const string &str2){
  string s1=str1+str2;
  string s2=str2+str1;
  return s1<s2;
}
void com_min(int *array, int num){
  int i;
  string *strarray=new string[num];
  for(i=0;i<num;i++){
    stringstream stream;
    stream<<array[i];
    stream>>strarray[i];
  }
  sort(strarray,strarray+num,compare);
  for(i=0;i<num;i++)
    cout<<strarray[i];
  cout<<endl;
  delete[] strarray;
}
int main(){
  int num;
  cin>>num;
  int *array = new int[num];
  int i;
  for(i=0;i<num;i++)
    cin>>array[i];
  com_min(array,num);
  return 0;
}
