// Name : Lista y sub lista 2023.cpp

#include <iostream>
#include <stdio.h>
using namespace std;

//Nodo de la sub lista
struct Tinfo2{
    int id;
    int nota;
};

//Nodo interno, es del sub
struct Nodo2{
    Tinfo2 info;
    Nodo2*sgte;
};

struct Tinfo{
    int legajo;
    //se tiene que llamar igual que mis notas, es decir, Nodo2.
    Nodo2*notas;
};

//Nodo principal
struct Nodo{
    Tinfo info;
    Nodo*sgte;
    
};


int main(){

    Nodo*lista;
    int suma=0;
    int cant=0;

    Nodo*aux=Lista;
    Nodo2*aux2;

    while(aux!=NULL){
        aux2=aux->info.notas;
        while(aux2!=NULL){
            cant++;
            suma=suma+aux2->info.notas;
            aux2=aux2->sgte;
        }
        cout<< "El promedio de: "aux->info.legajo<<"es: "<<suma/cant<<endl;
        suma=0;
        cant=0;
        aux=aux->sgte;
    }
    return 0:
}