<<<<<<< HEAD
//OCSALY - FUNCTIONS - Initializer Lists
#include "string"
#include <iostream>
#include "initializer_list"
using namespace std;

int sum(initializer_list<int> values){
    int sum = 0 ;
    values.size(); // RETURNs NUMBER OF ITEMS in THE LIST
    for (int i :values) {
        sum += i;
    }
    return sum;
}

int main() {

    cout << sum({}) << endl;   // 0
    cout << sum({-6, -5, -4, -3, -2, -1}) << endl;  // -21
    cout << sum({10, 20, 30}) <<endl;   // 60
}




=======
//OCSALY - FUNCTIONS - Initializer Lists
#include "string"
#include <iostream>
#include "initializer_list"
using namespace std;

int sum(initializer_list<int> values){
    int sum = 0 ;
    values.size(); // RETURNs NUMBER OF ITEMS in THE LIST
    for (int i :values) {
        sum += i;
    }
    return sum;
}

int main() {

    cout << sum({}) << endl;   // 0
    cout << sum({-6, -5, -4, -3, -2, -1}) << endl;  // -21
    cout << sum({10, 20, 30}) <<endl;   // 60
}




>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
