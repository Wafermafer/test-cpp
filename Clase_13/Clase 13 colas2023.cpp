// Name : Pilas 2023.cpp

#include <iostream>
#include <stdio.h>
using namespace std;

struct Nodo{
    // << OJO <<
    int info;
    Nodo *sgte;
};

void agregar(Nodo*&cfte, Nodo*&cfin,int valor);
//Tinfo suprimir();
//"int suprimir" varia dependiendo del "int info"; estan extrechamente relacionados <<OJO<<
//El tipo de dato de retorno es el Tinfo
int suprimir(Nodo*&cfte, Nodo*&cfin); 


int main()
{
//Definir el puntero cola
Nodo*colafte=NULL;
Nodo*colafin=NULL;

int rdo; 

agregar(colafte,colafin,1);
agregar(colafte,colafin,2);
agregar(colafte,colafin,3);

rdo= suprimir(colafte,colafin);
cout<<"el valor extraido es: "<<rdo << endl;

rdo= suprimir(colafte,colafin);
cout<<"el valor extraido es: "<<rdo << endl;

rdo= suprimir(colafte,colafin);
cout<<"el valor extraido es: "<<rdo << endl;

  return 0;
}

//Desarrollo de procedimiento y funciones

void agregar(Nodo*&cfte, Nodo*&cfin,int valor){
    //Crear nodo --> Pedido de memoria

    //Cargarlo con el valor

    //encolarlo
}