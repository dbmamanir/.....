#include <iostream>
using namespace std;

struct fecha{
    string nombre;
    int dia;
    int mes;
    int anio;
};

int main (){
    int n;
    cout<<"ingrese la cantidad de personas:";
    cin>>n;
    fecha naci[n];
    for (int i=0; i<n; i++){
        cout<<"ingrese nombre:";
        cin>>naci[i].nombre;
        cout<<"Ingrese dia de nacimiento:";
        cin>>naci[i].dia;
        cout<<"Ingrese mes de nacimiento (en numero):";
        cin>>naci[i].mes;
        cout<<"Ingrese anio de nacimiento:";
        cin>>naci[i].anio;
    }
    int m;
    do{
        cout<<"ingrese 0 para terminar el programa.\n";
        cout<<"Ingrese un numero de mes:";
        cin>>m;
        for (int i=0; i<n; i++){
            if (naci[i].mes==m){
                cout<<"Nombre:"<<naci[i].nombre<<endl;
                cout<<"Fecha de nacimiento:"<<naci[i].dia<<"/"<<naci[i].mes<<"/"<<naci[i].anio<<endl;
            }
            else{
                cout<<"No hay ninguna fecha regisrtada con ese mes.";
            }
        }
    }while(m!=0);
    return 0;
}