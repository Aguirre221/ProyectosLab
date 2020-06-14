#include <iostream>
using namespace std;
int main()
{
    int numero = 55;
    int usuario;
    cout<<"¡ADIVINA EL NUMERO!"<<endl<<"Ingresa un numero del 1 al 100, tienes 5 intentos"<<endl;
    cin>>usuario;
    if (numero==usuario)
    {
        cout<<"¡ES CORRECTO!";
    }else if (usuario>numero)
    {
        cout<<"¡ES UN NUMERO MENOR! Ingresa uno nuevo, tienes 4 intentos"<<endl;
        cin>>usuario;
    }else if (usuario<numero)
    {
        cout<<"¡ES UN NUMERO MAYOR! Ingresa uno nuevo, tienes 4 intentos"<<endl;
        cin>>usuario;
    }else if (numero==usuario)
    {
        cout<<"¡ES CORRECTO!";
    }else if (usuario>numero)
    {
        cout<<"¡ES UN NUMERO MENOR! Ingresa uno nuevo, tienes 3 intentos"<<endl;
        cin>>usuario;
    }else if (usuario<numero)
    {
        cout<<"¡ES UN NUMERO MAYOR! Ingresa uno nuevo, tienes 3 intentos"<<endl;
        cin>>usuario;
    }else if (numero==usuario)
    {
        cout<<"¡ES CORRECTO!";
    }else if (usuario>numero)
    {
        cout<<"¡ES UN NUMERO MENOR! Ingresa uno nuevo, tienes 2 intentos"<<endl;
        cin>>usuario;
    }else if (usuario<numero)
    {
        cout<<"¡ES UN NUMERO MAYOR! Ingresa uno nuevo, tienes 2 intentos"<<endl;
        cin>>usuario;
    }else if (numero==usuario)
    {
        cout<<"¡ES CORRECTO!";
    }else if (usuario>numero)
    {
        cout<<"¡ES UN NUMERO MENOR! Ingresa uno nuevo, tienes 1 intentos"<<endl;
        cin>>usuario;
    }else if (usuario<numero)
    {
        cout<<"¡ES UN NUMERO MAYOR! Ingresa uno nuevo, tienes 1 intentos"<<endl;
        cin>>usuario;
    }
   cout<<"¡ES CORRECTO!"<<endl;
return 0;
}