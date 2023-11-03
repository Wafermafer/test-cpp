// Name : Ejercicio colas 2023.cpp

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

int carga;
 cout<<"ingrese un valor y termine con 0"<<endl;
 cin>>carga;

 while(carga!=0){                //CAMBIAR ESTO POR UN FOR
    agregar(colafte,colafin,carga);
    cout<<"ingrese un valor y termine con 0"<<endl;
    cin>>carga;
 }
 //tengo la cola cargada
 int rdo;
    while(colafte!=NULL){
        rdo=suprimir(colafte,colafin);
        cout<<"el valor ingresado fue: "<<endl;
    }
    //liberé TODA LA MEMORIA de la cola


  return 0;
}

//Desarrollo de procedimiento y funciones

void agregar(Nodo*&cfte, Nodo*&cfin,int valor){
    //Crear nodo --> Pedido de memoria
    Nodo*nuevo=new Nodo();
    //Cargarlo con el valor
    nuevo->info=valor;
    nuevo->sgte=NULL;
    //encolarlo
    //Sino tengo elementos
    if(cfte==NULL){
      cfte=nuevo;
      //cfin=nuevo;   ----OJO----
    //En caso de no estar vacia, mirar al ultimo
    }else{
      cfin->sgte=nuevo;
      //cfin=nuevo;  ---  OJO ----
    }
    //Lo uso mejor aca porque lo uso en ambos casos
    cfin=nuevo;
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