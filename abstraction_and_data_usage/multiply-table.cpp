#include<iostream>

using namespace std;


// Main function
int main() {
    cout<<"The program made a multiply table."<<endl;
    cout<<"Type the number you want to multiply: ";
    int value;
    cin>>value;
    cout<<"\n";

    for(int i=1; i<=10; i++) {
        int multiply;
        multiply=value*i;
        cout<<i<<" x "<<value<<" = "<<multiply<<"\n";
    }
}