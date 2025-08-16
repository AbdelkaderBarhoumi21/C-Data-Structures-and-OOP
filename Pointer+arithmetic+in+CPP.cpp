// C++ - 4 TYPES OF MEMORY - OCSALY

// Static or Global
// String pool
// Automatic or stack
// Freestore

using namespace std;

int main() {

    int a[]{1, 2, 3, 4, 5};
    int *pa = a;
    for (int i = 0; i < 5; ++i) {
        *pa++ *= 3;
    }
    
    pa += 1; //can do this
    //a += 1; // error
    
//    *pa = 11;
//    a[1] = 12;
//    pa[2] = 13;
//    *(pa + 3 ) =  14;

    // 11,12,13,14,5
    return 0;
}



