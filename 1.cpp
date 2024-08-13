#include <iostream>
using namespace std;

int saldo=0;

void depositar(){
    saldo = saldo + 100;
    cout<<"Se deposito 100"<<endl;
}

void retirar(){
    saldo = saldo - 100;
    cout<<"Se retiro 100"<<endl;
}

void mostrar (){
    cout<<"El saldo actual es "<<saldo<<endl;
}

void menu(){
    int op=0;
    do{
        system ("cls");
        cout<<" Menu de opciones"<<endl;
        cout<<"1. Depositar 100"<<endl;
        cout<<"2. Retirar 100"<<endl;
        cout<<"3. Mostrar saldo"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion:";
        cin>>op;
        switch (op){
            case 1:{
                depositar();
                system ("pause");
                break;
            }
            case 2:{
                retirar();
                system ("pause");
                break;
            }
            case 3:{
                mostrar();
                system ("pause");
                break;
            }
            case 0:{
                cout<<"Saliendo...";
                break;
            }
        }
    }while (op!=0);
}

int main (){
    menu();
    return 0;
}
