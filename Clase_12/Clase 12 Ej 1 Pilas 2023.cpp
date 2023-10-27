// Name : Ejercicio 1 2023.cpp

#include <iostream>
#include <stdio.h>
using namespace std;

struct Nodo{
    // << OJO <<
    int info;
    Nodo *sgte;
};

void push(Nodo*&pila,int valor);
//Tinfo pop();
//"int pop" varia dependiendo del "int info"; extan extrechamente relacionados <<OJO<<
int pop(Nodo*&pila);

int main()
{
//Definir el puntero pila
Nodo*pila=NULL;
int carga;
int rdo; 

cout << "Ingrese un valor, termine con 0" << endl;
cin>> carga;

while ( carga != 0){
    push(pila,carga);
    cout << "Ingrese un valor, termine con 0" << endl;
    cin>> carga;
}

while (pila !=NULL){
    rdo=pop(pila);
    cout << "el valor extraido es:  "<<rdo<<endl;
}
  return 0;
}

//Desarrollo de procedimiento y funciones
void push(Nodo*&pila,int valor){
    //1ero Crear el Nodo ---> pedir memoria
    Nodo*nuevo=new Nodo();
    //2do Cargar el Nodo con el valor
    nuevo->info=valor;
    nuevo-> sgte=pila;
    //3ero Conectar 
    pila=nuevo;
}

int pop(Nodo*&pila){
    //1ero Crear una variable de retorno
    int rdo;
    //2do Guardar el valor de retorno
    rdo=pila->info;
    //3er Libero memoria
    Nodo*aux=pila;  // puntero auxiliar
    pila=aux->sgte;
    delete (aux);
    //4to Retorno valor
    return rdo;
}
