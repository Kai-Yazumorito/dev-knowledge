#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;


//Global Variables
int i=0, j=0, k=0;
int n=5;
int aux=0;
int option;
int number=0;
int hufflepuff[5]={0};
char rep;


//Banderas
int bfinder=0;
int bdata=0;


//Prototipos
 int menu();
 int capture();  
 int printer();
 int SecSearcher();
 int BubbleM2m();
 int Bubblem2M();


//Data Capture
     int capture(){
         cout<<"\nTeclee 5 numeros separados por un espacio \n";
     for (i=0; i<n;i++){
     cin>>hufflepuff[i];
     }
   }
   
   
//Data Printer
     int printer(){
           cout<<"\nLos datos guardados son: \n";
     for(k=0; k<n; k++){
     cout<<hufflepuff[k]<<" ";
     }
 }


//Busqueda de dato por secuencia
 int SecSearcher(){
     cout<<"\nTeclee un caracteres a buscar\n";
     cin>>number;
     for(i=0;i<=n;i++){
         if(hufflepuff[i] == number){
             cout<<"\n El caracter "<<number<< " se encontro en la localidad: \n"<<i;
             bfinder==1;
             }
         }
         if(bfinder == 0){
             cout<<"\n No se encuentra el numero \n"<<number;			
     }
     return 0;
 }


//Data Sercher: Bubble Minor a Major
 int Bubblem2M(){
     for(i=0; i<n-1; i++){
         for (j=i+1;j<n;j++){
             if (hufflepuff[i] > hufflepuff[j]){
                 aux=hufflepuff[i];
                 hufflepuff[i]=hufflepuff[j];
                 hufflepuff[j]=aux;
             }
         }
     }
     printer();
     return(0);
 }


//Data Sercher: Bubble Major to Minor
  int BubbleM2m(){
     for(i=0; i<n-1; i++){
         for (j=i+1;j<n;j++){
             if (hufflepuff[i] < hufflepuff[j]){
                 aux=hufflepuff[i];
                 hufflepuff[i]=hufflepuff[j];
                 hufflepuff[j]=aux;
             }
         }
     }
     printer();
     return(0);
 }
 

//Principal Function
 int main(){
    setlocale (LC_ALL, "spanish");
    for(cycle=0;cycle==0; ) {
        menu();
        switch(option) {
            case (1):
                capture();
            break;
            case(2):
                Bubblem2M();
            break;
            case(4):
                BubbleM2m();
            break;
        }
    }
 
 int menu(){
 system ("cls");	
 cout<<"\nMenu";
 cout<<"\n1 Busqueda secuenial";
 cout<<"\n2 Ordenamiento Burbuja Menor Mayor";
 cout<<"\n3 Ordenamiento Burbuja Mayor Menor";
 cout<<"\n4 Salir";
 cout<<"\nTeclee el numero de la opcion deseada";
 cin>>opcion;
 return opcion;
}