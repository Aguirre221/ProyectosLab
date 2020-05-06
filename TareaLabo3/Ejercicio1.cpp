#include <iostream>
using namespace std;
int main(){
float nota1, nota2, nota3;
    float promedio;
    cout<<"Ingrese la primera nota: "<<endl;
    cin>>nota1;
    cout<<"Ingrese la segunda nota: "<<endl;
    cin>>nota2;
    cout<<"Ingrese la tercera nota: "<<endl;
    cin>>nota3;
    promedio = (nota1+nota2+nota3)/3;
    cout<<"Su promedio es: "<<promedio;
    return 0;
}