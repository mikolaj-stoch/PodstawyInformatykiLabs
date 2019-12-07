#include<iostream>
using namespace std;

class wektor2D
{
    private:
        int x_;
        int y_;
    public:
        wektor2D(int x, int y);
};
wektor2D::wektor2D(int x,int y)
{
    x_ = x;
    y_ = y;
}

int main ()
{
    int x,y;
    cout<<"Podaj x oraz y"<<endl;
    cin>>x>>y;
    wektor2D a(x,y);
    return 0;
}