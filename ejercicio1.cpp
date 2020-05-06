#include <iostream>
using namespace std;

int main(){
    int dolares;
    float euros = 1.33;
    float convercion;
    cout<<"ingrese la cantidad de dolares a convertir";
    cin>>dolares;
    convercion = dolares*euros;
    cout<<convercion;
    return 0;
}