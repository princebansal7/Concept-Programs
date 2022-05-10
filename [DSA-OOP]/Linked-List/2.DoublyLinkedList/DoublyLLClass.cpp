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
        NewNode->prev = NULL;
        NewNode->data = value;
        NewNode->next = head;
        if (head != NULL)
            head->prev = NewNode;
        head = NewNode;
    }

    void insertAtEnd(int value)
    {
        Node* NewNode = new Node;
        NewNode->next = NULL;
        NewNode->data = value;
        if (head == NULL) {
            NewNode->prev = NULL;
            head = NewNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            NewNode->prev = temp;
            temp->next = NewNode;
        }
    }

    void deleteFirst()
    {
        if (head == NULL)
            cout << "Empty list" << nl;
        else {
            Node* temp = head;
            head = temp->next;
            if (temp->next != NULL) // => atleast 2 node exits
                temp->next->prev = NULL; // or head->prev = NULL
            delete temp;
        }
    }

    void deleteEnd()
    {
        //===========to be done
    }

    void printDll()
    {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
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
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << temp->data << nl;
    }

    ~DoublyLL()
    {
        delete head;
    }
};