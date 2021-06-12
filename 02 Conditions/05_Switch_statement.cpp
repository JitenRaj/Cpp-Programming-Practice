/* Switch Statement */

#include<iostream>
using namespace std;
int main() {
  int age = 42;
  switch (age) {
    case 16:
      cout<<"Too Young";
      break;
    case 42:
      cout<<"Adult";
      break;
    case 70:
      cout<<"Senior";
      break;
    default:
      cout<<"this is default case";
      break;
  }
  return 0;
}