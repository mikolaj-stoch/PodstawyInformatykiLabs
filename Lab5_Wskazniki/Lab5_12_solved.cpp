#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

struct produkt
{
    int waga;
    int cena;
};

int main ()
{
    srand(time(NULL));
    int tab[10];
    char tab2[10] = "Wskazniki";
    
    for (int i=0;i<10;i++)
        tab[i]=i;
    int *a=tab;
   
    for(int i=0;i<10;i++)
    {
        cout<<(*a)<<" "<<a<<" , ";
        (*a++);
    }
   
    cout<<endl;
    char *b=tab2;
   
    for(int i=0;i<10;i++)
    {
         cout<<(*b)<<" "<<(void*)b<<" , ";
         (*b++);
    }
    cout<<endl;
    
    produkt Rowery[10];
    
    for(int i=0;i<10;i++)
    {
        Rowery[i].waga=rand()%6+15;
        Rowery[i].cena=rand()%501+1000;
    }
    produkt *c=Rowery;
  //  cout<<c->waga<<endl;
  //  cout<<(*c).waga<<endl; 
    for(int i=0;i<10;i++)
    {
        cout<<(*c).waga<<" "<<c<<" " <<&c->waga<<" ";
	cout<<(*c).cena<<" "<<c<<" "<<&c->cena<<" , ";
       c++;
    }

   return 0;
}
