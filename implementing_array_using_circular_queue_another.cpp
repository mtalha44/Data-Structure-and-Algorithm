#include<iostream>
using namespace std;

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


