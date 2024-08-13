#include <iostream>
using namespace std;
int main (){
    int n;
    cout<<"Ingrese el valor de la matriz:";
    cin>>n;
    int matriz[n][n];
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<"ingrese el valor:";
            cin>>matriz[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout<<matriz[i][j];
        }
        cout<<endl;
    }
    int s=0;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i<j){
                s=s+matriz[i][j];
            }
        }
    }
    cout<<"la sumatoria es:"<<s<<endl;
    return 0;
}