/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"

class DoublyLL {

private:
    struct Node {
        Node* prev;
        int data;
        Node* next;
    };

    Node* head;

public:
    DoublyLL()
    {
        head = NULL;
    }

    void insertAtBeg(int value)
    {
        Node* NewNode = new Node;
        if (head == NULL) {
            NewNode->prev = NULL;
            NewNode->data = value;
            NewNode->next = head;
            head = NewNode;
        } else {
            head->prev = NewNode;
            NewNode->prev = NULL;
            NewNode->data = value;
            NewNode->next = head;
            head = NewNode;
        }
    }

    void insertAtEnd(int value)
    {
        Node* NewNode = new Node;
        if (head == NULL) {
            NewNode->prev = NULL;
            NewNode->data = value;
            NewNode->next = head;
            head = NewNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = NewNode;
            NewNode->prev = temp;
            NewNode->data = value;
            NewNode->next = NULL;
        }
    }

    void printDll()
    {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << "<=>";
            temp = temp->next;
        }
        cout << nl;
    }

    void printReverseDll()
    {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        while (temp->prev != NULL) {
            cout << temp->data << "<=>";
            temp = temp->prev;
        }
        cout << temp->data << nl;
    }

    ~DoublyLL()
    {
        delete head;
    }
};