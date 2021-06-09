/* This Program will take inputs from user 
 Until a certain condition is satisfied */

#include<iostream>
using namespace std;
int main() {
  int num = 1;
  int number;
  while(num<=5){
    cout<<"Enter a number : ";
    cin>>number;
    num++;
  }
  return 0;
}