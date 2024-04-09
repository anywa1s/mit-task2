#include <iostream>
using namespace std;

void fib(int n){
    int a = 0, b = 1;
    cout << a << endl << b << endl; 
    for (int i = 2; i < n; ++i){
        int c = a + b;
        cout << c << endl;
        a = b;
        b = c;
    }
}

int main(){
    cout << "Hello, World!" << endl;
    fib(10); 
    return 0;
}