// Name : Funcion y Procedimiento 1 2023.cpp

#include <iostream>
using namespace std;

// Encabezados funciones y procedimientos
void MostrarDoble(int num);
int Doble(int num);

int main()
{
    int X;
    cout<<"Ingrese un valor"<<endl;
    cin>>X;
    // Usar las funciones y procedimientos
   MostrarDoble(X);
    return 0;
}

// Desarrollar las funciones y procedimientos

void MostrarDoble(int num){
    //Calcular el doble
int aux;
aux=Doble(num);
    //Mostrar el doble
cout<<"El doble del valor ingresado es:"<<aux<<endl;
}

int Doble(int num){
    int aux;
    aux=num*2;
    return aux;
}