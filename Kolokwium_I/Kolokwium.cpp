#include<iostream>
using namespace std;

struct stat
{
	int max;
	int min;
	int mean;
};

stat funkcja (int tab[10]) //funkcja wypelniajace wartosci
{
	stat wartosci;
	
	wartosci.max = tab[0]; //deklaracja  min i max
	wartosci.min = tab[0];
	wartosci.mean = 0;
	int s = 0;

	for(int i = 1; i < 10 ; i++) //sprawdzamy min i max
	{
		if (tab[i] > wartosci.max)
		wartosci.max = tab[i];
	}
	
	for(int i = 1; i < 10 ; i++)
	{
		if (tab[i] < wartosci.min)
		wartosci.min = tab[i];
	}

	for(int i = 0; i < 10; i++) // srednia
		s = s + tab[i];
	
	wartosci.mean = s/10;

	return wartosci;
}

void wypisz(int tab[10]) //wypisywanie tablicy
{
	for(int i = 0; i < 10; i++)
		cout<<tab[i]<<" ";
	cout<<endl;
}

void  funkcja_wypisujaca (stat wartosci) // wypisywanie struktury
{	
	cout<<"Wartosc maksymalna: "<<wartosci.max<<endl;
	cout<<"Wartosc minimalna: "<<wartosci.min<<endl;
	cout<<"Srednia arytmetyczna: "<<wartosci.mean<<endl;
}

stat funkcja_dwoch_tablic (int tab[10],int tab2[10], int n) //min,max i srednia z obu tablic
{
	stat wartosci;
	
	wartosci.max = tab[0];
	wartosci.min = tab[0];
	int s = 0;

	for(int i = 1; i < n; i++) // sprawdzamy wartosci dla tab1 
	{
		if(tab[i] > wartosci.max)
		wartosci.max = tab[i];
		if(tab[i] < wartosci.min)
		wartosci.min = tab[i];
	}
	
	for ( int i = 0; i < n; i++) //sprawdzamy wartosci dla tab2
	{
		if(tab2[i] > wartosci.max)
		wartosci.max = tab2[i];
		if(tab2[i] < wartosci.min)
		wartosci.min = tab2[i];
	}

	for (int i = 0; i < n; i++)
	s = s + tab[i] + tab2[i];
	
	wartosci.mean = s/(2*n);
	
	return wartosci;
}
stat *wskaznik (int *a)
{	
	stat wartosci; 
	stat *b = &wartosci; 
	
	int s = 0;

	a++;
	
	for(int i = 1; i < 10; i++)
	{
	if (*a < (*b).min)
		(*b).min = *a;
	if (*a > (*b).max)
		(*b).max = *a;
	a++;
	}

return b;
}
		
int main ()
{
	int tab[10];
	int tab2[10];
	int n = 10;
	int *a = tab;


	for ( int i = 0 ; i < 10; i++)
		cin>>tab[i];

	cout<<endl;

	for ( int i = 0; i < 10; i++)
		cin>>tab2[i];

	wypisz(tab);
	wypisz(tab2);

	stat wartosci1;
	stat wartosci2;

	wartosci1 = funkcja(tab);
	wartosci2 = funkcja_dwoch_tablic(tab,tab2,n);

	funkcja_wypisujaca(wartosci1);
	funkcja_wypisujaca(wartosci2);

return 0;
}



	
	
