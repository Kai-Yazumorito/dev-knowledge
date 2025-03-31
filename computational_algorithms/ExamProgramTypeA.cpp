#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;


//Global Variables
int i=0, j=0, k=0;  // Counters
int cycle=0;    // Cycle
int n=5;
int aux=0;
int option;
int number=0;
int counter=0;
int cn=0;
int place=0;
int savecn=0;
int hufflepuff[1000]={0};
int numDup=0;
int pSum=0;
int pResult=0;


//Flags
int bfind=0;  // Finder beacon
int bdata=0;    // Data beacon
int border=0;    // Order beacon


//File Managment
string E_fileName;
string S_fileName;


//File Managment Structures
struct Input{
    int value;
}input;

struct Output{
    int value;
}output;


//Prototypes
int menu();
int file();
int printer();
int SecSearcher();
int DoppleSearcher();
int BubbleM2m();
int Bubblem2M();
int duplicateNum();
int Average();
int SaveFile();


//Data Capture - (Option 1)
int capture(){
        cout<<"\nType 5 numbers with space in the middle \n";
        for (i=0; i<n;i++){
            cin>>hufflepuff[i];
    }
    bdata=1;
    return(0);
}
   

//File Reader - (Option 2)
int file(){
    FILE *file1;    //Create a pointer of the file using the funtion fopen, the pinter has asigned the file call.
    cout<<"\nType the name of the input file (without spaces and special characters): \n";
    cin>>E_fileName;
    E_fileName+=".txt";     //It adds to the name of the file the extention ".txt".
    file1=fopen(E_fileName.c_str(), "r");   //The file open on writing mode.
        if(file1==NULL) {
            cout<<"\nIt's not possible to open the file ";
            exit(1);
        }
        else{
            cout<<"\nThe file "<<E_fileName.c_str()<<" has open correctly.";
        }
//Read the file and do a copy of the number saved to the array "hufflpepuff".
    cn=0;
    for(int i=0; !feof(file1); i++) {   //Repeat 'till it's the end of the file.
        fscanf(file1, "%i", &input.value);  //Reads the number saved on a file and save it on a strcuture.
        hufflepuff[i]=input.value;  //The number savedin the structure pass to the array "hufflepuff".
        cn++;   //It counts the numbers contained in the file.
    }
    cn--;
    cout<<"\n\nAn array with the data of the input file has been created.";
    cout<<"\n\nThe amount of numbers saved in the file is: "<<cn<<"\n\n";
    n=cn;
    fclose(file1);  //It closes the file after reading.
    system("pause");//It can be used if needed. VSC has problems to run the program.
    bdata=1;
    return(0);
}


//Data Printer - (Option 3)
int printer(){
        cout<<"\nThe saved data is: \n";
            for(k=0; k<n; k++){
                cout<<hufflepuff[k]<<" ";
    }
    cout<<endl;
    system("pause");    //It can be used if needed. VSC has problems to run the program.
    return(0);
 }


//Value Searcher using Sequential Search - (Option 4)
int SecSearcher(){
    cout<<"\nType the numbers to search \n";
    cin>>number;
    for(i=0;i<=n;i++){
        if(hufflepuff[i] == number){
            cout<<"\nThe number "<<number<< " has been find on the position: \n"<<(i+1)<<"\n";
            bfind=1;
            i=n;
            }
        }
        if(bfind == 0){
            cout<<"\nIt can't be find the number \n"<<number<<"\n";;			
    }
    system("pause");
    return(0);
 }


//Duplicate Number Searcher - (Option 5)
int DoppleSearcher(){
    printer();
    counter=0;
    cout<<"\nType the number to search \n";
    cin>>number;
    for(i=0;i<n;i++){
        if(hufflepuff[i]==number){
            cout<<"\nThe number "<<number<<" has been find on the position: \n"<<(i+1)<<endl;
            bfind=1;
            counter++;
        }
    }
    if(bfind==0){
        cout<<"\nIt can't be find the number "<<number<<"\n";
    }
    if(counter>0){
        cout<<"\nThe number "<<number<<" has been find "<<counter--<<" times.\n";
    }
    system("pause");
    return(0);
}


//Bubble Sort Major to Minor - (Option 6)
int Bubblem2M(){
    for(i=0; i<n-1; i++){
        for (j=i+1;j<n;j++){
            if (hufflepuff[i] > hufflepuff[j]){
                aux=hufflepuff[i];
                hufflepuff[i]=hufflepuff[j];
                hufflepuff[j]=aux;
            }
        }
    }
    printer();
    border=1;
    return(0);
 }


//Bubble Sort Minor to Major - (Option 7)
int BubbleM2m(){
    for(i=0; i<n-1; i++){
        for (j=i+1;j<n;j++){
            if (hufflepuff[i] < hufflepuff[j]){
                aux=hufflepuff[i];
                hufflepuff[i]=hufflepuff[j];
                hufflepuff[j]=aux;
            }
        }
    }
    printer();
    border=1;
    return(0);
 }


//Duplicate a number - (Option 8)
int duplicateNum(){
    if(bdata==1){
        if(border==1){
            printer();
            cout<<"Type the number to duplicate:\n";
            cin>>numDup;
            for(i=0;i<n;i++){
                if(numDup<hufflepuff[i]){
                    place=i;
                    i=n;
                }
            }
            for(j=n;j>=place;j--){
                hufflepuff[j]=hufflepuff[j-1];
            }
            n++;
            printer();
        }
        else{
            cout<<"\nThe data is not ordered.\n";
            system("pause");
        }
    }
        else{
            cout<<"\nThere aren't any data to verify.\n";
            system("pause");
        }
        return(0);
}

//Variable Option - (Option 9)


//Copy the data to a file - (Option 10)
int SaveFile(){
    FILE *file2;//Create a pointer of the file using the function fopen, the pointer has asigned the file call.
    cout<<"\n\nType the name of the output file (without spaces and special characters):\n";
    cin>>S_fileName;
    S_fileName+=".txt";     //It adds to the name of the file the extention ".txt".
    file2=fopen(S_fileName.c_str(), "w");   //The file will be open in writing mode.
    if(file2==NULL){
        cout<<"\nIt's not possible to find the file\n";
        exit(1);
    }
    else{
        cout<<"\nThe file "<<S_fileName.c_str()<<" has open correctly.\n";
    }
    cout<<"\n\nThe data saved in the file is:\n";
    savecn=0;
    for(i=0;i<n;i++){
        output.value=hufflepuff[i];
        fprintf(file2, "%i\n", output.value);
        savecn++;
    }
    cout<<"\n\nThe total of numbers saved in the second file is: "<<savecn;
    cout<<"\n\n";
    fclose(file2);
    return(0);
}


//Principal Function
 int main(){
    setlocale (LC_ALL, "spanish");
    for(cycle=0;cycle==0; ) {
        menu();
        switch(option) {
            case (1):
                capture();
            break;
            case(2):
                file();
            break;
            case(3):
                printer();
            break;
            case(4):
                SecSearcher();
            break;
            case(5):
                DoppleSearcher();
            break;
            case(6):
                Bubblem2M();
            break;
            case(7):
                BubbleM2m();
            break;
            case(8):
                duplicateNum();
            break;
            case(9):
                //VariableUse.
            break;
            case(10):
                SaveFile();
            break;
            case(11):
                cycle=1;
            break;
            default: "\nIncorrect selection";
        }
    }
    cout<<"\n";
    system("pause");
}


//Menu Function
int menu(){
system("cls");	
cout<<"\nMenu";
cout<<"\n1 Capure data";
cout<<"\n2 Read file";
cout<<"\n3 Data printer";
cout<<"\n4 Sequential Searcher";
cout<<"\n5 Duplicate Number Searcher";
cout<<"\n6 Bubble Sort Major to Minor";
cout<<"\n7 Bubble Sort Minor to Major";
cout<<"\n8 Duplicate a number";
cout<<"\n9 ";
cout<<"\n10 Save data to file";
cout<<"\n11 Exit";
cout<<"\nType the number of the option you want to select:\n";
cin>>option;
return(0);
}