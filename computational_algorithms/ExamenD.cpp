#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;


//Global Variables
int i=0, j=0, k=0, l=0;  // Counters
int cycle=0;   // Cycle
int n=5;
int aux=0;
int option=0;
int number=0;
int counter=0;
int cn=0;
int place=0;
int guardacn=0;
int hufflepuff[1000]={0};
int numDup=0;
int pSum=0;
int pResult=0;


//Flags
int bfind=0;        // Finder beacon
int bdata=0;        // Data beacon
int bordenation=0;  // Order beacon

//File Management
string nombreArchivoE;
string nombreArchivoS;


//File Managment Structures
struct Entrada{
	int valor;
}entrada;

struct Salida{
	int valor;
}salida;


//Prototypes
	int menu();             // Option 1
    int archivo();          // Option 2
    int printer();          // Option 3
	int SecSearcher();      // Option 4
	int DoppleSearcher();   // Option 5
	int BubbleM2m();        // Option 6
	int Bubblem2M();        // Option 7
    int duplicarNum();      // Option 8
    int Promedio();         // Option 9
	int guardarArchivo();	// Option 10


//Data capture - (Option 1)
int capture(){
      cout<<"\nTeclee "<<n<<" numeros separados por un espacio \n";
  		for (i=0; i<n;i++){
  			cin>>hufflepuff[i];
  	}
  	bdata=1;
  	return (0);
}


//Archive Reader - (Option 2)
int archivo(){
	FILE *archivo1;                                  //Create a pointer of file using the funtion fopen, the pointer has asigned the file call
	cout<<"\n Teclea el nombre del archivo de entrada (sin espacio, ni caracteres especiales):   ";
	cin>>nombreArchivoE;
	nombreArchivoE+= ".txt";						 // It adds to the name of the file the extention ".txt" 
	archivo1 = fopen(nombreArchivoE.c_str(), "r");   // The file open on writing mode  
		if(archivo1== NULL ){                       
    	cout<<"\n No se puede abrir el archivo "; 
    	exit (1);
	}	                                   
	else{
  		cout<<"\n Se abrio el archivo "<<nombreArchivoE.c_str()<<"  correctamente";
	}	
//Read the file and do a copy of the number saved to the array "hufflepuff"   	
	cn=0;
	for (int i=0; !feof(archivo1); i++) {          // Repits 'till it's the end of the file
    	fscanf (archivo1, "%i", &entrada.valor);   // Reads the number saved on a file and save it on a structure
    	hufflepuff[i]=entrada.valor;               // The number saved in the structure pass to the array "hufflepuff"
    	cn++;                                      // it counts the numbers contained in the file
	}
	cn--;
	cout<<"\n\nSe ha generado el arreglo con los datos del archivo de entrada";	
	cout<<"\n\nLa cantidad de numeros contenidos en el arreglo son:  "<<cn<<"\n\n";
	n=cn;
	fclose(archivo1);                             // it closes the file after reading.
//	system ("pause");               // It can be used if needed. VSC has problems to run the program.
	bdata=1;
	return(0);
}
  
  
// Data Printer - (Option 3)
int printer(){
    cout<<"\nLos datos guardados son: \n";
		for(k=0; k<n; k++){
			cout<<hufflepuff[k]<<" ";
	}
	cout<<endl;
//   	system("pause");        // It can be used if needed. VSC has problems to run the program.
   	return (0);
}


// Value Searcher - (Option 4)
int SecSearcher(){
	printer();
	cout<<"\nTeclee un numero a buscar \n";
	cin>>number;
	for(i=0;i<n;i++){
		if(hufflepuff[i] == number){
			cout<<"\n El numero "<<number<< " se encontro en la localidad: \n"<<i+1<<endl;
			bfind=1;
			i=n;
			}
		}
		if(bfind == 0){
			cout<<"\n No se encuentra el numero \n"<<number<<endl;			
	}
	system("pause");
    return (0);
} 


// Dupplicate Number Searcher - (Option 5)
int DoppleSearcher(){
	printer();
	counter=0;
	cout<<"\nTeclee un numero a buscar \n";
	cin>>number;
	for(i=0;i<n;i++){
		if(hufflepuff[i] == number){
			cout<<"\n El numero "<<number<< " se encontro en la localidad: \n"<<i+1<<endl;
			bfind=1;
			counter++;
			}
		}
		if(bfind == 0){
			cout<<"\n No se encuentra el numero \n"<<number<<endl;			
	}
	if(counter> 0){
			cout<<"\n El numero \n"<<number<<"se encontro "<<counter--<<"veces"<<endl;			
		}
	system("pause");
    return (0);
}



// Major to Minor Order - (Option 6)
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
		bordenation=1;
		return(0);
}


// Minor to Major Order - (Option 7)
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
		bordenation=1;
		return(0);
}


// Duplicate a number - (Option 8)
int duplicarNum(){
	if(bdata==1){
		if (bordenation==1){
			printer();
			cout<<"Teclee el numero a duplicar";
			cin>>numDup;
			for(i=0;i<n;i++){
				if(numDup < hufflepuff[i]){
					place = i;
					i=n;
				}
			}
			for(j=n;j>=place;j--){
				hufflepuff[j] = hufflepuff[j-1];
			}
			n++;
			printer();
		}
		else{
			cout<<"\nLos datos no estan ordenados \n";
			system ("pause");
		}
	}
		else{
			cout<<"\n No hay datos para procesar \n";
			system ("pause");
		}
			return (0);
} 


// Average of the numbers - (Option 9)
int Promedio() {
    cout<<"\nLos datos guardados son: \n";
		for(k=0; k<n; k++){
			cout<<hufflepuff [k]<<" ";
	}
	cout<<endl;
    pSum=hufflepuff[0];
    for (l=1; l<n; l++) {
        pSum=pSum+hufflepuff[l];
    }
    pResult=pSum/l;
    cout<<"El resultado de la operacion de promedio es: "<<pResult;
    return (0);
}


// Copy the array on a text file - (Option 10)
int guardarArchivo(){
	FILE *archivo2;                                         //Crea un apuntador de archivo, utilizando en la función fopen, el apuntador se le asigná el llamado al archivo
  cout<<"\n\n Teclea el nombre del archivo de salida (sin espacios, ni caracteres especiales):   ";
	cin>>nombreArchivoS;
	nombreArchivoS+= ".txt";						 		// it put the extention ".txt"
	archivo2 = fopen(nombreArchivoS.c_str(), "w");		    // the file will be open in write mode
	if(archivo2== NULL ){
		cout<<"\nNo se puede abrir el archivo ";
		exit(1);
  }
	else{
		cout<<"\n Se abrio el archivo  "<<nombreArchivoS.c_str()<<"  correctamente\n";
   }
 cout<<"\n\nGuarda los numeros contenidos en el arreglo en archivo";
  guardacn=0;
  for (i=0; i<n; i++) {
      salida.valor=hufflepuff[i];
      fprintf(archivo2, "%i\n", salida.valor);
      guardacn++;
   }

  cout<<"\n\nTotal de números guardados en el segundo archivo son: "<<guardacn;
  cout<<"\n\n";
	fclose(archivo2);
	
	return(0);
}


//Main
int main(){
/*	setlocale (LC_ALL, "spanish");
    captura();
    impresion();
    menu();*/
  for(cycle=0; cycle==0;){
  	menu();	
  	switch (option){
    		case (1):
    			capture();
    			break;
    			
    		case (2):
    			archivo();
    			break;	
    		
    		case (3):
    			printer();
    			break;
			  	
    		case (4):
    			SecSearcher();
    			break;
    			
    		case (5):
    			DoppleSearcher();
    			break;
			
			case (6):
    			Bubblem2M();
    			break;
    			
    		case (7):
    			BubbleM2m();
    			break;	
    		
    		case (8):
    			duplicarNum();
    			break;
			  	
            case (9):
                Promedio();
                break;
    		case (10):
    			guardarArchivo();
    			break;
    			
    		case (11):
    			cycle = 1;
    			break;
			default: "\nSeleccion incorrecta";	  	
	  	}
	  }
	cout<<endl;
    system("pause");    
}


int menu(){
//   system ("cls");	
cout<<"\nMenu";
cout<<"\n1 Captura de datos\n";
cout<<"\n2 Lectura de archivo\n";
cout<<"\n3 Impresion de datos\n";
cout<<"\n4 Busqueda secuenial\n";
cout<<"\n5 Busqueda duplicados\n";
cout<<"\n6 Ordenamiento Burbuja Menor Mayor\n";
cout<<"\n7 Ordenamiento Burbuja Mayor Menor\n";
cout<<"\n8 Duplicar un numero\n";
cout<<"\n9 Promedio de los numeros leidos\n";
cout<<"\n10 Guardar archivo\n";
cout<<"\n11 Salir\n";
cout<<"\nTeclee el numero de la opcion deseada\n";
cin>>option;
return 0;
}