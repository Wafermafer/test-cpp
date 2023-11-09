// Name : Lista Ordenar Archivo.cpp

#include <iostream>
#include <stdio.h>
using namespace std;

// Registro
struct alum{
    int legajo;
    int nota;
};

struct Nodo{
    int alum;
    Nodo*sgte;
};

// Encabezados funciones y procedimientos
//NOTA sustituyo int por alum
void insertarOrdenado(Nodo*&Lista, alum valor);
void mostrar(Nodo *Lista);
void liberar(Nodo *&Lista);

int main()
{
    // antes definir la lista
    Nodo*Lista = NULL;
    // Para hacer el fread,variable auxiliar
    alum raux;

    // 1)Declarar el puntero
    FILE *k1151;

    // 2)Apertura, definir en que modo en este caso para leer porque ya "existe"
    k1151 = fopen("k1151.dat", "rb");

    // 3) Comenzar la lectura
    fread(&raux, sizeof(struct alum), 1, k1151);

    // Mientras no sea final del archivo
    while (!feof(k1151))
    {
        insertarOrdenado(Lista, raux)
            // LECTURA ANTES QUE TERMINE EL WHILE, NO se puede olvidar porque sino entro en un ciclo infinito
            fread(&raux, sizeof(struct alum), 1, k1151);
    }
    // 4) CERRAR
    fclose(k1151);

    // abro el archivo para escribir
    k1151 = fopen("k1151.dat", "wb");

    // creo puntero auxiliar y le asigno lista, para no perder la referencia de la lista.Por lo que necesito un puntero que vaya avanzando en la lista. Para poder escribir el archivo y cuando se termine seguir teniendo la lista.
    Nodo*aux=lista;

    while(aux!=NULL){
        //de donde va a leer, es decir, del registro de donde necesito escribir;
        fwrite(&aux->info,sizeof(struct alum),1, k1151);
        //avanzar al sgte nodo
        aux=aux->sgte;
    }
    fclose(k1151);

    //Asegurarme de liberar siempre, mostrar es opcional en este caso
    mostrar(lista);
    liberar(lista);

    return 0;
}

// Desarrollo de procedimiento y funciones

//Modifico estructura, se muestra CAMPO A CAMPO
void mostrar(Nodo *Lista)
{
    Nodo*aux = Lista;
    while (aux != NULL)
    {
        cout << "El legajo es: " << aux->info.legajo << endl;
        cout << "La nota es: " << aux->info.nota << endl;
        aux = aux->sgte;
    }
}

void liberar(Nodo *&Lista)
{
    // Creo un puntero auxiliar
    Nodo *aux;
    while (Lista != NULL)
    {
        aux = Lista;
        Lista = Lista->sgte;
        delete (aux);
    }
}

//Modifico estructura, sustituyo int por alum
void insertarOrdenado(Nodo*&Lista, alum valor)
{
    // crear el nodo
    Nodo *nuevo = new Nodo();
    // cargar el nodo (EL REGISTRO SE CARGA CAMPO A CAMPO), en este caso legajo y nota
    nuevo->info.legajo = valor.legajo;
    nuevo->info.nota = valor.nota;
    nuevo->sgte = NULL; // porque no se donde va a ir
    // Enlazarlo
    Nodo *aux = Lista; // Recorro sin modificar la lista
    Nodo *ant = NULL;  // Este me va a permitir enlazar
    // BUSCAR (COMPARO CON EL VALOR LEGADO)
    while (aux != NULL && aux->info.legajo < valor.legajo){
        ant = aux;
        aux = aux->sgte; // avanzabamos en la lista
    }
    // no entre al while 1) lista vacia 2)debo insertar al principio
    if (ant == NULL)
    {
        lista = nuevo;
        // nuevo->sgte=aux;
    }
    else
    { // Entre al while, 1) en alguna parte de la lista  2) agregar al final
        ant->sgte = nuevo;
        // nuevo->sgte=aux;
    }
    nuevo->sgte = aux;
    //puede usarse aca porque se repite en ambos casos
}