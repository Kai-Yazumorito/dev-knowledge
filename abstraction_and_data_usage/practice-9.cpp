// Desarrolla el programa donde se calcule el factorial de
//un número con la creación de una función para qué muestre
// el resultado.
#include <iostream>
using namespace std;

int i=0; // Counter
int n; // Number for factorial
int result=1; // Result

int main() {
    cout<<"Ingresa el número a considerar el factorial: "<<endl;
    cin>>n;

    for (i=1; i<=n; i++) {
        result*=i;
    }
    cout<<"El resultado es: "<<result<<endl;
}