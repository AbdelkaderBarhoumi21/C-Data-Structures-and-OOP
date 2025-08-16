<<<<<<< HEAD
//OCSALY - FUNCTIONS - Default Parameters
#include "string"
#include <iostream>

using namespace std;

void clear_the_screen();

void log_message(const string &msg, bool clear_screen = false) {
    if (clear_screen) {
        // clear_the_screen();
    }
    cout << msg << endl;
}


int main() {

    log_message("first message", true);
    log_message("second message");

    bool user_decsion = true;
    log_message("third message", user_decsion);
    return 0;
}




=======
//OCSALY - FUNCTIONS - Default Parameters
#include "string"
#include <iostream>

using namespace std;

void clear_the_screen();

void log_message(const string &msg, bool clear_screen = false) {
    if (clear_screen) {
        // clear_the_screen();
    }
    cout << msg << endl;
}


int main() {

    log_message("first message", true);
    log_message("second message");

    bool user_decsion = true;
    log_message("third message", user_decsion);
    return 0;
}




>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
