#include <iostream>
using namespace std;

int main (){
    int n;
    cout<<"Ingrese la dimension de la matriz:";
    cin>>n;
    for (int i=0; i<n; i++){
        for (int j=0; j<3*n; j++){
            if (i==0||i==n-1||j==0||j==3*n-1){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    return 0;
}