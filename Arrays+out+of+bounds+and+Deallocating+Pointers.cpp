<<<<<<< HEAD
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
=======
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
>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
