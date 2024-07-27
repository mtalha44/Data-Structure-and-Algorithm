#include<iostream>
using namespace std;
class Stack
{
    int top =-1;
    int Size;
    int arr[];
public:
    Stack(){}
    Stack(int Size)
    {
        this -> Size =Size;
        arr[Size];
    }
    void push()
{
    if(top==Size - 1)
    {
        cout<<"Stack full"<<endl;
        return ;
    }
    else
        top++;
    cout<<"Enter :"<<endl;
    cin>>arr[top];

}
void pop()
{
    if(top==-1)
    {
        cout<<"Stack Empty"<<endl;
        return ;
    }
    else
     cout<<arr[top]<<endl;
     top--;
}
void show()
{
    for(int i=0;i<=top;i++)
    {
        cout<<"array:"<<endl;
        cout<<arr[i]<<endl;
    }
}
};
int main()
{
    Stack ptr(5);
    ptr.push();
    ptr.push();
    ptr.push();
    ptr.pop();
    ptr.show();
    return 0;
}
