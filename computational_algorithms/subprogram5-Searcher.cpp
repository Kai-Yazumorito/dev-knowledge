#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;

//  Variables globales
    int i=0, j=0, k=0;
    int n=10;
    int arreglo[10]={0};
    int bencontro=0;
    int numero=0;

//  Prototipos
    void captura();
    void impresion();

    void busquedaSec() {
        cout<<"\nTeclee un numero a buscar: ";
            cin>>numero;

                for (i=0;i<n;i++) {
                    if (numero==arreglo[i]) {
                        cout<<"\n El numero "<<numero<<" se encontro en la localidad "<<i<<".";
                        //      Si es para programadores, dejalo como i. Si es para usuario, sumale 1.
                            bencontro=1;
                    }
                }
        if (bencontro==1) {
            cout<<"\nNo se encotro el numero "<<numero<<".";
        }
    }

    int main() {
        captura();
        impresion();
        busquedaSec();
        system("pause");
    }


//  Captura de datos
    void captura() {
        cout<<"\nTeclee 10 numeros separados por un esacio \n";
        for (i=0; i<n;i++){
            cin>>arreglo [i];
        }
    }

//  Impresion de datos
    void impresion() {
        cout<<"\nLos datos guardados son: \n";
        for(i=0; i<n; i++){
            cout<<arreglo [i]<<" ";
        }
    }