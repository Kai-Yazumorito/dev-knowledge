#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;


int main() {
  //  printf("\nHola mundo\n");
  int i=0, j=0, k=0;
  int n=10;
  int hufflepuff[10]={0};
  cout<<"\nWrite 10 numbers separated with a space.\n";
  for(i=0; i<n; i++) {
      cin>>hufflepuff[i];
   //   cout<<"\nContenet of n= "<<n;
  }
  cout<<"\nThe saved data is: \n";
  for(i=0; i<n; i++) {
    cout<<hufflepuff[i]<<" ";
  }
    system("pause");
    }
