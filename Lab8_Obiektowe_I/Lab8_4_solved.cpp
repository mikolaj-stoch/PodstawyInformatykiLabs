#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class vector2d
 {
	public:
		int x1;
		int x2;
		void print2d();
		void  add (vector2d e);
 };
void  vector2d::print2d()
{	
	cout<<x1<<" "<<x2<<endl;
}
void  vector2d::add(vector2d e)
{
	x1 = x1 + e.x1;
	x2 = x2 + e.x2;
}
int main ()
{	
	srand(time(NULL));
	vector2d a;
	vector2d e;
	a.x1 = rand()%11;
	a.x2 = rand()%11;
	e.x1 = rand()%21;
	e.x2 = rand()%21;
	a.print2d();
	e.print2d();
	a.add(e);
	a.print2d();
	return 0;
}	

