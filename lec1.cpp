#include<iostream>
using namespace std;
class Stack
{
private:
    int top;
    int arr[5];
public:
    Stack()
    {
        top =-1;
        for(int i=0;i<5 ;i++)
        {
            arr[i]=0;
        }
    }
    void push(int val)
    {
        if(top == 4)
        {
           cout<<"Stack overflow"<<endl;
        }
        else
            top++;
            arr[top]=val;
    }
    int pop()
{
    if (top == -1)
    {
        cout << "Underflow condition" << endl;
        return -1; // or some other error value
    }
    int popval = arr[top];
    arr[top] = 0;
    top--;
    return popval;
}

    void display()
    {
        cout<<"Stack Elements:"<<endl;
        for(int i=4;i>=0;i--)
        {
           cout<<arr[i]<<endl;
        }
    }
};
int main()
{
    Stack s1;
    s1.display();
    s1.push(10);
    s1.push(5);
    s1.display();
    s1.pop();
    s1.display();

    return 0;
}
