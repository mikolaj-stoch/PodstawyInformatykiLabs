#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

struct produkt
{
    int waga;
    int cena;
};
void wyswietl (int tab[10],char a[10], produkt p[10])
{
    for(int i=0;i<10;i++)
        cout<<tab[i]<<" ";
        cout<<endl;
    for(int i=0;i<10;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    for(int i=0;i<10;i++)
        cout<<p[i].waga<<" ";
        cout<<endl;
    for(int i=0;i<10;i++)
        cout<<p[i].cena<<" ";
        cout<<endl;
}
int main ()
{
    srand(time(NULL));
    int tab[10];
    char tab2[10] = "Wskazniki";

    for (int i=0;i<10;i++)
        tab[i]=i;
    int *a=&tab[0];
    int *z=&tab[9];
    char *b=tab2;
    char *x=&tab2[9];
    produkt Rowery[10];

    for(int i=0;i<10;i++)
    {
        Rowery[i].waga=rand()%6+15;
        Rowery[i].cena=rand()%501+1000;
    }
    produkt *c=Rowery;
    produkt *g=&Rowery[9];

    wyswietl(tab,tab2,Rowery);

    for(int i=0;i<5;i++)
    {
        swap(*(a+i),*(z-i));
        swap(*(b+i),*(x-1-i));
        swap(*(c+i),*(g-i));
    }


    wyswietl(tab,tab2,Rowery);

    return 0;
}
