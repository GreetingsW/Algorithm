#include <iostream>

bool isPrime(int n){
    // T(N) = 3N - 2    
    if(n == 1) return false;
    if(n == 2) return true;
    
    int x = 2;
    while(x < n){
        if (n % x == 0) return false;
        x++;
    }

    return true;
}

bool isPrime2(int n){
    // T(N) = 3*(sqrt(n)) + 4
    if(n == 1) return false;
    if(n == 2) return true;
    
    int x = 2;

    while(x*x <= n){
        if (n % x == 0) return false;
        x++;
    }

    return true;
}

int main(){
    int n = 17;
    std::cout << isPrime(3) << std::endl;
    std::cout << isPrime2(7) << std::endl;
    return 0;
}