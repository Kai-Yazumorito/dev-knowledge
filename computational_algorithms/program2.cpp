#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;
int main(){
  //  printf("\nHola mundo\n");
  int i=0, j=0, k=0;
  int n=10;
  int arreglo[10]={0};
  cout<<"\nTeclee 10 numeros separados por un espacio\n";
  for(i=0; i<n; i++){
      cin>>arreglo [i];
   //   cout<<"\nContenido de n= "<<n;
  }
  cout<<"\nLos datos guardados son: \n";
  for(i=0; i<n; i++){
    cout<<arreglo [i]<<" ";
  }
    system("pause");
    }
