/* Logical NOT invert the results,
we can use NOT gate with OR gate to get ouput of
NOR gate */
#include<iostream>
using namespace std;
int main() {
  int age = 23;
  int money = 600;
  cout << "Logical NOT + OR = NOR" << endl;
  cout << (!(age < 21 || money < 500 ))<<endl;
  cout << (!(age < 21 || money > 500 ))<<endl;
  cout << (!(age > 21 || money < 500 ))<<endl;
  cout << (!(age > 21 || money > 500 ))<<endl;

  cout << "Logical NOT + OR = NOR" << endl;
  cout << (!(false || false)) <<endl;
  cout << (!(false || true)) <<endl;
  cout << (!(true || false)) << endl;
  cout << (!(true || true)) << endl;
  
  return 0;
}