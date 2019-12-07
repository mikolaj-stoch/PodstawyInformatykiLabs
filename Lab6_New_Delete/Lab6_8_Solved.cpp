#include<iostream>
using namespace std;
int main ()
{
    int a = 5;
    int b = 8;
    int *c = &b;
    cout<<"Wskaznik oraz zmienna: "<<endl;
    cout<<*c+a<<endl;
    cout<<a-*c<<endl;
    int *d=&a;
    cout<<"Dwa wskazniki: "<<endl;
    cout<<*c+*d<<endl;
    cout<<*d-*c<<endl;
    return 0;
}
