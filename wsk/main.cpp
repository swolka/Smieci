#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << "Wskazniki" <<endl<<endl<<endl<<endl;
    int *ws;
    int *wsk;
    int *wska;
    int w, v, f, a;
    cout << "Podaj jakas wartosc liczbowa:";
    cin>>w;
    cout << "Podaj jakas inna wartosc liczbowa:";
    cin>>v;
    cout << "Podaj jeszcze liczbe:";
    cin>>a;

    ws=&f;
    wsk=&w;
    wska=&v;

    srand(time(NULL));
    f=rand();

    cout<<"Dodatkowa wylosowana liczba to: "<<f<<endl<<endl;
    cout<<"Wartosci "<<w<<" zostal przydzielony adres: "<<wsk<<endl;
    cout<<"Wartosci "<<v<<" zostal przydzielony adres: "<<wska<<endl;
    cout<<"Wartosci losowej "<<f<<" zostal przydzielony adres: "<<ws<<" ->"<<endl<<endl;
    cout<<"Zawartosc "<<wsk<< " to: "<<*wsk<<endl;
    cout<<"Zawartosc "<<wska<< " to: "<<*wska<<endl;
    cout<<"Zawartosc "<<ws<< " to: "<<*ws<<endl<<endl;
    cout<<"Wartosci "<<wsk<<" zostal przydzielony adres: "<<&wsk<<endl;
    cout<<"Wartosci "<<wska<<" zostal przydzielony adres: "<<&wska<<endl;
    cout<<"Wartosci "<<ws<<" zostal przydzielony adres: "<<&ws<<endl<<endl;
    cout<<"Wartosci "<<v<<" odpowiada teraz wartosc losowa: "<<*ws<<"   ( ="<<f<<")"<<endl<<endl;
    cout<<"Wartosci "<<w<<" odpowiada teraz: "<<wska<<"   ( ="<<&v<<")"<<endl<<endl;
    *ws=a;

    cout<<"<-Wartosc "<<f<<" zostala podstawiona pod zawartosc adresu wartosci losowej: "<<ws<<endl;
    cout<<"   ->"<<"wiec pod adres: "<<ws<<" przypisano: "<<*ws<<endl;
    cout<<"   ->"<<"adres adresu "<<&f<<" to: "<<&ws<<endl<<endl;

    return 0;
}
