#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;


//  Global variables
int aux=0;
int i=0;
int j=0;
int k=0;
int n=5;
int number=0;
int option=0;
int hufflepuff[5]={0};


//  Flags
int bfind=0;
int bdata=0;


//  Prototypes
void capture();
void printer();
void finder();
void bubblem2M();
void bubbleM2m();
int menu();


//  Data searcher
void finder() {
    cout<<"\nWriter de number you want to search: ";
    cin>>number;
    for(i=0;i<n;i++) {
        if(number==hufflepuff[i]) {
            cout<<"\nThe character "<<number<<" was find on the space "<<i<<".";
            // If is for developers you can let it like i but if is for users you need to add +1.
            bfind=1;
        }
    }
    if (bfind==0) {
        cout<<"\nThe number was not find."<<number<<".";
    }
    // return (0);
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
    //cout<<"i value is: "<<i<<endl;
    printer();
    //return (0);
    cout<<"\nThe data was ordered from minor to Major.\n"<<endl;;
}


//  Data organicer: Major 2 minor
void bubbleM2m() {
    for (i=0;i<n;i++) {
        for (j=0;j<n;j++) {
            if(hufflepuff[i]>hufflepuff[j]) {
                aux=hufflepuff[i];
                hufflepuff[i]=hufflepuff[j];
                hufflepuff[j]=aux;
            }
        }
    }
    //cout<<"i value is: "<<i<<endl;
    printer();
    //return (0);
    cout<<"\nThe data was ordered from Major to minor.\n"<<endl;
}


//  Main function
int main() {
    setlocale(LC_ALL, "spanish");
    capture();
    printer();
    // system("pause");
    menu();
    switch(option) {
        case (1):
            finder();
        break;
        case(2):
            bubblem2M();
        break;
        case(3):
            bubbleM2m();
        break;
        default:
            cout<<"Invalid option.\n";
        break;
    }
    cout<<endl;
    system("pause");
    return (0);
}


//  Menu function
int menu() {
    // system("cls");
    cout<<"\nMenu"<<endl;
    cout<<"1 - Secuence finder"<<endl;
    cout<<"2 - Bubble order: minor 2 Major"<<endl;
    cout<<"3 - Bubble order: Major 2 minor"<<endl;
    cout<<"Write the number of the option that u prefer.\n";
    cin>>option;
    cout<<"The selected option is: "<<option<<endl;
    return (0);
}


//  Data capturer
void capture() {
    cout<<"\nWrite "<<n<<" numbers separated by spaces.\n";
    for (i=0;i<n;i++) {
    cin>>hufflepuff[i];
    }
}


//  Data printer
void printer() {
    cout<<"\nThe data is: \n";
    for (k=0;k<n;k++) {
        cout<<hufflepuff[k]<<" ";
    }
    cout<<endl;
}