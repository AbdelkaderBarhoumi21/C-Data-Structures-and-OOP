
#include "iostream"

using namespace std;


int main() {

    //int myArray[] = {21, 47, 87, 69, 35};

    int *ptr = new int[5]{21, 47, 87, 69, 35};
    cout << *ptr << endl;
    cout << ptr << endl;

    cout << ptr[2]<< endl;
    cout << ptr[2] << endl;

    return 0;
}
















