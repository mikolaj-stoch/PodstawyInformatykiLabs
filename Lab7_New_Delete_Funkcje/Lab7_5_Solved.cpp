#include<iostream>
#include<cmath>

using namespace std;

struct arg
{
    int a;
    int b;
    int c;
};

struct mz
{
    float m1;
    float m2;
};

int delta (arg liczby)
{
	int d = liczby.b*liczby.b-(4*liczby.a*liczby.c);
	return d;
}

void Fk(arg liczby)
{
	cout<<"Twoj wielomian to: "<<"("<<liczby.a<<")"<<"x^2"<<" + "<<"("<<liczby.b<<")"<<"x"<<" + "<<"("<<liczby.c<<")"<<endl;

	int  d = delta(liczby);
	float p = sqrt(d);

	mz m;
	m.m1 = 0;
	m.m2 = 0;
    mz *w = &m;

	if(d < 0)
        cout<<"Funkcja nie ma miejsc zerowych. Delta mniejsza od zera."<<endl;

	if(d == 0)
		{
		    m.m1 = -liczby.b/(2*liczby.a);
		    cout<<"Funkcja ma jedno podwojne miejsce zerowe rowne: "<<(*w).m1<<"."<<endl;
        }

	if (d > 0)
        {
            m.m1 = (-liczby.b+p)/(2*liczby.a);
            m.m2 = (-liczby.b-p)/(2*liczby.a);
            cout<<"Miejsca zerowe rowne: "<<(*w).m1<<" oraz "<<(*w).m2<<"."<<endl;
        }

}

int main ()
{
	arg liczby;

	cout<<"Podaj wyraz a: ";
	cin>>liczby.a;

	cout<<"Podaj wyraz b: ";
	cin>>liczby.b;

	cout<<"Podaj wyraz c: ";
	cin>>liczby.c;


	int d=delta(liczby);
	cout<<"Delta to: "<<d<<endl;

	Fk(liczby);

	return 0;
}
