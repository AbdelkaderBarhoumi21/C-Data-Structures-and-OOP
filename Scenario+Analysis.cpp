
#include "iostream"
using namespace std;

void Looping(int n){     /// TIME COMPLEXITY (n)   = 4n + 1
    int i = 0;
    while (i < n) {
        cout << i << endl;
        i = i + 1;
    }
}

void Pairing(int n){        /// 1 + (n * (4n+1) + 2) = 1 +3n +4n^2
    int i = 0;                ////// TIME COMPLEXITY (n)   = 4n^2 + 3n+ 1

    while (i < n) {
        int j = 0;
        while (j < n) {
            cout << i << ", " << j << endl;
            j = j + 1;
        }
        i = i + i;
    }
}

int Search(int arr[], int arrSize, int x){
    for (int i = 0; i < arrSize, ++i;) {
        if (arr[i] == x) {
            cout <<"FOUND : "<<  arr[i] << endl;
            return i;
        }
        cout << "ELEMENT NOT FOUND ! ITERARTING . . . " << endl;
    }
    cout << "ELEMENT NOT FOUND " << endl;
    return -1;
}

int main(){
    int arr[] = {45,21,89,74,52,13,97,24,73,14};
    Search(arr, 9, 14);
    return 0;
}
