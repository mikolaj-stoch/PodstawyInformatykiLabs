#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<ctime>

using namespace std;

class Vector
{   
	public:
        double *data_;
		Vector(double data);
        double add (Vector arg);
        ~Vector();
        double pokaz(void);
};
Vector::Vector (double data)
{
            data_ = new double;
            cout<<"Pamiec zarezerwowana"<<endl;
            *data_ = data;
            cout<<"Adres wskaznika: "<<data_<<endl;
}
double Vector::add (Vector arg)
{
    return *data_+*(arg.data_);
}
Vector::~Vector()
{
    cout<<"Adres wskaznika: "<<data_<<endl;
    delete data_;
    cout<<"Pamiec zwolniona"<<endl;
}
double Vector::pokaz (void)
{
    return *data_;
}
int main()
{
    double g;
    double f;

    cout<<"Podaj wektory do dodania: "<<endl;
    cin>>g>>f;

    Vector a(g);
	Vector b(f);
	
    cout<<"Adresy do Wektorow: "<<&a<<" oraz "<<&b<<endl;

    cout<<"Wektory przed dodaniem: "<<a.pokaz()<<" "<<b.pokaz()<<endl;
    cout<<"Po dodaniu: "<<a.add(b)<<endl;

    return 0;
}
