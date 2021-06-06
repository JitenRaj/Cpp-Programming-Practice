/* If condition's Statement is printted only when
a certain condition is True */

#include<iostream>
using namespace std;
int main() {
  if (7>4) // True
  {
    cout<<"If statement is working";
  }
  if(7<4) // False
  {
    cout<<"This wont be printted";
  }
  return 0;
}