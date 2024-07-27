#include<iostream>
using namespace std;
/* class Stack
{
    int top = -1;
    int *arr;
    int size;
public:
    Stack()
    {

    }
    Stack(int size)
    {
        arr = new int[size];
        this -> size = size;
    }
    void push()
    {
        if(top==size-1)
        {
            cout<<"Stack Full"<<endl;
            return;
        }
        else
        {
        top++;
        cout<<"enter element"<<endl;
        cin>>arr[top];
        }
    }
    void pop()
    {
        if(top == -1)
        {
            cout<<"Stack Empty"<<endl;
            return;
        }
        else{
            cout<<"Pop Element:"<<endl;
            cout<<arr[top]<<endl;
            top--;
        }
    }
    void show()
    {
        for(int i=0;i<=top ; i++)
        {
            cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
        }
    }
};
int main()
{
    Stack obj(5);
    obj.push();
    obj.push();
    obj.push();
    obj.show();
    obj.pop();
    obj.show();
    return 0;
}
*/

/*
class Queue
{
    int rear=-1;
    int front=-1;
    int *arr;
    int size;
    public:
        Queue(){}
        Queue(int size)
        {
            arr = new int[size];
            this ->size = size;
        }
        void enqueue()
        {
            if(rear == size - 1)
            {
                cout<<"array full"<<endl;
                return;
            }
            else{
                rear++;
            cout<<"Enter element:"<<endl;
            cin>>arr[rear];
        }
            if(front ==-1){
            front++;
            }
        }
        void dequeue()
        {
            if(front == -1)
            {
                cout<<"Array empty"<<endl;
                return;
            }
            else{
                cout<<"Dequeue Element:"<<endl;
                cout<<arr[front];
            }
                if(front ==rear ){
                front =rear = -1;
                }
                else{
                front++;
            }
        }
        void show()
        {
            for(int i=front ; i<=rear ;i++)
            {
                cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
            }
        }
};
int main()
{
    Queue obj(5);
    obj.enqueue();
    obj.enqueue();
    obj.enqueue();
    obj.show();
    obj.dequeue();
    obj.show();

    return 0;
}
*/
/*
 class CircularQueue
 {
    int rear=-1;
    int front=-1;
    int *arr;
    int size;
public:
        CircularQueue(){}
        CircularQueue(int size){ arr = new int[size];this ->size = size;}
        void enqueue()
        {
            if( ((rear == size-1) && ( front == 0 ) ) || (front - rear == 1))
            {
                cout<<"Array full";
                return;
            }
            else if(rear == -1)
            {
                rear = 0;
                front = 0;
            }
            else if( rear == size -1)
            {
                rear=0;
            }
            else
            {
                rear++;
            }
            cout<<"Enter element:"<<endl;
            cin>>arr[rear];
        }
        void dequeue()
        {
            if(front == -1)
            {
                cout<<"Array Empty"<<endl;
                return;
            }
            cout<<"Dequeue Element:"<<endl;
            cout<<arr[front];

            if( front == rear )
            {
                front  == rear -1 ;
            }
            else if (front == size - 1)
            {
                front = 0;
            }
            else{
                front++;
            }
        }
        void show()
        {
            for(int i=front ; i<=rear ;i++)
            {
                cout<<"arr["<<i<<"]:"<<arr[i]<<endl;
            }
        }
 };
 int main()
 {
     CircularQueue obj(5);
     obj.enqueue();
     obj.enqueue();
     obj.enqueue();
     obj.show();
     obj.dequeue();
     obj.show();

     return 0;
 }
*/
