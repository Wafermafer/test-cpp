// Name : Procedimiento 1 2023.cpp

#include <iostream>
using namespace std;

// Encabezados funciones y procedimientos
void MostrarDoble (int num);

int main()
{
int X;
cout<<"Ingrese un valor"<<endl;
cin>>X;
MostrarDoble(X);
    return 0;
}

// Desarrollar las funciones y procedimientos
void MostrarDoble (int num){
    int aux;
    aux=num*2;
    cout<<"El doble del valor ingresado es:"<<aux<<endl;
}