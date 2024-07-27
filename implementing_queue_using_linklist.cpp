#include<iostream>
using namespace std;
struct linklist
{
    int data;
    linklist* link;
};
class Queue
{
    linklist *head;

public:
    Queue(){head=NULL;}
    ~Queue(){deletion();}

    void enqueue()
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
            linklist *p = head;
            while( p -> link != NULL )
            {
                p = p->link;

            }
            linklist *q = new linklist;
            cout<<"Enter data:"<<endl;
            cin>>q->data;
            q->link = NULL;
            p ->link = q;
            p=q;
       }

    }

    void dequeue()
    {
        if(head!=NULL)
        {
            linklist *p = head;
            head = head -> link;
            delete p;
        }
        else
        {
            cout<<"Queue empty"<<endl;
            return;
        }
    }
    void show()
    {
        if(head==NULL)
        {
            cout<<"Queue empty"<<endl;
            return;
        }
        else{
            linklist *p=head;
            cout<<"Queue data:"<<endl;
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
    Queue queue;
    queue.enqueue();
    queue.enqueue();
    queue.enqueue();
    queue.show();
    queue.dequeue();
    queue.show();

    return 0;
}

