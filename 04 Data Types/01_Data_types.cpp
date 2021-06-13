// Legal and illegal C++ expressions

#include<iostream>
using namespace std;
int main(){
  cout<<55+60<<endl; // Legal (both are integers)
  cout<<55+"Jiten"<<endl; // illegal (cant use '+' operator to add an integer and a string)
  return 0;
}