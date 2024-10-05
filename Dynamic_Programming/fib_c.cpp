#include <iostream>
#include <vector>
using namespace std;


const int UNKNOWN = -1;
const int MAX_N = 100;

long fib_c(int n){
    if (f[n] == false) {
        f[n] = fib_c(n-1) + fib_c(n-2);
    }
    return f[n];
}


long fib_c_driver(int n){
    int i;

    f[0] = 0;
    f[1] = 1;

    for (i = 2; i <=n; i++){
        f[i] = false;
    }
    return fib_c(n);
}

int main()
{
    fib_c_driver(12);
}