#include <iostream>
using namespace std;
struct emp{
    string nombre;
    string genero;
    int sueldo;
};
int main (){
    int n;
    cout<<"Ingrese el numero de empleados:";
    cin>>n;
    emp empleado[n];
    for (int i=0; i<n; i++){
        cin.ignore();
        cout<<"ingrese el nombre:";
        getline(cin, empleado[i].nombre);
        cout<<"ingrese el genero (F/M):";
        cin>>empleado[i].genero;
        cout<<"ingrese sueldo:";
        cin>>empleado[i].sueldo;
    }
    for(int i=0; i<n; i++){
        cout<<"DATOS DEL EMPLEADO "<<i+1<<endl;
        cout<<"Nombre:"<<empleado[i].nombre<<endl;
        cout<<"Genero:"<<empleado[i].genero<<endl;
        cout<<"Sueldo:"<<empleado[i].sueldo<<endl;
    }

    for ()
    return 0;
}
