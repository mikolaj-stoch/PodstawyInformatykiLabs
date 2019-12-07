#include<iostream>
using namespace std;
int main ()
{
    int a=2;
    int *y=&a;
    cout<<*y<<endl;
    (*y)=4;
    cout<<*y<<endl;
    return 0;

}
