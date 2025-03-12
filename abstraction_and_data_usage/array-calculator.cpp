// Instruciones: REALIZA UN CÓDIGO EN C++
// DONDE PUEDAS CREAR UNA CALCULADORA ARITMÉTICA
// BÁSICA (SUMA, RESTA, MULTIPLICACIÓN Y DIVISIÓN),
// DONDE CREES UNA FUNCIÓN PARA CADA UNA DE LAS OPERACIONES.

#include <iostream>
using namespace std;


// Main function
int main() {

    // Variables
        // Counters
        int i=0;   // Counter variable (sum)
        int j=0;   // Counter variable (substract)
        int k=0;   // Counter variable (multiply)
        int l=1;   // Counter variable (divide)
        //Operations
        int sum=0;   // Sum of the array elements
        int minus=0;   // Substraction of the array elements
        int mult=0;   // Multiplication of the array elements
        int div=0;   // Division of the array elements
        // Others
        int cycle;  // Selector
        int n=0;   // Array size
        int option=0;   // User option

    
    // Array declaration
    int gryffindor[n]={};


    // Instruccion for the user. u can change it if u want.
    cout<<"This is gonna be a basci calculator program."<<endl;
    cout<<"-Advertations-"<<endl;
    cout<<"-The program is working with only integers."<<endl;
    // cout<<"-The program is going to start counting from 0."<<endl;
    cout<<"-If u wanna set only one number, type 0"<<endl;
    

    // Loop to ask the operation.
    for (cycle=1;cycle==1; ) {
        n=0;
        cout<<"Welcome to the Menu!"<<endl;
        cout<<"Select 1 - Sum operation"<<endl;
        cout<<"Select 2 - Substraction"<<endl;
        cout<<"Select 3 - Multiplication operation"<<endl;
        cout<<"Select 4 - Division operation"<<endl;
        cout<<"Select the operation you want to do: "<<endl;
        cin>>option;

        // Menu Selector
        switch(option) {


            // Sum operation
            case (1):
            cout<<"You selected the sum operation."<<endl;
            cout<<"Type the ammount of numbers you want to sum: ";
            cin>>n;
            cout<<"OK, I've register the number of elements you want to sum."<<endl;
            cout<<"Now, type the numbers you want to sum."<<endl;
            // Register Loop.
            for (i=0;i<n;i++) {
                cout<<"Type the number "<<(i+1)<<": ";
                cin>>gryffindor[i];
            }
            cout<<"I'm going to sum the numbers you typed."<<endl;
            sum=gryffindor[0];
            cout<<gryffindor[0]<<"+";
            // Operation Loop.
            for (i=1;i<n;i++) {
                cout<<gryffindor[i]<<"+";
                sum+=gryffindor[i];
            }
            cout<<"= "<<sum<<endl;
            cout<<"Do you want to do another operation? (1=Yes, 0=No): ";
            cin>>cycle;
            break;


            // Substraction operation
            case (2):
            cout<<"You selected the substraction operation."<<endl;
            cout<<"Type the ammount of numbers you want to substract: ";
            cin>>n;
            cout<<"OK, I've register the number of elements you want to substract."<<endl;
            cout<<"Now, type the numbers you want to substract."<<endl;
            // Register Loop.
            for (j=0;j<n;j++) {
                cout<<"Type the number "<<(j+1)<<": ";
                cin>>gryffindor[j];
            }
            cout<<"I'm going to substract the numbers you typed."<<endl;
            minus=gryffindor[0];
            // Operation Loop.
            for (j=0;j<n;j++) {
                cout<<gryffindor[j]<<"-";
                minus-=gryffindor[j];
            }
            cout<<"= "<<minus<<endl;
            cout<<"Do you want to do another operation? (1=Yes, 0=No): ";
            cin>>cycle;
            break;


            // Multiply operation
            case (3):
            cout<<"You selected the multiplication operation."<<endl;
            cout<<"Type the ammount of numbers you want to multiply: ";
            cin>>n;
            cout<<"OK, I've register the number of elements you want to multiply."<<endl;
            cout<<"Now, type the numbers you want to multiply."<<endl;
            // Register Loop.
            for (k=0;k<n;k++) {
                cout<<"Type the number "<<(k+1)<<": ";
                cin>>gryffindor[k];
            }
            cout<<"I'm going to multiply the numbers you typed."<<endl;
            mult=gryffindor[0];
            cout<<gryffindor[0]<<"*";
            // Operation Loop.
            for (k=1;k<n;k++) {
                if (gryffindor[k]==0) {
                    cout<<"Error: Multiplication by 0 is not allowed."<<endl;
                    break;
                } else if(k<n-1) {
                    cout<<gryffindor[k]<<"*";
                    break;
                } else {
                    cout<<gryffindor[k];
                }
                mult*=gryffindor[k];
            }
            cout<<"= "<<mult<<endl;
            cout<<"Do you want to do another operation? (1=Yes, 0=No): ";
            cin>>cycle;
            break;


            // Division operation
            case (4):
            cout<<"You selected the division operation."<<endl;
            cout<<"Type the ammount of numbers you want to divide: ";
            cin>>n;
            cout<<"OK, I've register the number of elements you want to divide."<<endl;
            cout<<"Now, type the numbers you want to divide."<<endl;
            // Register Loop.
            for (l=0;l<n;l++) {
                cout<<"Type the number "<<(l+1)<<": ";
                cin>>gryffindor[l];
            }
            cout<<"I'm going to divide the numbers you typed."<<endl;
            div=gryffindor[0];
            cout<<gryffindor[0]<<"/";
            // Operation Loop.
            for (l=1;l<n;l++) {
                if (gryffindor[l]==0) {
                    cout<<"Error: Division by 0 is not allowed."<<endl;
                    break;
                } else if(l<n-1) {
                    cout<<gryffindor[l]<<"/";
                } else {
                    cout<<gryffindor[l];
                }
                div/=gryffindor[l];
            }
            cout<<"= "<<div<<endl;
            cout<<"Do you want to do another operation? (1=Yes, 0=No): ";
            cin>>cycle;
            break;


            default:
            cout<<"Invalid option. Please, select a valid option."<<endl;
            break;
        }
    }
}