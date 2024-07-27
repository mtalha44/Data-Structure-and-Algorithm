#include<iostream>
using namespace std;
struct dlinklist
{
    int data;
    dlinklist *llink,*rlink;
};
int main()
{
    dlinklist *p,*q,*head,*n;
    char ch;
    p = new dlinklist;
    cout<<"Enter data:"<<endl;
    cin>>p->data;

    p->rlink=NULL;
    p->llink=NULL;

    head = p;

    cout<<"create another node(y/n):"<<endl;
    cin>>ch;

    do
    {

        q = new dlinklist;
        cout<<"Enter data:"<<endl;
        cin>>q->data;
        q->rlink=NULL;
        q->llink=p;
        p->rlink=q;
        p=q;

        cout<<"create another node(y/n):"<<endl;
        cin>>ch;
    }
    while(ch=='y');

    p=head;
    cout<<"Dlinklist data:"<<endl;
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->rlink;
    }

    p=head;
    while(p->rlink!=NULL)
    {
        p=p->rlink;
    }
    cout<<"Dlinklist data reverse:"<<endl;
    while(p!=NULL)
    {
        cout<<p->data;
        p=p->llink;
    }

    return 0;
}
