#include<iostream>
using namespace std;
struct clinklist
{
    int data;
    clinklist *link;
};
int main()
{
    clinklist *p,*q,*head;
    char ch;
    p = new clinklist;
    cout<<"Enter data:"<<endl;
    cin>>p->data;

    p->link=head;
    head = p;

    cout<<"create another node(y/n):"<<endl;
    cin>>ch;

    do
    {

        q = new clinklist;
        cout<<"Enter data:"<<endl;
        cin>>q->data;
        q->link=head;
        p->link=q;
        p=q;

        cout<<"create another node(y/n):"<<endl;
        cin>>ch;
    }
    while(ch=='y');

    p=head;
    cout<<"Clinklist data:"<<endl;
    do{
        cout<<p->data;
        p=p->link;
    }
    while(p!=head);

    p=head;
    do{

        q=p->link;
        delete p;
        q=p;
    }
    while(p!=head);

    return 0;
}
