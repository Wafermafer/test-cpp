// Name : Funcion 1 2023.cpp

#include <iostream>
using namespace std;

// Encabezados funciones y procedimientos
int Doble(int num);

int main()
{
    int X;
    int Rdo;

    cout<<"Ingrese un valor"<<endl;
    cin>>X;
    // Usar las funciones y procedimientos
    Rdo=Doble(X); // invocando a la función 
    cout<<"El doble del número ingresado es: "<<Rdo<<endl;

    return 0;
}

// Desarrollar las funciones y procedimientos
int Doble(int num)
{
    int aux;
    aux = num * 2;
    return aux;
}

/*int Doble( int num){
    return num*2; 
} */