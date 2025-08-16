
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

int main(){

    return 0;
}
