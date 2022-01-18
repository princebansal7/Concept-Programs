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
        cout << "Empty List!!\n";
    }

    cout << "Current LL is: \n";

    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << "\n\n";
}

//_____WAY-1 (Using Temp Array)_____________________________________

Node *ReverseList(Node *head) {
    vector<int> temp;
    Node *curr = head;

    if (head == NULL)
        return NULL;

    while (curr != NULL) {
        temp.push_back(curr->data);
        curr = curr->next;
    }

    curr = head;

//______Way-1___________

    for (curr = head; curr != NULL; curr = curr->next) {
        curr->data = temp.back();
        temp.pop_back();
    }

    /*_____ Way-2___________

       int i = temp.size() - 1;

       while (curr != NULL) {
           curr->data = temp[i];
           i--;
           curr = curr->next;
       }

    _______________________*/

    return head;
}

int main()
{

#ifdef PRINCE
    freopen("debug.txt", "w", stderr);
#endif

    int t; cin >> t;  // for test cases
    int cnt = 1;

    while (t--) {


        cout << "TEST CASE " << cnt << ":-------------------" << "\n\n";

        Node *head = NULL;

        head = new Node(10);
        head->next = new Node(20);
        head->next->next = new Node(30);
        head->next->next->next = new Node(40);
        head->next->next->next->next = new Node(50);
        head->next->next->next->next->next = new Node(60);


        cout << "Before Reversing:\n";
        printList(head);

        head = ReverseList(head);

        cout << "After Reversing:\n";
        printList(head);

        cout << endl;
        cnt++;   // ignore

    }
    return 0;
}
