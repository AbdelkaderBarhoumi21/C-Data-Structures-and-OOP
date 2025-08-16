<<<<<<< HEAD
#include <iostream>
using namespace std;

class Node{
public:
    int Value;
    Node * Next;
};

void PrintNode(Node *node){
    while (node != NULL) {
        cout << node->Value << " - > ";
        node = node->Next;
    }
    cout << "NULL" << endl;
}

int main() {

    Node * node1 = new Node;
    node1->Value = 5;

    Node * node2 = new Node;
    node2->Value = 20;

    Node * node3 = new Node;
    node3->Value = 29;

    //Assign next ptr

    node1->Next = node2;
    node2->Next = node3;

    PrintNode(node1);
    return 0;
=======
#include <iostream>
using namespace std;

class Node{
public:
    int Value;
    Node * Next;
};

void PrintNode(Node *node){
    while (node != NULL) {
        cout << node->Value << " - > ";
        node = node->Next;
    }
    cout << "NULL" << endl;
}

int main() {

    Node * node1 = new Node;
    node1->Value = 5;

    Node * node2 = new Node;
    node2->Value = 20;

    Node * node3 = new Node;
    node3->Value = 29;

    //Assign next ptr

    node1->Next = node2;
    node2->Next = node3;

    PrintNode(node1);
    return 0;
>>>>>>> d4fe24aafec8a0804a55be1a0c7c691ad2427baa
}