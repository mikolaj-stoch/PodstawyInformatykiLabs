#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class vector2d
{
    private:
        int *var_;
    public:
        vector2d(int,int);
        vector2d();
        void setX1(int x1) 
        {
            var_[0] = x1;
        } 
        void setX2(int x2)
        {
            var_[1] = x2;
        }
        int *getX (void)
        {
            return var_;
        }
        void print2d();
        void add(vector2d c);
};
vector2d::vector2d(int x1,int x2):var_(new int[2])
{
    var_[0] = x1;
    var_[1] = x2;
}
vector2d::vector2d():var_(new int[2])
{
    var_[0] = rand()%11;
    var_[1] = rand()%11;
}
void vector2d::print2d()
{
    cout<<var_[0]<<" "<<var_[1]<<endl;
}
void vector2d::add(vector2d c)
{
    var_[0] = var_[0] + c.var_[0];
    var_[1] = var_[1] + c.var_[1];
}
int main ()
{  
    vector2d a;
    vector2d b;
    int z, q;

    a.print2d();
    b.print2d();

    a.add(b);
    cout<<"Suma wektorow: "<<endl;
    a.print2d();

    cout<<"Podaj nowe wspolrzedne wektora a: ";
    cin>>z;
    cin>>q;
    a.setX1(z);
    a.setX2(q);
    cout<<"Nowe: "<<*a.getX()<<" "<<*(a.getX()+1)<<" "<<endl;

    return 0;
}
