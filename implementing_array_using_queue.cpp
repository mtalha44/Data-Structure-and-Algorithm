#include<iostream>
using namespace std;
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
