// Name : Ejercicio.cpp

//Se tiene la accion adicional, la de contar por cada Nodo que tenga la lista una reserva mas
//Se tiene un vector que era el codigo de habitacion, la cantidad de reserva y la cantidad de dias reservados
//Y viene una lista con las reservas para ese dia,codigo de la habitacion y cant de dias reservados
// Y cada vez que estaba ese Nodo, se tiene que incrementar en 1, la cantidad de reservas que estan en el vector y aumentar la cant de dias en el vector

#include <iostream>
#include <stdio.h>
using namespace std;

//Definir struct
struct hotel{
    int codHab;
    int reservas;
    int dias;

}
//La lista solo tiene estos 2 campos
struct hab{
    int codHab;
    int dias;
}
struct Nodo{
    hab info;
    Nodo*sgte;
};

// Encabezados funciones y procedimientos
void liberar(Nodo*&Lista);
//el tipo de dato es prod
int buscar(hotel vec[], int len, hotel valor);

int main(){
    //Defino un vector:Tipo de dato, nombre del vector y cantidad de posiciones
    hotel Vec [20];
    //Todo vector viene con su len y en este caso ya esta cargado
    int len;

    Nodo*lista;
    //necesito un entero para guardar la posicion, que va a encontrar o no ese buscar
    int pos;
    //puntero auxiliar y le asigno la lista
    Nodo*aux=lista;
    while (aux!=NULL){
        //CON aux->info paso el registro
        pos=buscar(Vec,len,aux->info.codHab);
        //Si me devuelve -1 es que no lo ha encontrado en vectores
        if(pos!=-1){
            //incremente en 1 la cant de reservas
            Vec[pos].reservas++;
            //la cantidad de unidades que vino en la lista
            Vec[pos].dias=Vec[pos].dias + aux->info.dias;
             
        }
        //avanzo la lista
        aux=aux->sgte; 
    }
    liberar(lista);
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

int buscar(hotel vec[], int len, int valor){
    int i=0;
    //MODIFICO agregando id
    while (i<len && vec [i].codHab != valor){
        i++;
    }
    if (i==len){
        return -1;
    }else
    return i;
}