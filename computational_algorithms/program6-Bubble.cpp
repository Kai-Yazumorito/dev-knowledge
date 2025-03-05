#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;


//  Global variables
int i=0,j=0,k=0;
int n=5;
int aux=0;
int hufflepuff[5]={0};
int number=0;


//  Flags
int bfind=0;
int bdata=0;


//  Prototypes
void capture();
void printer();
void searcher();
void bubble();


//  Data searcher
void searcher() {
    cout<<"\nType the number to search: ";
    cin>>number;

    for (i=0;i<n;i++) {
        if (number==hufflepuff[i]) {
            cout<<"\nThe number "<<number<<" was finded in the spot "<<i<<".";
            // If is for developers you can let it like i but if is for users you need to add +1.
            bfind=1;
        }
    }
    if (bfind==0) {
        cout<<"\nWas not find the number "<<number<<".";
    }
    //return (0);
}


//  Data organicer: minor 2 Major
void bubblem2M() {
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (hufflepuff[i]<hufflepuff[j]) {
                aux=hufflepuff[i];
                hufflepuff[i]=hufflepuff[j];
                hufflepuff[j]=aux;
            }
        }
    }
    //cout<<"i content is: "<<i<<endl;
    printer();
    //return (0);
    cout<<"\nThe data was ordered from minor to Major.\n"<<endl;
}


//  Data organicer: Major 2 minor
void bubbleM2m() {
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if (hufflepuff[i]>hufflepuff[j]) {
                aux=hufflepuff[i];
                hufflepuff[i]=hufflepuff[j];
                hufflepuff[j]=aux;
            }
        }
    }
    //cout<<"i content is: "<<i<<endl;
    printer();
    //return (0);
    cout<<"\nThe data was orderd from Major to minor\n"<<endl;
}


//  Main function
int main() {
    capture();
    printer();
    // searcher();
    bubblem2M();
    bubbleM2m();
    system("pause");
}


//  Data capture
void capture() {
    cout<<"\nType 5 numbers separated wit a space.\n";
    for (i=0;i<n;i++){
        cin>>hufflepuff[i];
    }
}


//  Data printer
void printer() {
    cout<<"\nTHe saved data is: \n";
    for(k=0;k<n;k++){
        cout<<hufflepuff[k]<<" ";
    }
}