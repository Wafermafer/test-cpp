// Name : Vector y Lista2023.cpp

#include <iostream>
#include <stdio.h>
using namespace std;

struct Nodo{
    int info;
    Nodo*sgte;
};

void liberar(Nodo*&Lista);

int main(){
    //Tipo de dato, nombre del vector y cantidad de posiciones
    Nodo*vec[4];
    int len;
    //Puntero auxiliar,La inicializo en NULL porque hay voy a insertar ordenado
    Nodo*aux=NULL;
    // PARA RECORRER EL VECTOR

    //Variable para el resultado
    int suma=0;
    int cant=0;

    for(int i=0; i<len; i++){
        //le asigno la lista que esta en esa posicion
        aux=vec[i];
        while(aux!=NULL){
            suma=suma+aux->info;
            cant++;
            aux=aux->sgte;
        }
        cout<<"El promedio es: "<<suma/cant<<endl;
        suma=0;
        cant=0;
    }
    for(int i=0; i<len; i++){
        liberar(vec[i]);
    }
    return 0;
}

//Desarrollo de procedimiento y funciones

void liberar(Nodo*&Lista){
    //Creo un puntero auxiliar
    Nodo*aux;
    while(Lista!=NULL){
        aux=Lista;
        Lista=Lista->sgte;
        delete(aux);
    }
}

