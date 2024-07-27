
/*
#include <iostream>
using namespace std;
class Queue {
private:
    int* arr;
    int front;
    int rear;
    int size;

public:
    Queue(int s) {
        size = s;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    bool isFull() {
        return (rear == size - 1);
    }

    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full." << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = data;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Dequeued element: " << arr[front] << endl;
        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(40);
    q.display();
    return 0;
}
*/


#include<iostream>
using namespace std;
struct linklist
{
    int data;
    linklist *link;
};
void push();
void pop();
void show();
int top = -1;
int main()
{
    linklist *p , *q ;
    p = new linklist ;
    q = new linklist ;
    push(linklist p,linklist  q,linklist *head);
   // push();
   // push();
   // show();
    pop(linklist *p,linklist *q,linklist *head);
    show(*p,*q,*head);
    return 0;
}
    void push(*p,*q,*head)
    {
        if( top == -1 )
        {
         p = new linklist;
         cout<<"Enter data:"<<endl;
         cin>>p->data;
         p -> link = NULL;
         head = p;
        }
        else
        {
            q = new linklist;
            cout<<"Enter data:"<<endl;
            cin >> q -> data;
            q -> link = head ;
            head = q ;
        }
        top++;
    }
    void show(*p,*q,*head)
    {
        cout<<"Data:"<<endl;
        p=head;
        while(p!=NULL)
        {
            cout<<p->data;
            p = p->link;
        }
    }
    void pop(*p,*q,*head)
    {
        if(top == -1)
        {
            cout<<"Stack empty"<<endl;
            return;
        }
        else
        {

            cout<<"\nDelete at first node"<<endl;
            p = head ;
            head = p ->link;
            delete p;
        }
    }

