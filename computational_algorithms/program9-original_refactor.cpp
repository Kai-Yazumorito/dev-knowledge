    #include <iostream>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string>
    #include <fstream>
    #include <time.h>
    #include <locale.h>
    using namespace std;

  // Variables globales
  	
	int i=0, j=0, k=0;
  	int ciclo=0;
  	int n=5;
  	int aux=0;
  	int opcion=0;
  	int numero=0;
  	int contador=0;
  	int cn=0;
  	int lugar=0;
  	int guardacn=0;
	int arreglo[1000]={0};
	int numDup=0;
	

	//Banderas
	
	int bencontro=0;
	int bdatos=0;
	int bordenados=0;
	

	//Manejo de archivos
	
	string nombreArchivoE;
	string nombreArchivoS;
	
	
	//Estructura de manejo de archivos
	
	struct Entrada{
		int valor;
	}entrada;
	
	struct Salida{
		int valor;
	}salida;
	
	
	
	
	//Prototipos
	
   		int menu();
		int captura();  
		int archivo();
	//	int leerArchivo();
    	int impresion();
    	int busquedaSec();
    	int busquedaDup();
    	int burbujaMayMen ();
   		int burbujaMenMay ();
    	int guardarArchivo();	


	//Captura de datos
    
	    int captura(){
            cout<<"\nTeclee 5 numeros separados por un espacio \n";
        		for (i=0; i<n;i++){
        			cin>>arreglo [i];
        	}
        	bdatos=1;
        	return (0);
      }
      
      
  //Impresion de datos
    
	    int impresion(){
  	        cout<<"\nLos datos guardados son: \n";
        		for(k=0; k<n; k++){
        			cout<<arreglo [k]<<" ";
        	}
        	cout<<endl;
        	system("pause");
        	return (0);
    }
    
    
    // Busqueda de un numero
	
	int busquedaSec(){
    	impresion();
    	cout<<"\nTeclee un numero a buscar \n";
    	cin>>numero;
    	for(i=0;i<n;i++){
    		if(arreglo[i] == numero){
    			cout<<"\n El numero "<<numero<< " se encontro en la localidad: \n"<<i+1<<endl;
    			bencontro=1;
    			i=n;
				}
			}
			if(bencontro == 0){
				cout<<"\n No se encuentra el numero \n"<<numero<<endl;			
		}
		system("pause");
        return (0);
	} 


    //Busqueda de un numero repetido
    
	int busquedaDup(){
    	impresion();
    	contador=0;
    	cout<<"\nTeclee un numero a buscar \n";
    	cin>>numero;
    	for(i=0;i<n;i++){
    		if(arreglo[i] == numero){
    			cout<<"\n El numero "<<numero<< " se encontro en la localidad: \n"<<i+1<<endl;
    			bencontro=1;
    			contador++;
				}
			}
			if(bencontro == 0){
				cout<<"\n No se encuentra el numero \n"<<numero<<endl;			
		}
		if(contador> 0){
				cout<<"\n El numero \n"<<numero<<"se encontro "<<contador--<<"veces"<<endl;			
			}
		system("pause");
        return (0);
	}
	
	//Ordena de menor a mayor
	
	int burbujaMenMay (){
		for(i=0; i<n-1; i++){
    		for (j=i+1;j<n;j++){
    			if (arreglo[i] > arreglo[j]){
    				aux=arreglo[i];
    				arreglo[i]=arreglo[j];
    				arreglo[j]=aux;
				}
			}
		}
			impresion();
			bordenados=1;
			return(0);
	}


	//Ordena de mayor a menor
    
	 int burbujaMayMen (){
		for(i=0; i<n-1; i++){
    		for (j=i+1;j<n;j++){
    			if (arreglo[i] < arreglo[j]){
    				aux=arreglo[i];
    				arreglo[i]=arreglo[j];
    				arreglo[j]=aux;
				}
			}
		}
			impresion();
			bordenados=1;
			return(0);
	}
	
	
	//Lectura de archivo
	
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
		system ("pause");
		bdatos=1;
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
		
		return(0);
	}
	
	
	//Duplicar numero
	
	int duplicarNum(){
		if(bdatos==1){
			if (bordenados==1){
				impresion();
				cout<<"Teclee el numero a duplicar";
				cin>>numDup;
				for(i=0;i<n;i++){
					if(numDup < arreglo[i]){
						lugar = i;
						i=n;
					}
				}
				for(j=n;j>=lugar;j--){
					arreglo[j] = arreglo[j-1];
				}
				n++;
				impresion();
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
	
	//Main
    int main(){
    /*	setlocale (LC_ALL, "spanish");
  	    captura();
  	    impresion();
  	    menu();*/

  	  for(ciclo=0; ciclo==0;){
  	  	menu();	
  	  	switch (opcion){
  	    		case (1):
  	    			captura();
  	    			break;
  	    			
  	    		case (2):
  	    			archivo();
  	    			break;	
  	    		
  	    		case (3):
  	    			impresion();
  	    			break;
				  	
  	    		case (4):
  	    			busquedaSec();
  	    			break;
  	    			
  	    		case (5):
  	    			busquedaDup();
  	    			break;
				
				case (6):
  	    			burbujaMenMay();
  	    			break;
  	    			
  	    		case (7):
  	    			burbujaMayMen();
  	    			break;	
  	    		
  	    		case (8):
  	    			duplicarNum();
  	    			break;
				  	
  	    		case (9):
  	    			guardarArchivo();
  	    			break;
  	    			
  	    		case (10):
  	    			ciclo =1;
  	    			break;
				default: "\nSeleccion incorrecta";	  	
		  	}
		  }
    	cout<<endl;
        system("pause");    
    }
    
    int menu(){
    system ("cls");	
	cout<<"\nMenu";
	cout<<"\n1 Captura de datos\n";
	cout<<"\n2 Lectura de archivo\n";
	cout<<"\n3 Impresion de datos\n";
	cout<<"\n4 Busqueda secuenial\n";
	cout<<"\n5 Busqueda duplicados\n";
	cout<<"\n6 Ordenamiento Burbuja Menor Mayor\n";
	cout<<"\n7 Ordenamiento Burbuja Mayor Menor\n";
	cout<<"\n8 Duplicar un numero";
	cout<<"\n9 Guardar archivo\n";
	cout<<"\n10 Salir\n";
	cout<<"\nTeclee el numero de la opcion deseada\n";
	cin>>opcion;
	return 0;
}

