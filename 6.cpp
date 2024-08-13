#include <iostream>
using namespace std;
struct persona{
    string nombre;
    string dni;
    int edad;
};

int main (){
    int n;
    cout<<"ingrese el numero de personas:";
    cin>>n;
    persona per[n];
    for (int i=0; i<n; i++){
        cout<<"Ingrese el nombre:";
        cin>>per[i].nombre;
        cout<<"Ingrese DNI:";
        cin>>per[i].dni;
        cout<<"Ingrese edad:";
        cin>>per[i].edad;
    }
    for (int i=0; i<n; i++){
        cout<<"Datos de la persona "<<i+1<<endl;
        cout<<"Nombre:"<<per[i].nombre<<endl;
        cout<<"DNI:"<<per[i].dni<<endl;
        cout<<"Edad:"<<per[i].edad<<endl;
    }
    cout<<"\t Registro de personas mayores de 50 años\n";
    for (int i=0; i<n; i++){
        if (per[i].edad>=50){
            cout<<"nombre:"<<per[i].nombre<<endl;
            cout<<"edad:"<<per[i].edad<<endl;
        }
    }
    int s=0;
    int prom;
    for (int i=0; i<n; i++){
        s = s + per[i].edad;
    }
    prom = s / n;
    cout<<"El promedio de edades es:"<<prom<<endl;
    return 0;
}