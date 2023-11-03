// Name : Ejercicio 1 de Listas 2023.cpp

#include <iostream>
#include <stdio.h>
using namespace std;

struct Nodo{
    int info;
    Nodo*sgte;
}

void agregarPrimero(Nodo*&Lista,int valor);
void mostrar(Nodo*Lista);
void liberar(Nodo*&Lista);


int main{
   Nodo*lista=NULL;

   //Cargar la lista
   int carga;

   cout<<"Ingrese un valor o temrine con 0"<<endl;
   cin>>carga;

   while(carga!=0){
    agregarPrimero(lista,carga);
    cout<<"Ingrese un valor o temrine con 0"<<endl;
   cin>>carga;
   }
   mostrar(lista);
   liberar(lista);
    
    return 0;

}

//Desarrollo de procedimiento y funciones
void agregarPrimero(Nodo*&Lista,int valor){  // Calcado de push, solo cambia en lugar de pilas, por lista
    //Crear el nodo con el pedido de memoria
    Nodo*nuevo= new Nodo();
    //Cargar el nodo
    nuevo->info=valor;
    nuevo->sgte=Lista;
    //Enlazar
    Lista=nuevo;
}

void mostrar(Nodo*Lista){
    Nodo*aux=Lista;
    while(aux!=NULL){
        cout<<"el valor es: "<<aux->info<<endl;
        aux=aux->sgte;
    }
}

void liberar(Nodo*&Lista){
    //Creo un puntero auxiliar
    Nodo*aux;
    while(Lista!=NULL){
        aux=Lista;
        Lista=Lista->sgte;
        delete(aux);
    }
}

