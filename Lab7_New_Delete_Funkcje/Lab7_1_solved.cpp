#include<iostream>

using namespace std;

struct car
{
	int displacement;
	int seats;
};

int main ()
{	
	car c1;
	c1.displacement = 5;
	c1.seats = 5;
	car *a = new car;
	a=&c1;
	//a->displacement=5;
	//a->seats=5;
	cout<<(*a).displacement<<" "<<(*a).seats<<endl;
	//delete c1;
	delete a;
	return 0;
}
	
