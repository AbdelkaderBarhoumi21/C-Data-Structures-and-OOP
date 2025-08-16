<<<<<<< HEAD

#include "iostream"

using namespace std;


int main() {

    int myArray[] = {21, 47, 87, 69, 35};

    cout << "Array elements :" << endl;;
    for (int i = 0; i < sizeof(myArray) / sizeof(*myArray); i++) {
        cout << myArray[i] << " " << endl;
    }

    myArray[2] = 50;
    myArray[3] = 73;

    cout << "New array elements : " << endl;
    for (int i = 0; i < sizeof(myArray) / sizeof(*myArray); i++) {
        cout << myArray[i] << " " << endl;
    }

    return 0;
}
















=======

#include "iostream"

using namespace std;


int main() {

    int myArray[] = {21, 47, 87, 69, 35};

    cout << "Array elements :" << endl;;
    for (int i = 0; i < sizeof(myArray) / sizeof(*myArray); i++) {
        cout << myArray[i] << " " << endl;
    }

    myArray[2] = 50;
    myArray[3] = 73;

    cout << "New array elements : " << endl;
    for (int i = 0; i < sizeof(myArray) / sizeof(*myArray); i++) {
        cout << myArray[i] << " " << endl;
    }

    return 0;
}
















>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
