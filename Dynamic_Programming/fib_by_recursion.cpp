#include <iostream>
using namespace std;

long fib_r(int n) {
    if (n == 0) {
        return 0;
    }

    if (n == 1) {
        return 1;
    }

    return fib_r(n-1) + fib_r(n-2);
}


int main(){
    fib_r(10);
}
