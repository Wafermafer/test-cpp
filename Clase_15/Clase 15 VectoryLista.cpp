// Name : Union Cola Pila.cpp

//Se tiene un vector de Stock, que tiene 20 posiciones, se tiene el Id del producto y la cantidad de unidades en stock y se tiene una lista con lo que ingreso el dia de hoy.

#include <iostream>
#include <stdio.h>
using namespace std;

//Definir struck
struct prod{
    int id;
    int stock;

}
struct Nodo{
    prod info;
    Nodo*sgte;
};

// Encabezados funciones y procedimientos
void liberar(Nodo*&Lista);
//el tipo de dato es prod
int buscar(prod vec[], int len, prod valor);

int main(){
    //Defino un vector:Tipo de dato, nombre del vector y cantidad de posiciones
    prod Vec [20];
    //Todo vector viene con su len y en este caso ya esta cargado
    int len;
    //Lista con los pedidos del dia
    Nodo*lista;
    //necesito un entero para guardar la posicion, que va a encontrar o no ese buscar
    int pos;
    //puntero auxiliar y le asigno la lista
    Nodo*aux=lista;

    while (aux!=NULL){
        //CON aux->info paso el registro
        pos=buscar(Vec,len,aux->info);
        //Si me devuelve -1 es que no lo ha encontrado en vectores
        if(pos!=-1){
            //incremente en la posicion del vector donde se encuentra el ID que tengo, la cantidad de unidades que vino en la lista
            Vec[pos].stock= Vec[pos].stock + aux->info.stock; 
             
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

int buscar(prod vec[], int len, prod valor){
    int i=0;
    //MODIFICO agregando id
    while (i<len && vec [i].id != valor.id){
        i++;
    }
    if (i==len){
        return -1;
    }else
    return i;
}