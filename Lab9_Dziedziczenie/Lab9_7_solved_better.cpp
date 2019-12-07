#include <iostream>
using namespace std;
class CD
{
    public:
    char *content_;
    bool awareness;
    void read();
    void in_out();
    CD(char a[]);
    int rozmiar=10;
};
class CDRW : public CD
{
    public:
    void write(char a[]);
    CDRW(char a[]) :CD(a){};
};
class BR :public CDRW
{
    public:
    int rozmiar=20;
    BR(char a[]) :CDRW(a){}
};
CD::CD(char a[])
{
    content_ =new char[rozmiar];
    awareness=true;
    content_=a;
    cout<<"aaa"<<endl;
}

void CDRW::write(char a[])
{

    content_=a;
}
void CD::in_out(void)
{
    if(awareness == false)
        {
            cout<<"Czytnik zostal wlozony"<<endl;
            awareness = true;
        }
    if(awareness == true)
        {
            cout<<"Czytnik zostal wysuniety"<<endl;
            awareness = false;
        }
}
void CD::read()
{
    if(awareness) cout<<content_<<endl;
}

int main()
{
    CD plyta1("dane1");
    CDRW plyta2("dane2");
    BR plyta3("dane3");
    CD plyta4("");
    cout<<plyta1.rozmiar<<endl;
    cout<<plyta2.rozmiar<<endl;
    cout<<plyta3.rozmiar<<endl;
    cout<<plyta4.rozmiar<<endl;
}
