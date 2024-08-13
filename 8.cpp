#include <iostream>
using namespace std;

struct atleta{
    string nombre;
    string pais;
    string disciplina;
    int medalla;
};
int main (){
    int n;
    cout<<"Ingrese numero de atletas:";
    cin>>n;
    atleta deportista[n];
    for (int i=0; i<n; i++){
        cin.ignore();
        cout<<"ingrese nombre:";
        getline (cin, deportista[i].nombre);
        cout<<"ingrese pais:";
        cin>>deportista[i].pais;
        cout<<"ingrese disciplina:";
        cin>>deportista[i].disciplina;
        cout<<"ingrese numero de medallas:";
        cin>>deportista[i].medalla;
    }

    string m;
    cout<<"ingrese un pais:";
    cin.ignore();
    getline(cin, m);
    int mayor=-1;
    string deportistamayor="";
    bool atletaencontrado = false;
    for (int i=0; i<n; i++){
        if (deportista[i].pais==m){
            atletaencontrado = true;
            cout<<"Nombre:"<<deportista[i].nombre<<endl;
            if (deportista[i].medalla>mayor){
            mayor=deportista[i].medalla;
            deportistamayor=deportista[i].nombre;
        }
        }
    }
    if (atletaencontrado){
    cout<<"El deportista con mayor medallas de "<<m<<" es"<<deportistamayor<<endl;
    } else {
        cout<<"no se encontro atletas registrados en este pais.";
    }
    return 0;
}