#include<iostream>

using namespace std;


// Variable Declaration
int multiply;   // Variable to save the result of the operation.
int value;  // Variable to save the number the user type.


// Array Declaration
int hufflepuff[10][2];  // 2D array
int ravenclaw[10];  // Simple array


// Main function
int main() {
    cout<<"The program made a multiply table."<<endl;
    cout<<"Type the number you want to multiply: ";
    cin>>value;
    cout<<"\n";

    for(int i=1; i>=0; i--) {
        for(int j=0; j<10; j++) {
            multiply=value*(j+1);   // Multiply operation.
//            ravenclaw[i]=multiply;    // Simple array apply.
            switch(i) {
                case 0:
                    hufflepuff[j][i]=j+1;
                    cout<<hufflepuff[j][i]<<" ";
                break;
                case 1:
                    ravenclaw[j]=multiply;
                    hufflepuff[j][i]=multiply;
                    cout<<hufflepuff[j][i]<<" ";
                break;
            }
            cout<<"\n";
//            cout<<hufflepuff[j][i]<<" , ";    // Function verifier.
        }
        cout<<"\n";
//        cout<<ravenclaw[i]<<" , ";      // Function verifier.
    }

    for(int i=0; i<10; i++) {
//        cout<<i<<" x "<<value<<" = "<<ravenclaw[i-1]<<"\n";   // Simple array printer.
        for(int j=0; j<2; j++) {
            if(j==0) {
                cout<<value<<" x "<<hufflepuff[i][j]<<" = ";
            } else {
                cout<<hufflepuff[i][j]<<"\n";
//                cout<<ravenclaw[j]<<"\n";     // You can change it instead of the upper apply,
                                                // just preferences if with the 2D or Simple.
            }
        }
    }
    for(int i=0; i<10; i++) {
        for(int j=0; j<2; j++) {
            switch(j) {
                case 0:
                    cout<<value<<" x "<<hufflepuff[i][j]<<" = ";
                break;
                case 1:
//                cout<<hufflepuff[i][j]<<"\n";     // You can change it instead of the
                                                    // down apply, just preferences if
                                                    // with the 2D or Simple.
                cout<<ravenclaw[i]<<"\n";
                break;
            }
        }
    }
}