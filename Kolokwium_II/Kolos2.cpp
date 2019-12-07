#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class losowanie
{
private:
        int losowana; //zmienne do statysyk
        int licznik;
        float srednia;
        int a[10]; // zmienn do liczenia z kazdego zakresu
    public:
        void my_random_number (void); //metody
        void my_stat(void);
        int my_count(void);
        void my_reset(void);

};

void losowanie::my_random_number (void)
{
    losowana = rand()%100;  //losowanie

    if (losowana >= 0 && losowana < 10) //zliczanie z kazdej 0-10 itp
        a[0]++;
    if (losowana >= 10 && losowana < 20)
        a[1]++;
    if (losowana >= 20 && losowana < 30)
        a[2]++;
    if (losowana >= 30 && losowana < 40)
        a[3]++;
    if (losowana >= 40 && losowana < 50)
        a[4]++;
    if (losowana >= 50 && losowana < 60)
        a[5]++;
    if (losowana >= 60 && losowana < 70)
        a[6]++;
    if (losowana >= 70 && losowana < 80)
        a[7]++;
    if (losowana >= 80 && losowana < 90)
        a[8]++;
    if (losowana >= 90 && losowana < 100)
        a[9]++;

    licznik++;

    srednia = (((licznik - 1) * srednia) + losowana) / licznik; //liczenie sredniej
}

void losowanie::my_stat(void)
{
    cout<<"Lacznie wylosowano: "<<licznik<<" liczb."<<endl; //prezentujemy statystyki

    cout<<"W tym: "<<a[0]<< " z zakresu 00 do 09"<<endl; //wypisywanie z kazdej
    cout<<"W tym: "<<a[1]<< " z zakresu 10 do 19"<<endl;
    cout<<"W tym: "<<a[2]<< " z zakresu 20 do 29"<<endl;
    cout<<"W tym: "<<a[3]<< " z zakresu 30 do 39"<<endl;
    cout<<"W tym: "<<a[4]<< " z zakresu 40 do 49"<<endl;
    cout<<"W tym: "<<a[5]<< " z zakresu 50 do 59"<<endl;
    cout<<"W tym: "<<a[6]<< " z zakresu 60 do 69"<<endl;
    cout<<"W tym: "<<a[7]<< " z zakresu 70 do 79"<<endl;
    cout<<"W tym: "<<a[8]<< " z zakresu 80 do 89"<<endl;
    cout<<"W tym: "<<a[9]<< " z zakresu 90 do 99"<<endl;

    cout<<"Srednia wynosi: "<<srednia<<endl;

}

int losowanie::my_count(void) //zwraca liczbe wylosowanych liczb
{
    return licznik;
}

void losowanie::my_reset(void)  //reset danych - licznika, sredniej i zmiennych liczacych
{
    srednia = 0;
    licznik = 0;
    for (int i =0; i < 10; i++)
        a[i] = 0;
}

int main ()
{
    srand(time(NULL));  //pokazanie dzialania w main

    losowanie a; //deklaracja klasy;

    a.my_reset();

    for (int i = 0; i < 10; i++) //losujemy 10 razy
        a.my_random_number();

    a.my_stat(); //wywolanie my_stat

    cout<<"My_count: "<<a.my_count()<<endl;

    cout<<"Nastapi reset"<<endl;
    a.my_reset();
    a.my_stat();

    return 0;
}
