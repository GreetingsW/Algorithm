#include <iostream>
#include <vector>

using namespace std;

int BinarySearch(vector<int>& A, int key){
    int left = 0;
    int right = (int)A.size() - 1;

    while(left <= right){
        int middle = (left + right) / 2;
        if(A[middle] == key) return middle;
        else if (key < A[middle]) right = middle -1;
        else left = middle + 1;
    }

    return -1;
}

int main(){
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << BinarySearch(A, 9) << endl;

    return 0;
}