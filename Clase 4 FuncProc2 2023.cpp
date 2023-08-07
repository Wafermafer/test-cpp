// Name : Funcion y Procedimiento 1 2023.cpp

#include <iostream>
using namespace std;
//Pedir 2 valores al usuario
//Permutar los valores
//Calcular el doble del segundo (primero)

// Encabezados funciones y procedimientos
int Doble(int num);
void Permutar (int &num1, int &num2);

int main()
{
    int x;
    int y;
    int aux;
    cout<<"Ingrese el primer valor"<<endl;
    cin>>x;
    cout<<"Ingrese el segundo valor"<<endl;
    cin>>y;

    Permutar(x,y);
    aux=Doble(y);
    cout<<"El doble del segundo valor es: "<<aux<<endl;
    return 0;
}

// Desarrollar las funciones y procedimientos

int Doble(int num){
    int aux;
    aux=num*2;
    return aux;
}

void Permutar (int &num1, int &num2){
int aux;
aux=num1;
num1=num2;
num2=aux;
}