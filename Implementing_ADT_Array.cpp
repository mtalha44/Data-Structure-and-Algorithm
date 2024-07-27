#include<iostream>
using namespace std;
class myArray
{
    int total_size;
    int used_size;
    int *ptr;

public:

    void create_array(int t_s,int u_s)
    {
        total_size =t_s;
        used_size = u_s;
        ptr = new int[t_s];
    }
    void show()
    {
       for(int i=0 ;i< used_size;i++)
       {
           cout<<ptr[i];//(*ptr) ,ptr++, //
       }
    }
    void setVal()
    {
       for(int i=0 ;i< used_size;i++)
       {
           cout<<"Enter Element:";
           cin>>ptr[i];//(*ptr) ,ptr++, //
       }
    }
};
int main()
{
    myArray marks;
    marks.create_array(5,3);
    marks.setVal();
    marks.show();

    return 0;
}
