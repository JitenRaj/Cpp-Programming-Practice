#include<iostream>
using namespace std;
int main() {
  auto x = 5;
  auto y = 3.14;
  auto z = "Hello";
  /* ANy variable declared with the auto keyword should be initialized
  at the time of declaration or there will be an error. */
  cout<<x+y<<endl;
  cout<<z;
  return 0;
}