#include <iostream>
#include <vector>
#include <iomanip> // setw için gerekli

using namespace std;

void MatrixMultiplication(vector<vector<int>> A, vector<vector<int>> B, vector<vector<int>> &C){
    for(int i = 0; i < C.size(); i++){
        for(int j = 0; j < C[0].size(); j++){
            C[i][j] = 0;
            for(int k = 0; k < A.size(); k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main(){
    vector<vector<int>> A = {{1, 2, 3},{4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> B = {{9, 8, 7},{6, 5, 4}, {3, 2, 1}};
    vector<vector<int>> C (3, vector<int>(3));

    MatrixMultiplication(A, B, C);
    for(int i = 0; i < C.size(); i++){
        for(int j = 0; j < C[i].size(); j++){
            cout << std::setw(4) << std::right << C[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}