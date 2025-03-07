#include<iostream>
using namespace std;


// Main function
int main() {
    // Array declaration
    int ravenclaw[3][3];    // Dimention of the array


    // Variables
    int i=0;
    int j=0;


    // Instruccion for the user. u can change it if u want.
    cout<<"For this program, you need to type the numbers but when u finish typing the number you wanna type, press enter."<<endl;

    
    // Loop to fill the array
    for(i=0;i<3;i++) {
        for(j=0;j<3;j++) {
            cout<<"Type a number: ";
            cin>>ravenclaw[i][j];
        }
    }


    for(i=2;i>=0;i--) {
        for(j=2;j>=0;j--) {
            if(j==0) {
                cout<<ravenclaw[i][j];
            } else {
                cout<<ravenclaw[i][j]<<" - ";
            }
        }
        cout<<endl;
    }
    return 0;
}