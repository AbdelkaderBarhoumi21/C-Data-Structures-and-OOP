
#include "iostream"
using namespace std;


int main(){

    int myArray[] = {21,47,87,69,35};

    cout << "Array elements :"<< endl; ;
    for (int i = 0; i < sizeof(myArray) / sizeof(*myArray); i++) {
        cout << myArray[i] << " " << endl;
    }

    return 0;
}
