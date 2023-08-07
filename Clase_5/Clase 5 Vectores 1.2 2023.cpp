// Name : Vectores 1.2 2023.cpp

#include <iostream>
using namespace std;

// Encabezados funciones y procedimientos
void inicializar(int vec[],int cantP,int ValorIni);
void mostrar (int vec[], int len1);
void cargaMasiva(int vec[], int &len1 ,int cantP);

int main()
{
    //1 Declarar el vector
    int numeros[10];
    int len =0;

    //2 Inicializar el vector
    inicializar(numeros, 10, 0);

    //3 Cargar el vector - CARGA MASIVA
    cargaMasiva(numeros, len,10);

    //5 Mostrar
    mostrar (numeros, len);

    return 0;
}

// Desarrollar las funciones y procedimientos
void inicializar(int vec[],int cantP,int ValorIni){
    for(int i=0; i<cantP; i++){
        vec[i]= ValorIni;

    }
}

void mostrar (int vec[], int len1){
    for(int i=0; i< len1; i++){
        cout<< vec[i]<<endl;
    }
}

void cargaMasiva(int vec[], int &len1 ,int cantP){
    for(int i=0; i<cantP; i++){
        int aux;
        cout<<"Ingrese un valor"<<endl;
        cin>>aux;
        vec[i] = aux;
        len1++;
    }
}