#include<iostream>
using namespace std;
int GCD(int did,int div)
{
    if(did % div == 0)
        return div;
    else

    return GCD(div , did % div);

}

int main()
{

    cout<<GCD(46,16);
    return 0;
}
