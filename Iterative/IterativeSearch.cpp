#include <iostream>
#include <vector>

using namespace std;

int LinearSearch(int A[], int N, int key){
    int i = 0; 

    while(i < N){
        if(A[i] == key) break;
        i++;
    }

    if(i < N) return i;
    else return -1;
}

int main(){
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int N = sizeof(A)/sizeof(A[0]); 
    //bayt mantığı yapılmış sizeof(A)(toplam bayt) / sizeof(A[0])(1 elemanda olan bayt) ile eleman sayısı bulunur.
    int key = 5;

    cout << LinearSearch(A, N, key) << endl;

    return 0;
}