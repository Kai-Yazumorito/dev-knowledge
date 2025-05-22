#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <time.h>
#include <locale.h>
using namespace std;


//Variables globales
int i=0, j=0, k=0;
int ciclo=0;
int n=5;
int aux = 0;
int numero = 0;
int opcion = 0;
int contador = 0;
int cn=0;
int lugar = 0;
int guardacn =0;
int numDuplicar = 0;
int inferior=0; 
int superior=n;
int buscar = 0;
int izq=0, der=0, pivote=0;   
int temporal =0;
int limite_izq=0; int limite_der=0; // limite_izq = 0, limite_der = n-1
int arreglo [1000] = {0};


//Banderas
int bencontro = 0;
int bdatos = 0;
int bordenados = 0;
int	bexiste = 0;


//Manejo de archivos
string nombreArchivoE;      //nombre del archivo de entrada
string nombreArchivoS;     //nombre del archivo de salida


//Estructuras de manejo de archivos
struct Entrada {           
	int valor;
} entrada;

struct Salida {          
	int valor;
} salida;


//Prototipos
int menu ();
int captura (); 
int archivo ();
int impresion ();
int busquedaSec ();
int busquedaDuplicados ();
int burbujaMenMay ();
int burbujaMayMen ();
int guardarArchivo ();
void busquedaBin();
int busquedaBinaria();
void ordenamientoQuick(); 
void quickSort (int arreglo[], int limite_izq, int limite_der);

//Captura de datos
int captura (){
	cout<<"\nTeclee 5 números separados por un espacio \n";
	for (i=0; i<n; i++){
	    cin>>arreglo [i];
	}
	bdatos = 1;
	return (0); 
}


//Impresion de datos
int impresion (){
	cout<<"\nLos datos guardados son: \n";
	for (k=0; k<n; k++){
		cout<<arreglo [k]<<"  ";
	} 
	cout<<endl;
	//system ("pause");
	return (0);
}


int busquedaSec (){
	impresion ();
	cout<<"\nTeclee un número a buscar: ";
	cin>>numero;
	for (i=0; i<n; i++)	{
		if (arreglo [i] == numero){
			cout<<"\n El número "<<numero<<"  se encontró en la localidad "<<i+1<<endl;   
			bencontro = 1;
			i = n;
		}
	}
	if (bencontro == 0){
		cout<<"\nNo se encontro el número "<<numero<<endl;
	}
	system ("pause");
	return (0);
}

int busquedaDuplicados (){
	impresion ();
	contador = 0;
	cout<<"\nTeclee un número a duplicar: ";
	cin>>numero;
	for (i=0; i<n; i++)	{
		if (arreglo [i] == numero){
			cout<<"\n El número "<<numero<<"  se encontró en la localidad "<<i+1<<endl;   
			bencontro = 1;
			contador++;
		}
	}
	if (bencontro == 0){
		cout<<"\nNo se encontro el número "<<numero<<endl;
	}
	if (contador > 0){
		cout<<"\nEl numero "<<numero<<" se encontro "<<contador<<" veces "<<endl;
	}
	system ("pause");
	return (0);
}


int burbujaMenMay (){
	for (i=0; i<n-1; i++){
		for (j=i; j<n; j++){
			if  (arreglo [i]  > arreglo [j]) {
	    		aux = arreglo [i];
        		arreglo[i] = arreglo [j];
        		arreglo[j] = aux;
			}
		}
	}
	impresion ();
	system ("pause");
	bordenados = 1;
	return (0);
}


int burbujaMayMen (){
	for (i=0; i<n-1; i++){
		for (j=i; j<n; j++){
			if  (arreglo [i]  < arreglo [j]) {
	    		aux = arreglo [i];
        		arreglo[i] = arreglo [j];
        		arreglo[j] = aux;
			}
		}
	}
	impresion ();
	system ("pause");
	bordenados = 1;
	return (0);
}


// lectura del archivo 
//  lee los numeros contenidos en el archivo y los copia en el arreglo "arreglo" 
//  Se dejan los numeros en un arreglo llamado "arreglo" para que las funciones puedan trabajar con ellos
int archivo(){
	FILE *archivo1;                                  //Crea un apuntador de archivo, utilizando en la función fopen, el apuntador se le asigná el llamado al archivo
    cout<<"\n Teclea el nombre del archivo de entrada (sin espacio, ni caracteres especiales):   ";
	cin>>nombreArchivoE;
	nombreArchivoE+= ".txt";						 	// Se le agrega al nombre del archivo la extension ".txt" 
	archivo1 = fopen(nombreArchivoE.c_str(), "r");   // Se abre el archivo de modo lectura  
	if(archivo1== NULL ){                       
	    cout<<"\n No se puede abrir el archivo "; 
	    exit (1);
	}                                   
	else{
	  	cout<<"\n Se abrio el archivo "<<nombreArchivoE.c_str()<<"  correctamente";
    }
    	
    //Lee el archivo y copia los numeros contenidos en el archivo en el arreglo "arreglo"   	
    cn=0;
    for (int i=0; !feof(archivo1); i++) {          // Repite hasta que sea el fin del archivo
        fscanf (archivo1, "%i", &entrada.valor);   // Lee el numero contenido en el archivo y lo guarda en la estructura
        arreglo[i]=entrada.valor;                    // El numero contenido en la estructura lo pasa al arreglo "arreglo"
        cn++;                                      // suma 1 al contador de numeros leidos
	}
	cn--;
	cout<<"\n\nSe ha generado el arreglo con los datos del archivo de entrada";	
	cout<<"\n\nLa cantidad de numeros contenidos en el arreglo son:  "<<cn<<"\n\n";
	n=cn;
	fclose(archivo1);                             //cierra el archivo de entrada
	impresion ();
	system ("pause");
	bdatos = 1;
	return(0);
}


//Copia la arreglo ordenada en el archivo de salida
int guardarArchivo(){
	FILE *archivo2;                                         //Crea un apuntador de archivo, utilizando en la función fopen, el apuntador se le asigná el llamado al archivo
    cout<<"\n\n Teclea el nombre del archivo de salida (sin espacios, ni caracteres especiales):   ";
	cin>>nombreArchivoS;
	nombreArchivoS+= ".txt";						 		// se agrega la extension ".txt"
	archivo2 = fopen(nombreArchivoS.c_str(), "w");		    // se abre el archivo de modo escritura 
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
        salida.valor=arreglo[i];
        fprintf(archivo2, "%i\n", salida.valor);
        guardacn++;
    }
    
    cout<<"\n\nTotal de números guardados en el segundo archivo son: "<<guardacn;
    cout<<"\n\n";
	fclose(archivo2);
}


int duplicarNum (){
	bexiste = 0;
	if (bdatos == 1){
		if (bordenados == 1){
			impresion ();
			cout<<"\nTeclee el numero a duplicar ";
			cin>>numDuplicar; 
			for (i=0;  i < n;  i++){
      			if (numDuplicar == arreglo[i]){
            		lugar= i;
            		bexiste = 1;
      			}
			}
			if (bexiste == 1){
				n++;
				//corrimiento
				cout<<"\nvalor n: "<<n<<" ";
				for (j=n; lugar<j; j--) {
      				arreglo [j] = arreglo[j-1]; 
				}	
			}
			else {
				cout<<"\nEl numero no se encuentra en el arreglo, no se puede duplicar\n";	
			}
		}	
		else {
			cout<<"\nLos datos no estan ordenados \n"; 
			system ("pause");
		}
	}
	else {
		cout<<"\nNo hay datos para procesar\n";
	}
	impresion ();
	system ("pause");
	return (0);
}


// -- Metodo de Busqueda Binaria -- //
void busquedaBin(){
	cout<<"\nTeclee el número a buscar en el arreglo :   ";
	cin>>buscar;
	busquedaBinaria();             //Se requiere el prototipado de la funcion porque esta despues de la funcion que la llamó
    if (arreglo[i] == buscar){
        cout<<"El valor  "<<buscar<<"  se encuentra en la posicion "<<i + 1;
    }
    else {
        cout<<"No se encontra el  valor  "<<buscar<<"  en el arreglo\n";
    }
} 


int busquedaBinaria(){
	inferior=0, superior=n;
    while (superior >= inferior){
        i = (inferior + superior) / 2;
        if (arreglo[i] == buscar){
             return i;
        }
        else {
            if (buscar < arreglo [i]){
                superior = i-1;
            }
            else{
                inferior = i+1;
            }
    	}
    }
    return (0);
}


//Llama a la función de quickSort
void ordenamientoQuick() {
    quickSort (arreglo, 0, n-1);             //Se requiere el prototipado de la funcion porque esta despues de la funcion que la llamó
} 


void quickSort (int arreglo[], int limite_izq, int limite_der){
	
    izq = limite_izq;
    der = limite_der;
    pivote = arreglo[(izq + der)/2];
    do{
        while (arreglo [izq] < pivote && izq < limite_der){
        	izq++;	
		}
        while (pivote < arreglo[der] && der > limite_izq){
        	der--;
		}
        if (izq <= der){
            temporal = arreglo[izq];
            arreglo[izq] = arreglo[der];
            arreglo[der] = temporal;
            izq++;
            der--;
        }
    }while(izq <= der);    
    
    if(limite_izq < der){
		quickSort(arreglo, limite_izq, der);
	}
    if(limite_der > izq){
		quickSort(arreglo, izq, limite_der);
	}
}


int main (){
    bordenados = 0;
	setlocale (LC_ALL, "spanish");
	for (ciclo=0; ciclo == 0; ){
		menu ();
		switch (opcion){
			case (1):
				captura ();
				break;
			case (2):
				archivo ();
				break;	
			case (3):
				impresion (); 
				system ("pause");
				break;						
			case (4):
				busquedaSec ();
				break;
			case (5):
				//cout<<"\nBusqueda Binaria\n"; 
				impresion(); 
				busquedaBin();
				system ("pause");	
				break;
			case (6):
				busquedaDuplicados ();
				break;	
			case (7):
				burbujaMenMay ();
				break;
			case (8):
				burbujaMayMen ();
				break;
			case (9):
				ordenamientoQuick( );  
				break;					
			case (10):
				duplicarNum ();
				break;
            case (11):
                t_init = clock();
                flotacion ();
                t_fin = clock();
                cout<<"\n\n Tiempo de ordenamiento por el metodo de Burbuja de Mayor a menor es: ";
                secs= (double)(t_fin - t_init) / (double)CLOCKS_PER_SEC;
                printf("%.16g milisegundos", secs * 1000.0);
                cout<<"\n\n";
                break;
			case (12):
				guardarArchivo ();
				break;				
			case (12):
				ciclo = 1;
				cout<<"\nGracias por trabajar con el programa";
				break;	
			default:
				cout<<"\nSelección de opción incorrecta";				
		}
	}		
	cout<<endl;
	system ("pause");
}


int menu (){
	system ("cls");
	cout<<"\n\tMenu";
	cout<<"\n1 Captura de datos";
	cout<<"\n2 Lectura de archivo";
	cout<<"\n3 Impresion de datos";	
	cout<<"\n4 Busqueda secuencial";
	cout<<"\n5 Busqueda binaria";
	cout<<"\n6 Busqueda duplicados";
	cout<<"\n7 Ordenamiento Burbuja Menor Mayor";
	cout<<"\n8 Ordenamiento Burbuja Mayor Menor";
	cout<<"\n9 Ordenamiento QuickSort";
	cout<<"\n10 Duplicar un numero";	
	cout<<"\n11 Guardar archivo";
	cout<<"\n12 Salir";
	cout<<"\nTeclee el numero de la opción deseada:  ";
	cin>>opcion;
	return (0);
}