#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct linklist
{
    int data;
    linklist* link;
};

int main()
{
    char ch;
    linklist *p, *q, *head;
    p = new linklist;

    cout << "Enter data: ";
    cin >> p->data;
    p->link = NULL;
    head = p;

    cout << "Create another node? (y/n): ";
    // ch = getchar();
     //ch = cin.get();
    cin>>ch;
    while (ch == 'y')
    {
        q = new linklist;
        cout << "Enter data: ";
        cin >> q->data;
        q->link = NULL;
        p->link = q;
        p = q;

        cout << "Create another node? (y/n): ";
        cin.ignore();  // to clear input buffer

        // ch = getchar();
         //ch = cin.get();
         cin>>ch;
    }

    // Print the linked list
    cout << "Linked list data:" << endl;
    p = head;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->link;
    }

    // Free memory
    p = head;
    while (p != NULL)
    {
        q = p->link;
        delete p;
        p = q;
    }

    return 0;
}
