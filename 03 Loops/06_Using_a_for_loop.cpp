/* For loop */

#include<iostream>
using namespace std;
int main() {
  int i,j,sum=0;

  for(i = 0 ; i < 10 ; i++ ) {
    sum += i;
    cout<<"i is = "<< i <<endl;
    cout<<"sum is = "<<sum<<endl;
  }

  int remain = sum;
  for(j = i -1; j > 0 ; j-- ) {
    remain -= j;
    cout<<"j is = "<< j <<endl;
    cout<<"remain is = "<< remain <<endl;
  }
  return 0;
}