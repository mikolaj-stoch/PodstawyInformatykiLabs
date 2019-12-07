#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Vec
{
	private:
		int x_;
		int y_;
	public:
		Vec(void);
		Vec (int x, int y);
		int getX(void);
		int getY(void);
		void add_one ();
	};
Vec::Vec(void) //konstruktor
{
	x_ = rand()%11;
	y_ = rand()%11;
}
Vec::Vec(int x, int y) //konstruktor
{
	x_ = x;
	y_ = y;
}
int Vec::getX(void) //getter
{
	return x_;
}
int Vec::getY(void) //getter
{
	return y_;
}
void Vec::add_one()
{
	y_ = y_ + 1;
	x_ = x_ +1;
}
void dod1(Vec a)
{
	cout<<"Wartosci funkcji przed dodaniem to: "<<a.getX()<<" oraz "<<a.getY()<<endl;
	a.add_one();
	cout<<"Wartosci funkcji po dodaniu to: "<<a.getX()<<" oraz "<<a.getY()<<endl;
}
void dod2(Vec* a)
{
	cout<<"Wartosci funkcji przed dodaniem to: "<<a->getX()<<" oraz "<<a->getY()<<endl;
	a->add_one();
	cout<<"Wartosci funkcji po dodaniu to: "<<a->getX()<<" oraz "<<a->getY()<<endl;
}
void dod3(Vec &a)
{
	cout<<"Wartosci funkcji przed dodaniem to: "<<a.getX()<<" oraz "<<a.getY()<<endl;
	a.add_one();
	cout<<"Wartosci funkcji po dodaniu to: "<<a.getX()<<" oraz "<<a.getY()<<endl;
}
//void dod4(const Vec &a)
//{
//	cout<<"Wartosci funkcji przed dodaniem to: "<<a.getX()<<" oraz "<<a.getY()<<endl;
//	a.add_one();
//	cout<<"Wartosci funkcji po dodaniu to: "<<a.getX()<<" oraz "<<a.getY()<<endl;
//}
//Nie dziala, bo const nie pozwala na zmiane wartosci.
void tablica(Vec* tab, int n)
{
	for(int i = 0; i < 10; i++)
	{
		cout<<"Przed: x = "<<tab->getX()<<" y = "<<tab->getY()<<endl;
		tab->add_one();
		cout<<"Po: x = "<<tab->getX()<<" y = "<<tab->getY()<<endl;
		tab++;
		cout<<endl;
	}
}
int main ()
{
	srand(time(NULL));
	int x,y;
	int n = 10;

	Vec tab[10];

	cout<<"Podaj x i y"<<endl;
	cin>>x>>y;
	Vec a (x,y);

	cout<<"Kopiowanie: "<<endl;
	dod1(a);

	cout<<"Wskaznik: "<<endl;
	dod2(&a);

	cout<<"Referencja: "<<endl;
	dod3(a);

	cout<<"Wartosci po wszytskich operacjach: "<<a.getX()<<" oraz "<<a.getY()<<endl;

	cout<<"Tablica: "<<endl;
	tablica(tab,n);
	

	return 0;
}

	
