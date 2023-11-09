// Name : Apareco y lista.cpp

#include <iostream>
#include <stdio.h>
using namespace std;

struct Nodo{
    int info;
    Nodo*sgte;
}

void insertarOrdenado(Nodo*&Lista,int valor);
void mostrar(Nodo*Lista);
void liberar(Nodo*&Lista);

int main{
    //Lista A y B.El ejercicio me indica que ya esta carga, por eso NO igualo a NULL
    Nodo*ListaA;
    Nodo*ListaB;
    ///La inicializo en NULL porque hay voy a insertar ordenado
    Nodo*ListaC=NULL;

//ESTO NO ES PARTE DEL EJERCICIO, SOLO LO INCLUYO PARA PROBARLO
insertarOrdenado(ListaA,1);
insertarOrdenado(ListaA,3);
insertarOrdenado(ListaA,5);
insertarOrdenado(ListaB,2);
insertarOrdenado(ListaB,3);
insertarOrdenado(ListaB,7);

//BLOQUE DE APAREO
    ListaC=ListaA;
    //puntero auxiliar y le asigno la listaB, para recorrer con el auxiliar lo que tiene lista B
    Nodo*aux=listaB;

    while(aux!=NULL){
        //CON aux->info paso el registro
        insertarOrdenado(ListaC,aux->info);
        //avanzo la lista
        aux=aux->sgte; 
    }
    mostrar(ListaC);
    liberar(ListaA);
    liberar(ListaB);
    liberar(ListaC);

    return 0;
}

//Desarrollo de procedimiento y funciones

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