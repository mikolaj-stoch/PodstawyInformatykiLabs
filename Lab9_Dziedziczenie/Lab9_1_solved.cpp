#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class czas
{	
	public:
		int min;
		
		czas(int m)
		{			
		min = m;
		}
		
		czas (int g, int m)
		{
			min = g*60 + m;
		}
		czas (string g) //zamieniamy string na int
		{
			min =  ( ( (g[0]-'0') * 10 + (g[1]-'0') )* 60 ) + ( (g[3]-'0') * 10  + (g[4]-'0') );
		}
		void print();
};
void czas::print()
{
	cout<<"Twoj czas to "<<min<<" "<<endl;
}

int main ()
{
	srand(time(NULL));
	int m = rand()%501;
	int g = rand()%24;
	string q;
	cout<<"Podaj godzine w formacie: xx:xx"<<endl;
	cin>>q;
	
	czas t(m);
	czas z(m,g);
	czas k (q);
	t.print();
	z.print();
	k.print();
	return 0;
}
		
