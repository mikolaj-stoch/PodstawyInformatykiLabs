#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class vector2d
 {  private:
		int x1_;
		int x2_;

	public:
		vector2d(int,int);
		vector2d();

		int getX1(void) //getter
		{
				return x1_;
		}
		int getX2(void) //getter
		{
				return x2_;
		}
		void setX1(int x1) //setter
		{
			x1_ = x1;
		}
		void setX2(int x2) //setter
		{
			x2_ = x2;
		}
		void print2d();
		void  add (vector2d e);
 };
vector2d::vector2d (int x1, int x2)
{
	x1_ = x1;
	x2_ = x2;
}
vector2d::vector2d ()
{
	x1_ = rand()%11;
	x2_ = rand()%11;
}
void  vector2d::print2d()
{	
	cout<<x1_<<" "<<x2_<<endl;
}
void  vector2d::add(vector2d e)
{
	x1_ = x1_ + e.x1_;
	x2_ = x2_ + e.x2_;
}
int main ()
{	
	srand(time(NULL));
	vector2d a;
	vector2d e;
	int f;
	int g;
	a.print2d();
	e.print2d();
	a.add(e);
	a.print2d();
	cout<<"Podaj nowe argumenty wektora a"<<endl;
	cin>>f;
	cin>>g;
	a.setX1(f);
	a.setX2(g);
	cout<<"Nowe argumenty to: "<<endl;
	cout<<a.getX1()<<" "<<a.getX2()<<endl;
	return 0;
}	

