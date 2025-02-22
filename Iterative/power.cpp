#include <iostream>

int Power(int a, int n){
    //Running Time T(N) = 3N + 2
    //Space Complexity S(N) = 3
    int pow = 1;
    while(n > 0){
        pow *= a;
        n--;
    }

    return pow;
}

int Power2(int a, int n){
    // T(n) = O(logN) time
    int pow = 1;
    int currentPow = a;

    while(n > 0){
        if(n & 0x1) pow *= currentPow;
        currentPow *= currentPow;
        n >>= 1; // n = n/2
    }

    return pow;
}