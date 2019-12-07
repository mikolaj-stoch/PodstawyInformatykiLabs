#include<iostream>
#include<cstdlib>
#include<stdio.h>
#include<ctime>
#include<cmath>

using namespace std;

class Vector
{   private:
		double *data_;
		size_t dimension_;
	public:
		Vector(double data); // 3 konstrktory dla R1, R2 oraz R3
        Vector (double data, double data1);
        Vector (double data, double data1, double data2);
        float abs();
        ~Vector() // destruktor
        {
            delete data_;
        }
};
Vector::Vector (double data)
{
            data_ = new double; //rezerwacja pamieci
            data_[0] = data; //przypisanie wartosci
            dimension_ = 1; //okreslenie jakie R
}
Vector::Vector (double data, double data1)
{
    data_ = new double[2]; //jw
    data_[0] = data;
    data_[1] = data1;
    dimension_ = 2;
}
Vector::Vector (double data, double data1, double data2)
{
    data_ = new double[3]; //jw
    data_[0] = data;
    data_[1] = data1;
    data_[2] = data2;
    dimension_ = 3;
}
float Vector::abs() //wartosc abosulutna wektora (dlugosc)
{
    if (dimension_ == 1)
    {
        if (data_[0] < 0)
            return (data_[0]) * (-1); //wartosc bezwzglenda 
        else
            return data_[0];
    }
    if (dimension_ == 2)
    {
        double p = data_[0]*data_[0] + data_[1]*data_[1]; //suma dwoch kwadratow
        return sqrt(p);
    }
    if (dimension_ == 3)
    {
        double p = data_[0]*data_[0] + data_[1]*data_[1] + data_[2]*data_[2]; //jw
        return sqrt(p);
    }
}
int main()
{
	Vector a(-2.5);
	Vector b(4.0, 3.0);
	Vector c(2.0, 2.0, 2.828);
	cout<<a.abs()<<endl<<b.abs()<<endl<<c.abs()<<endl;
    return 0;
}
