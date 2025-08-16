// OCSALY
// LOOPS

#include <iostream>

using namespace std;

int main() {

    int arr[]{1, 2, 3, 4}; // ARRAYS ARE INDEXED FROM ZERO (0)
    for (int i = 0; i < 4; i++ ){
        int a = arr[i] += arr[i + 1]; // what happens when i ==3 ????!
        std::cout << a << endl;
    }

}
