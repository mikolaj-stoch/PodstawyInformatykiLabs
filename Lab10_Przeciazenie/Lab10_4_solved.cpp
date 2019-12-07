#include<iostream>
using namespace std;

class wektor2D
{
    private:
        int x_;
        int y_;
    public:
        wektor2D(int x, int y);
        int getX(void);
        int getY(void);
        void setX(int x);
        void setY(int y);
};
class wektor2Dpro : public wektor2D
{
    private:
        int x_;
        int y_;
    public: 
        wektor2D(int x, int y) : wektor2D(x,y) {};
}
wektor2D::wektor2D(int x,int y)
{
    x_ = x;
    y_ = y;
}
int wektor2D::getX(void)
{
    return x_;
}
int wektor2D::getY(void)
{
    return y_;
}
void wektor2D::setX(int x)
{
    x_ = x;
}
void wektor2D::setY(int y)
{
    y_ = y;
}

int main ()
{
    int x,y;
    cout<<"Podaj x oraz y"<<endl;
    cin>>x>>y;
    wektor2D a(x,y);
    cout<<"X: "<<a.getX()<<" Y: "<<a.getY()<<endl;
    return 0;
}