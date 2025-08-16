#include <iostream>

using namespace std;

template<typename T>
class Node {

public:
    int Value;
    Node *Next;

    Node(T value) : Value(value), Next(NULL) {


    }

};

template<typename T>
void PrintNode(Node<T> *node) {
    while (node != NULL) {
        cout << node->Value << " - > ";
        node = node->Next;
    }
    cout << "NULL" << endl;
}


template<typename T>
class LinkedList {
private:
    int myCount;
public:
    Node<T> *Head;
    Node<T> *Tail;

    LinkedList();


    Node<T> *Get(int index);

    //Insert Operations
    void InsertHead(T val);

    void InsertTail(T val);

    void Insert(int index, T val);

    //Remove operations
    void RemoveHead();

    void RemoveTail();

    void Remove(int index);

    //Search operation
    int Search(T val);

    // Addition Operations
    int Count();

    void PrintList();


};

template<typename T>
Node<T> *LinkedList<T>::Get(int index) {
    if (index < 0 || index > myCount) {
        return NULL;
    }

    Node<T> *node = Head();

    for (int i = 0; i < index; ++i) {
        node = node->Next;
    }
    return node;
}

template<typename T>
void LinkedList<T>::InsertHead(T val) {

    Node<T> *node = new Node<T>(val);
    node->Next = Head;

    Head = node;

    if (myCount == 0) {
        Tail = Head;

    }
    myCount++;
}

template<typename T>
void LinkedList<T>::InsertTail(T val) {
    if (myCount == 0) {
        InsertHead(val);
        return;
    }
    Node<T> *node = new Node<T>(val);

    Tail->Next = node;

    Tail = node;
    myCount++;
}

template<typename T>
void LinkedList<T>::Insert(int index, T val) {

    if (index < 0 || index > myCount) {
        return;
    }
    if (index == 0) {
        InsertHead(val);
        return;
    } else if (index == myCount) {
        InsertTail(val);
        return;
    }

    Node <T> *prevNode =  Head;
    for (int i = 0; i < index - 1; ++i) {
        prevNode = prevNode->Next;
    }
    Node<T> *nextNode = prevNode->Next;

    Node<T> *node = new Node<T>(val);

    node -> Next = nextNode;
    prevNode -> Next = node;

    myCount++;
}

template<typename T>
int LinkedList<T>::Search(T val) {
    if (myCount == 0) {
        return -1;
    }

    int index = 0;

    Node<T> * node = Head;

    while (node->Value != val) {
        index++;
        node = node-> Next;
        if (node == NULL) {
            return -1;
        }
    }
    return index;

}


int main() {

    Node<float> *node1 = new Node<float>(3.14);
    Node<float> *node2 = new Node<float>(6.92);
    Node<float> *node3 = new Node<float>(9.25);


    node1->Next = node2;
    node2->Next = node3;

    PrintNode(node1);
    return 0;
}