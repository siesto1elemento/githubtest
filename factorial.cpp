#include<iostream>
using namespace std;

int main(){
    int x,factorial = 1;
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        factorial = factorial * i;

    }
    cout << factorial;
    
}