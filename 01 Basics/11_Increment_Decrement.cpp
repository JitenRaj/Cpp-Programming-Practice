#include<iostream>
using namespace std;
int main() {
  int num = 4;
  cout<<"Num is " <<num<<endl;

  cout<<"After Postfix increment ,num is " << num++ << endl;
  cout<<"Num is " <<num<<endl;

  cout<<"After Prefix increment ,num is " << --num << endl;
  cout<<"Num is " <<num<<endl;

  cout<<"After Postfix decrement ,num is " << num-- << endl;
  cout<<"Num is " <<num<<endl;

  cout<<"After Prefix decrement,num is " << --num << endl;
  cout<<"Num is " <<num<<endl;

  return 0;
}