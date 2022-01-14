#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *head) {   // TC: O(n) , SC: O(1)

    if (head == NULL) {
        cout << "Empty & !!\n";
    }

    cout << "Linked List is: \n";

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *InsertAtBeg(Node *head, int x) {  // O(1) Operation

    /*______WAY-1____________________

        if (head == NULL) {
            head = new Node(x);
            return head;
        }

        Node *temp1 = new Node(x);
        Node *temp2 = head;
        head = temp1;
        head->next = temp2;
        return head;
    ______________________________*/

    //___ WAY-2_______________

    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main()
{

    Node *head = NULL;
    printList(head);

    head = InsertAtBeg(head, 10);
    printList(head);
    head = InsertAtBeg(head, 20);
    printList(head);
    head = InsertAtBeg(head, 69);
    printList(head);
    head = InsertAtBeg(head, 40);
    printList(head);

    printList(head);

    delete head;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *head) {   // TC: O(n) , SC: O(1)

    if (head == NULL) {
        cout << "Empty & !!\n";
    }

    cout << "Linked List is: \n";

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *InsertAtEnd(Node *head, int x) {  // O(n) Operation

    if (head == NULL) {   // modifies head only when Linked list is empty
        head = new Node(x);
        return head;
    }

    Node *temp = new Node(x); // new node, which is to be inserted

    Node *curr = head;
    while (curr->next != NULL) {  // going till last node [IMP for insertion at end]
        curr = curr->next;
    }
    curr->next = temp;  // linking last node with new node [as last node and earlier node as 2nd last node]
    temp = head;
    return temp; // or direct return head
}

int main()
{

    Node *head = NULL;
    printList(head);

    head = InsertAtEnd(head, 10);
    printList(head);
    head = InsertAtEnd(head, 20);
    printList(head);
    head = InsertAtEnd(head, 69);
    printList(head);
    head = InsertAtEnd(head, 40);
    printList(head);
    head = InsertAtEnd(head, 90);
    printList(head);

    delete head;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *head) {   // TC: O(n) , SC: O(1)

    if (head == NULL) {
        cout << "Empty!!\n\n";
    }

    cout << "Linked List is: \n";

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n\n";
}

Node *DeleteAtBeg(Node *head) {  // O(1) Operation

    Node *temp = NULL;

    if (head == NULL) {
        cout << "Empty List !!\n\n";
        return temp;
    }
    else {
        temp = head->next; // Pointing temp to 2nd node
        delete head;   // deleting first node
    }
    return temp;   // returning 2nd node as head [as 2nd node is now 1st node]
}

int main()
{
    Node *head = NULL;
    printList(head);
    head = DeleteAtBeg(head);

    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    printList(head);

    head = DeleteAtBeg(head);
    printList(head);
    head = DeleteAtBeg(head);
    printList(head);
    head = DeleteAtBeg(head);
    printList(head);
    head = DeleteAtBeg(head);
    printList(head);
    head = DeleteAtBeg(head);
    printList(head);

    delete head;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *head) {   // TC: O(n) , SC: O(1)

    if (head == NULL) {
        cout << "Empty!!\n\n";
    }

    cout << "Linked List is: \n";

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n\n";
}

Node *DeleteAtEnd(Node *head) {  // O(n) Operation

    Node *temp = NULL;
    Node *curr = head;

    if (head == NULL) {  // if 0 Node
        cout << "Empty List !!\n\n";
        return head;
    }
    else if (curr->next == NULL) { // if Only 1 Node
        temp = curr;
        delete temp;  // deleting only node (i.e, head/first node)
        return NULL;  // as now No node present, return NULL
    }
    else {
        while (curr->next->next != NULL) { // going till 2nd last node

            curr = curr->next; // update curr with next node for each iteration

        }
        temp = curr->next; // upating temp with curr's next node i.e, Last node
        curr->next = NULL; // updating 2nd last node (soon to be last node with NULL) [Imp Step]
        delete temp;  // deleting last Node
    }
    return head;
}

int main()
{
    Node *head = NULL;
    printList(head);
    head = DeleteAtEnd(head);

    head = new Node(69);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(880);

    printList(head);

    head = DeleteAtEnd(head);
    printList(head);
    head = DeleteAtEnd(head);
    printList(head);
    head = DeleteAtEnd(head);
    printList(head);
    head = DeleteAtEnd(head);
    printList(head);
    head = DeleteAtEnd(head);
    printList(head);

    // delete head;

    return 0;
}


#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *head) {   // TC: O(n) , SC: O(1)

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

void printWithRecusion(Node *head) {  // TC: O(n) , SC: O(n)

    if (head == NULL)
        return;
    cout << head->data << " ";
    printWithRecusion(head->next);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(69);
    head->next->next = new Node(90);
    head->next->next->next = new Node(100);


    printList(head);
    printWithRecusion(head);

    delete head;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *head) {   // TC: O(n) , SC: O(1)

    cout << "Linked List is: \n";
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int searchKey(Node *head, int key) {  // TC: O(n) , SC: O(1)

    int count = 1;

    while (head != NULL) {

        if (key == head->data) {
            return count;
        }
        count++;
        head = head->next;
    }
    return -1;
}

int searchKeyRecursive(Node *head, int key) {  // TC: O(n) , SC: O(n)

    if (head == NULL)  // base case 1
        return -1;


    if (head->data == key) { // base case 2
        return 1;
    }
    else {
        int res = searchKeyRecursive(head->next, key);
        if (res == -1)  // if element not found
            return -1;
        return res + 1;
    }
}

int main()
{

    /*
        NOTE: Linked lists doesn't allow Binary Search for sorted linked list as middle element
              can't be found in constant time, But 'skip linked list' provides faster search

    */
    int key; cin >> key;
    Node *head = new Node(10);
    head->next = new Node(69);
    head->next->next = new Node(90);
    head->next->next->next = new Node(100);

    printList(head);

    int pos = searchKey(head, key);

    if (pos != -1)
        cout << "Key is present at position " << pos << endl;
    else
        cout << "Key Not Present\n";



    cout << "Recursive search pos: " << searchKeyRecursive(head, key);

    delete head;

    return 0;
}
