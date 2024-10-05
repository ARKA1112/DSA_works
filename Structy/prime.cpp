#include <iostream>
#include <math.h>


bool isPrime(int n){
    if (n<2){
        return 0;
    }

    for (int i=2; i<=sqrt(n); i++){
        if (n%i==0){
            return 0;
        }
    }
    return 1;
}


int main(){
    std::cout<<isPrime(1);
    std::cout<<isPrime(223);
    return 0;
}