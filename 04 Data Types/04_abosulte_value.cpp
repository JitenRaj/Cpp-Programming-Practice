#include <iostream>
using namespace std;

int main() {
   int a = -42;
   int abs_a;     

   cout << "Finds the absolute value of an integer.\n";     
   
   if(a >= 0)     
      abs_a = a;     
   else         
      abs_a = -a;      
   
   cout << "The absolute value of " << a ;
   cout << " is " << abs_a << endl;     
   
   return 0;
}
