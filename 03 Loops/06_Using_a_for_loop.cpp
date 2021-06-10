/* For loop */

#include<iostream>
using namespace std;
int main() {
  int i,j;
  int sum=0; // initializing sum = 0

/* This for loop will keep incrementing i's value and 
adding into sum, until loop terminate */

  for(i = 0 ; i < 10 ; i++ ) {
    sum += i;
    cout<<"i is = "<< i <<endl;
    cout<<"sum is = "<<sum<<endl;
  }

/* This for loop will keep decrementing j's value and 
subtracting from sub, until loop terminate */

  int sub = sum; // initializing sub's value equal to sum's value
  for(j = i -1; j > 0 ; j-- ) { // j = i-1 , to avoid negative sub, beacuse i = 10 here 
    sub -= j;
    cout<<"j is = "<< j <<endl;
    cout<<"sub is = "<< sub <<endl;
  }
  return 0;
}