// Name : Interseccion de Lista y Cola.cpp

#include <iostream>
#include <stdio.h>
using namespace std;


struct Nodo{
    int info;
    Nodo*sgte;
};

// Encabezados funciones y procedimientos
int suprimir(Nodo*&cfte, Nodo*&cfin);
void mostrar(Nodo*Lista);
void liberar(Nodo*&Lista);
void insertarOrdenado(Nodo*&Lista,int valor);
//Buscar es una funcion que me devuelve un puntero
Nodo*buscar(Nodo*Lista,int valor)
int main()
{
    //El ejercicio me indica que ya esta carga, por eso NO igualo a NULL
    Nodo*cfte;
    Nodo*cfin;
    //Igual para Lista1, que viene originalmente y con la que se hara la interseccion
    Nodo*Lista1;
    //La inicializo en NULL porque hay voy a insertar ordenado
    Nodo*Lista2=NULL;

    //auxiliar
    int carga;
    //Lo otro es crear auxiliar del puntero
    Nodo*aux;

    //ESTE BLOQUE ES PARA TODOS LOS ELEMENTOS DE LA COLA
    while(cfte!=NULL){
        //elimine un elemento de la cola y lo guarde en carga
        //LA COLA LA LIBERE ACA CON EL SUPRIMIR
        carga =suprimir(cfte,cfin);
        aux=buscar(Lista1,carga);
        if(aux!=NULL){
            insertarOrdenado(lista2,carga);
        }     
    }
    mostrar(Lista2);
    //ACA LIBERO LAS LISTAS
    liberar(Lista1);
    liberar(Lista2);
    return 0;
}

//Desarrollo de procedimiento y funciones
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


Nodo*buscar(Nodo*Lista,int valor){
    Nodo*aux=Lista;
    while(aux!=NULL&&aux->info!=valor){  //Parecido a buscar en vectores
        aux=aux->sgte;
    }
    return aux;

}

