// Instruciones: REALIZA UN CÓDIGO EN C++
// DONDE PUEDAS CREAR UNA CALCULADORA ARITMÉTICA
// BÁSICA (SUMA, RESTA, MULTIPLICACIÓN Y DIVISIÓN),
// DONDE CREES UNA FUNCIÓN PARA CADA UNA DE LAS OPERACIONES.

#include <iostream>
using namespace std;


// Main function
int main() {
    // Variables
    int i=0;   // Counter variable (sum)
    int j=1;   // Counter variable (substract)
    int k=0;   // Counter variable (multiply)
    int l=0;   // Counter variable (divide)
    int n=0;   // Array size
    int option=0;   // User option
    int sum=0;   // Sum of the array elements
    int minus=0;   // Substraction of the array elements
    int mult=0;   // Multiplication of the array elements
    int div=0;   // Division of the array elements
    int mod=0;   // Modulus of the array elements
    int cycle=0;


    // Array declaration
    int gryffindor[n]={};

    // Instruccion for the user. u can change it if u want.
    cout<<"This is gonna be a basci calculator program."<<endl;
    cout<<"-Advertations-"<<endl;
    cout<<"-The program is working with only integers."<<endl;
    // cout<<"-The program is going to start counting from 0."<<endl;
    cout<<"-If u wanna set only one number, type 0"<<endl;
    

    // Loop to ask the operation.
    for (cycle=0;cycle==0; ) {
        cout<<"Welcome to the Menu!"<<endl;
        cout<<"Select 1 - Sum operation"<<endl;
        cout<<"Select 2 - Substraction"<<endl;
        cout<<"Select 3 - Multiplication operation"<<endl;
        cout<<"Select 4 - Division operation"<<endl;
        cout<<"Select the operation you want to do: "<<endl;
        cin>>option;

        
        switch(option) {
            // Sum operation
            case (1):
            cout<<"You selected the sum operation."<<endl;
            cout<<"Type the ammount of numbers you want to sum: ";
            cin>>n;
            cout<<"OK, I've register the number of elements you want to sum."<<endl;
            cout<<"Now, type the numbers you want to sum."<<endl;
            // Loop to ask and register the numbers.
            for (i=0;i<n;i++) {
                cout<<"Type the number "<<(i+1)<<": ";
                cin>>gryffindor[i];
            }
            cout<<"I'm going to sum the numbers you typed."<<endl;
            // Loop to sum the numbers.
            for (i=0;i<n;i++) {
                cout<<gryffindor[i]<<"+";
                sum=sum+gryffindor[i];
            }
            cout<<"= "<<sum<<endl;
            cout<<"Do you want to do another operation? (0=Yes, 1=No): ";
            cin>>cycle;
            break;

            // Substraction operation
            case (2):
            cout<<"You selected the substraction operation."<<endl;
            cout<<"Type the ammount of numbers you want to substract: ";
            cin>>n;
            cout<<"OK, I've register the number of elements you want to substract."<<endl;
            cout<<"Now, type the numbers you want to substract."<<endl;
            for (i=0;i=n;i++) {
                cout<<"Type the number "<<(i+1)<<": ";
                cin>>gryffindor[i];
            }
            cout<<"I'm going to substract the numbers you typed."<<endl;
            for (i=0;i=n;i++) {
                cout<<gryffindor[i]<<"-";
                minus=minus-gryffindor[i];
            }
            cout<<"= "<<minus<<endl;
            cout<<"Do you want to do another operation? (0=Yes, 1=No): ";
            cin>>cycle;
            break;

            // Multiply operation
            case (3):
            cout<<"You selected the multiplication operation."<<endl;
            cout<<"Type the ammount of numbers you want to multiply: ";
            cin>>n;
            cout<<"OK, I've register the number of elements you want to multiply."<<endl;
            cout<<"Now, type the numbers you want to multiply."<<endl;

            for (k=0;k<n;k++) {
                cout<<"Type the number "<<(k+1)<<": ";
                cin>>gryffindor[k];
            }
            cout<<"I'm going to multiply the numbers you typed."<<endl;
            for (k=0;k<n;k++) {
                cout<<gryffindor[k]<<"*";
                if (k==0&&mult!=0) {
                    mult=gryffindor[0]*gryffindor[k];
                }else{
                    mult=mult*gryffindor[k];
                }
            }
            cout<<"= "<<mult<<endl;
            cout<<"Do you want to do another operation? (0=Yes, 1=No): ";
            cin>>cycle;

            // Data Check
//            for (k=0;k<n;k++) {
//                cout<<"The register number on"<<gryffindor[k]<<"is: "<<endl;
//                cout<<gryffindor[k]<<" ";
//            }
            // This only for verify a bug in the code, it can be erased.
            break;

            // Division operation
            case (4):
            cout<<"You selected the division operation."<<endl;
            cout<<"Type the ammount of numbers you want to divide: ";
            cin>>n;
            cout<<"OK, I've register the number of elements you want to divide."<<endl;
            cout<<"Now, type the numbers you want to divide."<<endl;
            for (l=0;l<n;l++) {
                cout<<"Type the number "<<(l+1)<<": ";
                cin>>gryffindor[l];
            }
            cout<<"I'm going to divide the numbers you typed."<<endl;
            for (l=0;l<n;l++) {
                cout<<gryffindor[l]<<"/";
                if (l==0&&div!=0) {
                    div=gryffindor[0]/gryffindor[l];
                }else{
                    div=div/gryffindor[l];
                }
            }
            cout<<"= "<<div<<endl;
            cout<<"Do you want to do another operation? (0=Yes, 1=No): ";
            cin>>cycle;
            break;
            default:
            cout<<"Invalid option. Please, select a valid option."<<endl;
            break;
        }
    }
}