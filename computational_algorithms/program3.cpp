#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;

  //  printf("\nHola mundo\n");
  
  // Variables globales
  int i=0, j=0, k=0;
  int n=10;
  int arreglo[10]={0};

  //Captura de datos
  void captura(){
  cout<<"\nTeclee 10 numeros separados por un esacio \n";
  for (i=0; i<n;i++){
    cin>>arreglo [i];
  }
  }
  //Impresion de datos
  void impresion(){
  	cout<<"\nLos datos guardados son: \n";
  for(i=0; i<n; i++){
    cout<<arreglo [i]<<" ";
  }
  }
  
  int main(){
  	captura();
  	impresion();
    system("pause");
    }

