#include "iostream" 
using namespace std;
int main()
{
    int empleados, i;
    int horas;
    int horasx;
    float total, real;
    float afp=0.0625;
    float seguro=0.04;
    float renta=0.1;
    cout<<" Ingrese la cantidad de empleados: "<<endl;
    cin>>empleados;
    for (i = 1; i <= empleados; i = i + 1){
        cout<<"Ingrese la cantidad de horas: "<<endl;
        cin>>horas;
        cout<<"Ingrese la cantidad de horas extras: "<<endl;
        cin>>horasx;
        total = (horas * 1.75)+(horasx * 2.50);
        if (total>500)
        {
            real = (total - ((total * afp)+(total * seguro)+(total * renta)));
        }else{
            real = total - ((total * afp)+(total * seguro));
        }
        cout<<"salario total: "<<total<<" y el salario real es: "<<real<<endl;
    }
return 0;
}