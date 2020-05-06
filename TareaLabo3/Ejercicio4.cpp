#include <iostream>
using namespace std;
int main(){
    string name;
    float precio, canti;
    float promedio;
    cout<<"Ingrese el nombre del producto: "<<endl;
    cin>>name;
    cout<<"Ingrese el precio unitario: "<<endl;
    cin>>precio;
    cout<<"Ingrese la cantidad: "<<endl;
    cin>>canti;
    float total = precio*canti;
    cout<<"Usted a comprado "<<canti<<" de "<<name<<" su total es de "<<total;
    return 0;
}