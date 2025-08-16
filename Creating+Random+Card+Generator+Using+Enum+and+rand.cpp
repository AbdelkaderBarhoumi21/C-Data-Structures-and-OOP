<<<<<<< HEAD

#include <iostream>
#include "cstdlib"
#include "ctime"

using namespace std;

enum CardSuits {
    Club, Diamond, Heart, Spade
};
enum CardElements {
    Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King
};

string GetSuitString(CardSuits suit) {
    string s;

    switch (suit) {
        case Club:
            s = "Club";
            break;
        case Diamond:
            s = "Diamond";
            break;
        case Heart:
            s = "Heart";
            break;
        case Spade:
            s = "Spade";
            break;
    }
    return s;

}

string GetElementString(CardElements element) {
    string e;

    switch (element) {
        case Ace:
            e = "Ace";
            break;
        case Two:
            e = "Two";
            break;
        case Three:
            e = "Three";
            break;
        case Four:
            e = "Four";
            break;
        case Five:
            e = "Five";
            break;
        case Six:
            e = "Six";
            break;
        case Seven:
            e = "Seven";
            break;
        case Eight:
            e = "Eight";
            break;
        case Nine:
            e = "Nine";
            break;
        case Ten:
            e = "Ten";
            break;
        case Jack:
            e = "Jack";
            break;
        case Queen:
            e = "Queen";
            break;
        case King:
            e = "King";
            break;

    }
}

int GenereateRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}


int main() {

    CardSuits suit = Spade;
    CardElements element = King;


    return 0;
}
=======

#include <iostream>
#include "cstdlib"
#include "ctime"

using namespace std;

enum CardSuits {
    Club, Diamond, Heart, Spade
};
enum CardElements {
    Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King
};

string GetSuitString(CardSuits suit) {
    string s;

    switch (suit) {
        case Club:
            s = "Club";
            break;
        case Diamond:
            s = "Diamond";
            break;
        case Heart:
            s = "Heart";
            break;
        case Spade:
            s = "Spade";
            break;
    }
    return s;

}

string GetElementString(CardElements element) {
    string e;

    switch (element) {
        case Ace:
            e = "Ace";
            break;
        case Two:
            e = "Two";
            break;
        case Three:
            e = "Three";
            break;
        case Four:
            e = "Four";
            break;
        case Five:
            e = "Five";
            break;
        case Six:
            e = "Six";
            break;
        case Seven:
            e = "Seven";
            break;
        case Eight:
            e = "Eight";
            break;
        case Nine:
            e = "Nine";
            break;
        case Ten:
            e = "Ten";
            break;
        case Jack:
            e = "Jack";
            break;
        case Queen:
            e = "Queen";
            break;
        case King:
            e = "King";
            break;

    }
}

int GenereateRandomNumber(int min, int max) {
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    return min + static_cast<int>((max - min + 1) * (rand() * fraction));
}


int main() {

    CardSuits suit = Spade;
    CardElements element = King;


    return 0;
}
>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
