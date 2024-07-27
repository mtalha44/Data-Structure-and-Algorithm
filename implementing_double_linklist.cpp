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
    int pos;
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

/*        n = new dlinklist;  //Insertion at first node
        cout<<"\nEnter data:"<<endl;
        cin>>n->data;
        n->rlink=head;
        n->llink=NULL;
        head->llink=n;
        head = n;
*/
/*      n =new dlinklist; // Insertion at last node
        cout<<"Enter data:"<<endl;
        cin>>n->data;
        n->llink=p;
        n->rlink=NULL;
        p->rlink=n;
        p=n;
 */
     cout<<"Enter position node:"<<endl;
     cin>>pos;
     p=head;
     for(int i=1;i<pos;i++)
     {
         p=p->rlink;
     }
        n =new dlinklist; // Insertion at random node
        cout<<"Enter data:"<<endl;
        cin>>n->data;
        n->llink=p;
        n->rlink=p->rlink;
        p->rlink->llink=n;
        p->rlink=n;
        p=n;
/*
 n =new dlinklist; // Insertion at random node
        cout<<"Enter data:"<<endl;
        cin>>n->data;
        q->rlink=n;
        p->llink=n;
        n->rlink=p;
        n->llink=q;
         p=n;
*/
     p=head;
     cout<<"Dlinklist data:"<<endl;
     while(p!=NULL)
     {
        cout<<p->data;
        p=p->rlink;
     }

    return 0;
}
