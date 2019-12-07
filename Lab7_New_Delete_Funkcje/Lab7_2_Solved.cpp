#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main ()
{
    srand(time(NULL));
    int a;
    cin>>a;
    int tab[a];
    int *b = new int [a];
    b = &tab[0];
    for (int i=0;i<a;i++)
        tab[i]=rand()%11;
    for (int i=0;i<a;i++)
    {
        cout<<*b<<" ";
        b++;
    }
    delete b;
    return 0;
}
