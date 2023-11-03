// Name : Listas 2023.cpp

#include <iostream>
#include <stdio.h>
using namespace std;

struct Nodo{
    int info;
    Nodo*sgte;
}

void agregarPrimero(Nodo*&Lista,int valor);
void insertarOrdenado(Nodo*&Lista,int valor);
void eliminarPrimero(Nodo*&Lista);
void mostrar(Nodo*Lista);
void liberar(Nodo*&Lista);
//funcion que va a devolver el puntero donde este el nodo o un nulo que implica que no lo encontro
Nodo*buscar(Nodo*Lista,int valor);
//procedimiento que busca y mostrar
void buscarYMostrar(Nodo*lista, int valor);

int main{
    Nodo*lista=NULL;

    insertarOrdenado(lista,4);
    insertarOrdenado(lista,1);
    insertarOrdenado(lista,1);

    //buscarYMostrar(lista,2);

    // mostrar(lista);
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

void eliminarPrimero(Nodo*&Lista){          // Calcado de pop, solo cambia en lugar de pilas, por lista
    //retorno
    int ret;
    ret=lista->info;
    //eliminar nodo
    Nodo*aux=Lista;
    Lista=Lista->sgte;
    delete(aux);
    return ret;
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

void insertarOrdenado(Nodo*&Lista,int valor){
    //crear el nodo
    Nodo*nuevo=new Nodo();
    //cargar el nodo
    nuevo->info=valor;
    nuevo->sgte=NULL; // porque no se donde va a ir
    //Enlazarlo
    Nodo*aux=Lista;  //Recorro sin modificar la lista
    Nodo*ant=NULL;  //Este me va a permitir enlazar
    //BUSCAR 
    while (aux!=NULL&&aux->info<valor){
        ant=aux;
        aux=aux->sgte;   //avanzabamos en la lista
    }
    //no entre al while 1) lista vacia 2)debo insertar al principio
    if(ant==NULL){
        lista=nuevo;
        nuevo->sgte=aux;
    }else{              //Entre al while, 1) en alguna parte de la lista  2) agregar al final
        ant->sgte=nuevo;
        nuevo->sgte=aux;
    }
    // nuevo->sgte=aux; puede usarse aca porque se repite en ambos casos


}