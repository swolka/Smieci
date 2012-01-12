#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int i, k;
    int j=0,v=0;
    char z;
    string w;
    cout << "wpisz ile ma byc znakow, ktore wpiszesz:";
    cin>>i;
    cout<<endl<<"wpiszesz teraz "<<i<<" znakow:"<<endl;

    for(k=0; k<i; k++)


    {

        cin>>z;

        if(z>='0' && z<='9')j++;
        if(z>='a' && z<='z')v++;


        if(k+1==1) w="wszy";
        else if(k+1==2) w="gi";
        else if(k+1==3) w="ci";
        else if(k+1==7 || k+1==8) w="my";
        else w="ty";

        cout<<"   "<<k+1<<w<<" to: "<<z<<endl<<endl;
    }

    cout<<"czy byly jakies cyfry? "<<"-Bylo "<<j<<"."<<endl;
    cout<<"czy byly jakies litery? "<<"-Bylo "<<v<<"."<<endl;




    return 0;
}
