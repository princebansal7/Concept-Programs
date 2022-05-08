/*
    @author: princebansal_

*/

#include <iostream>
using namespace std;
#define nl "\n"
#define ll long long

class LinkedList
{
private:
    struct Node
    {
        int data;
        Node *next;
    };

    Node *head;

public:
    LinkedList()
    {
        head = NULL;
    }
    // TIP: Always make changes in the new node 1st
    void insertAtStart(int val)
    {
        Node *NewNode = new Node;
        NewNode->data = val;
        NewNode->next = head;

        head = NewNode;
    }

    void insertAtEnd(int val)
    {
        Node *NewNode = new Node;
        NewNode->data = val;
        NewNode->next = NULL;

        if (head == NULL)
        {
            head = NewNode;
        }
        else
        {
            Node *temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = NewNode;
        }
    }

    Node *seachNode(int data)
    {
        Node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == data)
                return temp;
            temp = temp->next;
        }
        return NULL;
    }

    void deleteFirst()
    {
        if (head == NULL)
        {
            cout << "Empty Linked List" << nl;
        }
        else
        {
            Node *temp = head;
            head = temp->next;
            delete temp;
        }
    }

    void deleteEnd()
    {
        if (head == NULL)
            cout << "Empty Linked list" << nl;
        else
        {
            Node *temp1 = head; // will be pointing to last node
            Node *temp2 = NULL; // will be pointing to 2nd last node

            while (temp1->next != NULL)
            {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            if (temp2 == NULL) // for case: if LL have only 1 node
                head = NULL;
            else
                temp2 = NULL; // making 2nd last node as last node by assigning NULL

            delete temp1; // releasing last node's memory
        }
    }

    void insertAfter()
    {
    }
};
