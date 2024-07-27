#include<iostream>
using namespace std;
struct linklist
{
    int data;
    linklist* link;
};
class Stack
{
    linklist *head;

public:
    Stack(){head=NULL;}
    ~Stack(){deletion();}

    void push()
    {
        if( head == NULL )
        {
            linklist *p = new linklist;
            cout<<"Enter data:"<<endl;
            cin>>p->data;
            p -> link = NULL;
            head = p;
        }
        else
        {
            linklist *p = new linklist;
            cout<<"Enter data:"<<endl;
            cin>>p->data;
            p->link=head;
            head=p;
       }

    }

    void pop()
    {
        if(head!=NULL)
        {
            linklist *p=head;
            head=head->link;
            delete p;
        }
        else
        {
            cout<<"Stack empty"<<endl;
            return;
        }
    }
    void show()
    {
        if(head==NULL)
        {
            cout<<"Stack empty"<<endl;
            return;
        }
        else{
            linklist *p=head;
            cout<<"Stack data:"<<endl;
            while(p!=NULL)
            {
                cout<<p->data;
                p=p->link;
            }
            cout<<endl;
        }
    }
    void deletion()
    {
        linklist *p=head;
        while(p!=NULL)
        {
            linklist *q=p->link;
            delete p;
            p=q;
        }
        head=NULL;
    }

};
int main()
{
    Stack stack;
    stack.push();
    stack.push();
    stack.show();
    stack.pop();
    stack.push();
    stack.show();


    return 0;
}

