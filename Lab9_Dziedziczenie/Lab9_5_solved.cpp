#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<ctime>
#include<string.h>

using namespace std;

class Vector
{   
	public:
        double *data_;
        Vector(double data);
        Vector(const Vector &copy);
        double add (Vector *arg);
        double add (Vector &arg);
        double add1 (Vector arg);
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
Vector::Vector (const Vector &copy)
{
    data_ = new double;
    memcpy(data_,copy.data_,sizeof(double));
} 

double Vector::add (Vector *arg)
{
    return *data_+*(arg->data_);
}
double Vector::add (Vector &arg)
{
    return *data_+*(arg.data_);
}
double Vector::add1 (Vector arg)
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

    cout<<"Wskazniki: Po dodaniu: "<<a.add(&b)<<endl;
    cout<<"Referencja: Po dodaniu: "<<a.add(b)<<endl;  
    cout<<"Kopiowanie: Po dodaniu: "<<a.add1(b)<<endl;
    
    return 0;
}
