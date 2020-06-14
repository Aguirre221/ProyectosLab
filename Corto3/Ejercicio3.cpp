#include <iostream>
using namespace std;
int main(void)
{
    int anio;
    cout<<endl;
    cout<<"Programa que indica si es a"<<char(-92)<<"o bisiesto o no"<<endl;
    cout<<"Por favor ingrese el a"<<char(-92)<<"o: ";
    cin>>anio;
    if(anio % 4 !=0) cout<<"el a"<<char(-92)<<"o no es bisiesto";
    else if (anio % 100 !=0)cout<<"el a"<<char(-92)<<"o si es bisiesto";
    else if (anio % 400 !=0)cout<<"el a"<<char(-92)<<"o no es bisiesto";
    else cout << "El a"<<char(-92)<<"o si es bisiesto";
    return 0;
}