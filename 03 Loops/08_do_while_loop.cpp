/* do while loop excuted atleast once,
even if certain condition is false*/

#include<iostream>
using namespace std;
int main() {
  int num=20;
  int limit = 10;
  do
  {
    cout<< limit << " is greater than " << num <<endl;
    num++;
  } while (num<limit);
  return 0;
}