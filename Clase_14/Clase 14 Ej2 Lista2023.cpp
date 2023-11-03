// Name : Ejercicio 2 de Listas 2023.cpp

#include <iostream>
#include <stdio.h>
using namespace std;

struct Nodo{
    int info;
    Nodo*sgte;
}

void agregarPrimero(Nodo*&Lista,int valor);
void liberar(Nodo*&Lista);
//funcion que va a devolver el puntero donde este el nodo o un nulo que implica que no lo encontro
Nodo*buscar(Nodo*Lista,int valor);
//procedimiento que busca y mostrar
void buscarYMostrar(Nodo*lista, int valor);

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
   int buscar;
   cout<<"Indique el valor a buscar en la estructura"<<endl;
   cin>>buscar;
    buscarYMostrar(lista,buscar);
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

void liberar(Nodo*&Lista){
    //Creo un puntero auxiliar
    Nodo*aux;
    while(Lista!=NULL){
        aux=Lista;
        Lista=Lista->sgte;
        delete(aux);
    }
}

Nodo*buscar(Nodo*Lista,int valor){
    Nodo*aux=Lista;
    while(aux!=NULL&&aux->info!=valor){  //Parecido a buscar en vectores
        aux=aux->sgte;
    }
    return aux;

}

void buscarYMostrar(Nodo*lista, int valor){
    Nodo*aux;
    aux=buscar(Lista, valor);
    if(aux==NULL){
        cout<<"No lo encontro"<<endl;
    }else{
        cout<<"El valor encontrado es: "<<aux->info<<endl;

    }
}