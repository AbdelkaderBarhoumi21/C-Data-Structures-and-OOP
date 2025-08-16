// OCSALY
// Pointers

#include <iostream>

using namespace std;

int main() {

//    char c[]{"hello"};          //C can be used as a pointer
//    *c = 'H';                   // OK, can write thru the pointer
//    const char *ptc{c};         // pointer to constant
//    cout << ptc << endl;        //OK, can read the memory pointed to
//    *ptc = 'Y';                 // cannot write to the memory
//    char *const cp{c};          //constant pointer
//    *cp = 'y';                  // can write thru the pointer
//    cp++;                       // cannot point to anything else

    char c[]{"hello"};
    char *const cp1{c};
    *cp1 = 'H';
    const char *ptc = const_cast<const char *>(cp1);
    ptc++;
    char *const cp2 = const_cast<char *const>(ptc);
    *cp2 = 'a';
}
