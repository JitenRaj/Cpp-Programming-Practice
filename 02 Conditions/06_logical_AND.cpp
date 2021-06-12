/* Logocal Operator : AND
  0 = false 
  1 = true */

#include<iostream>
using namespace std;
int main() {
  int age = 23;
  int money = 600;
  cout << "Logical AND" << endl;
  cout << (age < 21 && money < 500 )<<endl;
  cout << (age < 21 && money > 500 )<<endl;
  cout << (age > 21 && money < 500 )<<endl;
  cout << (age > 21 && money > 500 )<<endl;

  cout << "Logical AND" << endl;
  cout << (false && false) <<endl;
  cout << (false && true) <<endl;
  cout << (true && false) << endl;
  cout << (true && true) << endl;
  
  return 0;
}