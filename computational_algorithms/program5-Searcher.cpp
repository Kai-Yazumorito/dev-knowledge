#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;


//  Global variables
    int i=0, j=0, k=0;
    int n=10;
    int hufflepuff[10]={0};
    int bfind=0;
    int number=0;


//  Prototypes
    void capture();
    void find();
    void searcher();


// Searcher
    void searcher() {
        cout<<"\nType the number to search: ";
            cin>>number;

                for (i=0;i<n;i++) {
                    if (number==hufflepuff[i]) {
                        cout<<"\nThe number "<<number<<" was find on the spot "<<i<<".";
                        //  If it's for developers, leave it as i. If it's for users, add 1.
                            bfind=1;
                    }
                }
        if (bfind==0) {
            cout<<"\nWas not find the number "<<number<<".";
        }
    }


//  Main function
    int main() {
        capture();
        printer();
        searcher();
        system("pause");
    }


//  Data capture
    void capture() {
        cout<<"\nType 10 numbers separated by a space: \n";
        for (i=0; i<n;i++){
            cin>>hufflepuff[i];
        }
    }


//  Data printer
    void printer() {
        cout<<"\nThe saved data is: \n";
        for(i=0; i<n; i++){
            cout<<hufflepuff[i]<<" ";
        }
    }