#include<iostream>

using namespace std;


// Variable Declaration
int multiply;   // Variable to save the result of the operation.
int value;  // Variable to save the number the user type.


// Array Declaration
int hufflepuff[10][2];
int ravenclaw[10];


// Main function
int main() {
    cout<<"The program made a multiply table."<<endl;
    cout<<"Type the number you want to multiply: ";
    cin>>value;
    cout<<"\n";

    for(int i=0; i<10; i++) {
        multiply=value*(i+1);   // Multiply operation.
        ravenclaw[i]=multiply;
//        cout<<ravenclaw[i]<<" , ";      // Function verifier.
    }

    for(int i=1; i<=10; i++) {
        cout<<i<<" x "<<value<<" = "<<ravenclaw[i-1]<<"\n";
    }
}