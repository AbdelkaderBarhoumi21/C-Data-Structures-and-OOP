<<<<<<< HEAD
OCSALY - FUNCTIONS - Initializer Lists
#include string
#include iostream
#include algorithm
#include cstdarg
using namespace std;

int sum(int count, ...){
    int sum = 0;
    va_list args;
    va_start(args,count);
    while (count--) {
        int i = va_arg(args, int);
        sum += i;
    }
    va_end(args);
    return sum;
}

int main() {

    cout  sum(-1)  endl;
    cout  sum(-6,-5,-4,-3,-2,-1)  endl;
    cout  sum(10, 20, 30, -1)  endl;

    cout  sum(3, 10., 20, 30);  int , double, int , int

}




=======
OCSALY - FUNCTIONS - Initializer Lists
#include string
#include iostream
#include algorithm
#include cstdarg
using namespace std;

int sum(int count, ...){
    int sum = 0;
    va_list args;
    va_start(args,count);
    while (count--) {
        int i = va_arg(args, int);
        sum += i;
    }
    va_end(args);
    return sum;
}

int main() {

    cout  sum(-1)  endl;
    cout  sum(-6,-5,-4,-3,-2,-1)  endl;
    cout  sum(10, 20, 30, -1)  endl;

    cout  sum(3, 10., 20, 30);  int , double, int , int

}




>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
