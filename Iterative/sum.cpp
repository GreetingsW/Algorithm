#include <iostream>

int Sum(int A[], int N){
    //Running Time T(N) = 3N + 3
    //Space Complexity S(N) = N + 2
    int sum = 0;
    int i = 0;
    while(i<N){
        sum += A[i];
        i++;
    }
    return sum;
}