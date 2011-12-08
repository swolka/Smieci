#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
srand(time(NULL));



int *miejsce;
int f[11];

    cout<<"Tablica dla 10 wyrazow: "<<endl;
     for(int i=0; i<10; i++)
    {
        f[0]=rand();
        miejsce=&f[0];
        cout<<"  "<<i+1<<" wyraz to: "<<f[i]<<endl;
        cout<<"       Adres "<<f[i]<<" : "<<miejsce<<endl;
        miejsce= new int;
    }

    return 0;
}
