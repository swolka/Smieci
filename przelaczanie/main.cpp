#include <iostream>
#include <cmath>
using namespace std;

int main()
{   char p;
    int r, a, b, h;
    const float pi=3.14;
    cout<<"Co chcesz zrobic?"<<endl;
    cout<<" -> obliczyc pole kola,wpisz: 1 "<<endl;
    cout<<" -> obliczyc pole prostokata,wpisz: 2  "<<endl;
    cout<<" -> obliczyc pole trojkata,wpisz: 3  "<<endl<<endl;
    cout<<" -> wyjsc,wpisz: 0 "<<endl<<endl<<endl;
    cout<<"Wybierasz:";
    cin>>p;

    switch (p)
    {
    case '1' :
        cout<<"Wpisz promien kola:"<<endl;
        cin>>r;
        cout<<"Pole kola dla promienia rownego "<<r<<" wynosi:"<< pi*pow(r,2);
        break;
    case '2' :
        cout<<"Wpisz kolejno 2 wymiary bokow:"<<endl;
        cin>>a;
        cin>>b;
        cout<<"Pole prostokata dla bokow o wymiarach "<<a<<" na "<<b<<" wynosi:"<< a*b;
        break;
    case '3' :
        cout<<"Wpisz wymiar pola podstawy trojkata:"<<endl;
        cin>>a;
        cout<<"Teraz wpisz wysokosc trojkata:";
        cin>>h;
        cout<<"Pole trojkata dla podstawy: "<<a<<" i wysokosci:"<<h<<" wynosi:"<< a*h/2;
        break;
    case '0' :
        goto koniec;



    }
koniec:
    cout<<endl<<endl<<"KONIEC"<<endl<<endl;
    return 0;
}
