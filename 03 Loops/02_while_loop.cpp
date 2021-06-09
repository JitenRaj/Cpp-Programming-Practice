#include<iostream>
using namespace std;
int main() {
  int num=0;
  int sum=0;
  while(num<=5) {
    cout<<"Initial num: "<<num<<endl;
    cout<<"Initial sum: "<<sum<<endl;
    sum += num;
    num++;
    cout<<"Current num: "<<num<<endl;
    cout<<"Current sum: "<<sum<<endl;
  }
  cout<<"Final num: "<<num<<endl;
  cout<<"Final sum: "<<sum<<endl;
  return 0;
}
