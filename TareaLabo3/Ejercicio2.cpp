#include <iostream>
#define PI 3.1415
using namespace std;
int main(){
float nota1, nota2, nota3;
    float radio;
    cout<<"Ingrese el radio del circulo: "<<endl;
    cin>>radio;
    float perimetro = PI * (2 *radio); 
    float diametro = 2 *radio; 
    float area = PI * (radio*radio); 
    cout<<"El perimetro es: "<<perimetro<<endl;
    cout<<"El diametro es: "<<diametro<<endl;
    cout<<"El area es: "<<area<<endl;
    return 0;
}