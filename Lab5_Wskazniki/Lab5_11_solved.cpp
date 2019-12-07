#include<iostream>
using namespace std;
int main ()
{
    int *b;
     for(int i=0;i<10;i++)
        b=&i;
    cout<<*b;
    return 0;

}
