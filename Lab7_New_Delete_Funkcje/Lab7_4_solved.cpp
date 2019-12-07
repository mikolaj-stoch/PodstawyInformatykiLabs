#include<iostream>
#include<cmath>

using namespace std;

int delta (int a,int b, int c)
{
	int d = b*b-(4*a*c);
	return d;
}

void Fk(int a, int b, int c)
{
	cout<<"Twoj wielomian to: "<<"("<<a<<")"<<"x^2"<<" + "<<"("<<b<<")"<<"x"<<" + "<<"("<<c<<")"<<endl;

	int  d = delta(a,b,c);
	float p = sqrt(d);

	if(d < 0)
		cout<<"Funkcja nie ma miejsc zerowych. Delta mniejsza od zera."<<endl;

	if(d == 0)
		cout<<"Funkcja ma jedno podwojne miejsce zerowe rowne: "<<-b/(2*a)<<"."<<endl;

	if (d > 0)
		cout<<"Miejsca zerowe rowne: "<<(-b+p)/(2*a)<<" oraz "<<(-b-p)/(2*a)<<"."<<endl;

}

int main ()
{
	int a;
	int b;
	int c;

	cout<<"Podaj wyraz a: ";
	cin>>a;

	cout<<"Podaj wyraz b: ";
	cin>>b;

	cout<<"Podaj wyraz c: ";
	cin>>c;


	int d=delta(a,b,c);
	cout<<"Delta to: "<<d<<endl;

	Fk(a,b,c);
	
	return 0;
}
