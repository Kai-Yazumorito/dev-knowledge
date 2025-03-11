 //agregar while o for 
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
  int n=5;
  int aux=0;
  int opcion;
  int numero=0;
  int arreglo[5]={0};
  char rep;

//Banderas
int bencontro=0;
int bdatos=0;


//Prototipos
    int menu();
	int captura();  
    int impresion();
    int busquedaSec();
    int burbujaMayMen ();
    int burbujaMenMay ();


	//Captura de datos
        int captura(){
            cout<<"\nTeclee 5 numeros separados por un espacio \n";
        for (i=0; i<n;i++){
        cin>>arreglo [i];
        }
      }
      
      
  //Impresion de datos
        int impresion(){
  	        cout<<"\nLos datos guardados son: \n";
        for(k=0; k<n; k++){
        cout<<arreglo [k]<<" ";
        }
    }

    
    int busquedaSec(){
    	cout<<"\nTeclee un caracteres a buscar\n";
    	cin>>numero;
    	for(i=0;i<=n;i++){
    		if(arreglo[i] == numero){
    			cout<<"\n El caracter "<<numero<< " se encontro en la localidad: \n"<<i;
    			bencontro==1;
				}
			}
			if(bencontro == 0){
				cout<<"\n No se encuentra el numero \n"<<numero;			
		}
		return 0;
	}
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
		return(0);
	}


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
		return(0);
	}
    
    int main(){
    	setlocale (LC_ALL, "spanish");
  	    captura();
  	    impresion();
  	    system ("pause");
  	    menu();
		  	
  	   do{	
  	   		opcion = menu();
  	   		switch (opcion){
  	    		case (1):
  	    			busquedaSec();
  	    			break;
  	    		
  	    		case (2):
  	    			burbujaMenMay();
  	    			break;
				  	
  	    		case (3):
  	    			burbujaMayMen();
  	    			break;
				default: "\nSeleccion incorrecta";	  	
		  	}
			cout << "Deseas repetir el proceso? (s/n): ";
			cin >> rep;
		  }while (rep == 's' || rep == 'S');
  	    
  	    /* busquedaSec();
  	    burbujaMayMen();
    	burbujaMenMay();*/
    	cout<<endl;
    	
    	
        system("pause");    
    }
    
    int menu(){
    system ("cls");	
	cout<<"\nMenu";
	cout<<"\n1 Busqueda secuenial";
	cout<<"\n2 Ordenamiento Burbuja Menor Mayor";
	cout<<"\n3 Ordenamiento Burbuja Mayor Menor";
	cout<<"\n4 Salir";
	cout<<"\nTeclee el numero de la opcion deseada";
	cin>>opcion;
	return opcion;
}