#include <iostream>
using namespace std;

int main()
{
    int opcion, a, b;
    cout<<"Programa calculadora Basica \n";
    //Distribución del menú
        cout<<"Menu...\n";
        cout<<"1. Suma\n";
        cout<<"2. Resta\n";
        cout<<"3. Multiplicación\n";
        cout<<"4. División\n";
        cout<<"Selecciona la opción deseada\n";
        cin>>opcion;

    switch (opcion)
    {
        case 1:
            cout<<"Introduzca el valor 1:\n";
            cin>>a;
            cout<<"Introduzca el valor 2:\n";
            cin>>b;

            //c = a + b;

            cout<<"El resultado es: "<<(a+b)<<endl;
            break;

        case 2:
            cout<<"Introduzca el valor 1:\n";
            cin>>a;
            cout<<"Introduzca el valor 2:\n";
            cin>>b;

            //c = a - b;

            cout<<"El resultado es: "<<(a-b)<<endl;

        case 3:
            cout<<"Introduzca el valor 1:\n";
            cin>>a;
            cout<<"Introduzca el valor 2:\n";
            cin>>b;

            //c = a * b;

            cout<<"El resultado es: "<<(a*b)<<endl;

        case 4:
            cout<<"Introduzca el valor 1:\n";
            cin>>a;
            cout<<"Introduzca el valor 2:\n";
            cin>>b;
            if (b==0) {
                do {
                    cout<<"Ingrese un número diferente a 0 \n";
                    cin>>b;
                } while (b==0);
            }

            //c = a / b;

            cout<<"El resultado es: "<<(a/b)<<endl;

        default:
            cout<<"Operación invalida";
            break;
    }
}