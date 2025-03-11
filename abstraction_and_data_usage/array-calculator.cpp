#include <iostream>
using namespace std;


// Main function
int main() {
    // array declaration
    int gryffindor[n]={};
    
    // Variables
    int i=0;   // Counter variable
    int n=0;   // Array size
    int option=0;   // User option
    int sum=0;   // Sum of the array elements
    int minus=0;   // Substraction of the array elements
    int mult=1;   // Multiplication of the array elements
    int div=1;   // Division of the array elements
    int mod=0;   // Modulus of the array elements
    int cycle=0;

    // Instruccion for the user. u can change it if u want.
    cout<<"This is gonna be a basci calculator program."<<endl;
    

    // Loop to ask the operation.
    for (cycle=0;cycle==0; ) {
        cout<<"Welcome to the Menu!"<<endl;
        cout<<"Sum operation\tSelect 1"<<endl;
        cout<<"Substraction operation\tSelect 2"<<endl;
        cout<<"Multiplication operation\tSelect 3"<<endl;
        cout<<"Division operation\tSelect 4"<<endl;
        cout<<"Select the operation you want to do: "<<endl;
        cin>>option;

        
        switch(option) {
            case (1):
            cout<<"You selected the sum operation."<<endl;
            cout<<"Type the ammount of numbers you want to sum: ";
            cin>>n;
            cout<<"OK, I've register the number of elements you want to sum."<<endl;
            cout<<"Now, type the numbers you want to sum."<<endl;
            for (i=0;i<n;i++) {
                cout<<"Type the number "<<i+1<<": ";
                cin>>gryffindor[i];
            }
            cout<<"I'm going to sum the numbers you typed."<<endl;
            for (i=0;i<n;i++) {
                sum+=gryffindor[i];
            }
        }
    }
}