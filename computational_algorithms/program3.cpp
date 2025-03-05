#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;


  //  printf("\nHola mundo\n");
  

  // Global variables
  int i=0, j=0, k=0;
  int n=10;
  int hufflepuff[10]={0};


  //  Data capture
  void capture() {
  cout<<"\nWrite 10 numbers separated with a space.\n";
  for (i=0; i<n;i++) {
    cin>>hufflepuff[i];
  }
  }

  
  //  Data print
  void print(){
  	cout<<"\nThe saved data is: \n";
  for(i=0; i<n; i++) {
    cout<<hufflepuff[i]<<" ";
  }
  }
  
  int main(){
  	capture();
  	print();
    system("pause");
    }

