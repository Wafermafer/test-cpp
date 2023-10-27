// Name : Procedimiento 2 2023.cpp

#include <iostream>
using namespace std;
//El usuario me da 2 valores: A y B y permutarlos
// Encabezados funciones y procedimientos
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
cout<<x<<endl;
cout<<y<<endl;

return 0;
}

// Desarrollar las funciones y procedimientos
void Permutar (int &num1, int &num2){
int aux;
aux=num1;
num1=num2;
num2=aux;
}