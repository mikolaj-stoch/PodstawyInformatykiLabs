#include<iostream>
using namespace std;

class CD
{
    public:
        CD(void);
//        ~CD(void);
        int size_;
        char *content_;
        bool awareness;
        void in_out(void);
        void read(void);
};
class CDRW : public CD
{
    public:
        CDRW(void) : CD() {};
        void write(char a[]);
};
class BR : public CDRW
{
    public:
        BR(void);
 //       ~BR(void);
};    
CD::CD(void)
{   
    size_ = 10;
    content_ = new char [size_];
    content_ = "DEFAULT";
    awareness = true;
//    cout<<"Pamiec zarezerwowna"<<endl;
}
//CD::~CD(void)
//{
//    cout<<"Usuwanie"<<endl;
//    delete content_;
//}
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
void CD::read(void)
{   
    if(awareness == true )
    {
        cout<<"Dane na plycie: "<<endl<<content_<<endl;
    }
    else
        cout<<"Nie ma czytnika w napedzie"<<endl;
}
void CDRW::write(char a[])
{
    content_ = a;
    awareness = true;
}
BR::BR(void)
{
    size_ = 20;
    content_ = new char [20];
    content_ = "DEFAULT_BUT_LARGER";
//   cout<<"Utworzono"<<endl;
}
//BR::~BR(void)
//{
//   cout<<"Usuwanie"<<endl;
//    delete content_;
//}
int main ()
{   
    char a[10];
    char b[20];

    cout<<"Plyta 1: "<<endl;
    CD plyta1;
    plyta1.read();
    plyta1.in_out();
    plyta1.read();

    cout<<"Plyta 2: "<<endl;
    CDRW plyta2;
    plyta2.read();
    cout<<"Podaj dane plyty 2 do nadpisania (10 znakow) : "<<endl;
    cin>>a;
    plyta2.write(a);
    plyta2.read();

    cout<<"Plyta 3: "<<endl;
    BR plyta3;
    plyta3.read();
    cout<<"Podaj dane plyty 3 do nadpisania (20 znakow) : "<<endl;
    cin>>b;
    plyta3.write(b);
    plyta3.read();

    return 0;
}

    