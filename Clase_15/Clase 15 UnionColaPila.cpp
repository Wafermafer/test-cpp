// Name : Union Cola Pila.cpp

#include <iostream>
#include <stdio.h>
using namespace std;


struct Nodo{
    int info;
    Nodo*sgte;
};

// Encabezados funciones y procedimientos
int pop(Nodo*&pila);
int suprimir(Nodo*&cfte, Nodo*&cfin);
void insertarOrdenado(Nodo*&Lista,int valor);
void mostrar(Nodo*Lista);
void liberar(Nodo*&Lista);

int main()
{
    //El ejercicio me indica que ya esta carga, por eso NO igualo a NULL
    Nodo*cfte;
    Nodo*cfin;
    //Igual para Pila
    Nodo*pila
    //Estoy creando la lista, se iguala a NULL
    Nodo*Lista=NULL;
    //auxiliar
    int carga;

    //ESTE BLOQUE ES PARA TODOS LOS ELEMENTOS DE LA PILA
    //pila distinto de NULL porque tiene elementos
    while(pila!=NULL){
        //elimine un elemento de pila y lo guarde en carga
        carga =pop(pila);
        insertarOrdenado(lista,carga);
    }

    //ESTE BLOQUE ES PARA TODOS LOS ELEMENTOS DE LA COLA
    while(cfte!=NULL){
        //elimine un elemento de la cola y lo guarde en carga
        carga =suprimir(cfte,cfin);
        insertarOrdenado(lista,carga);
    }
    mostrar(lista);
    liberar(lista);
    return 0;
}

//Desarrollo de procedimiento y funciones

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

int suprimir(Nodo*&cfte, Nodo*&cfin){
  //Guardar el retorno
  int ret;
  ret=cfte->info;

  //Acomodar la cola
  Nodo*aux=cfte;
  cfte=cfte->sgte;
  if (cfte==NULL){
    cfin=NULL;
  }

  //Delete del nodo
  delete(aux);
  return ret;

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