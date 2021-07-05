#include<iostream>
using namespace std;
int main()
{
    int num[5];
    
    for(int i = 0; i < 5 ; i++) {
        num[i] = 10 * i;
        cout << num[i] <<endl;
    }
}