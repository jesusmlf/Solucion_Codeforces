#include <string>
#include <iostream>

using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    //cout<<"Ingrese la primera cadena: ";
    //cin>>a;
    //cout<<"Ingrese la segunda cadena: ";
    //cin>>b;

    int len_a = a.size(); 
    //Solo necesitamos el tamaño de una cadena, ambas son del mismo tamaño.

    //Primero covertiremos todas las letras de las cadenas en mayusculas:
    for(int i=0;i<len_a;i++){
        if(a[i] >= 97){
            a[i] = a[i] - 32;
        }
        if(b[i] >= 97){
            b[i] = b[i] - 32;
        }
    }
    if (a<b){
        cout<<-1;
    }
    else if (b<a){
        cout<<1;
    }
    else if (a == b){
        cout<<0;
    }

}
