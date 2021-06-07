#include<iostream>
using namespace std;
int main() {
  int marks;
  cout<<"Enter your marks: "<<endl;
  cin>> marks;
  if (marks>90)
  {
    cout<<"First Division";
  }
  else if (marks>=75 && marks<90)
  {
    cout<<"Second Devision";
  }
  else if (marks>=60 && marks<75)
  {
    cout<<"Third Devision";
  }
  else if (marks>=36 && marks<60)
  {
    cout<<"Just Pass, need to improve";
  }
  else
  {
    cout<<"Failed";
  }
  return 0;
}