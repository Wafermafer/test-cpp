// Name : Vectores 2023.cpp

#include <iostream>
using namespace std;

// Encabezados funciones y procedimientos
void inicializar(int vec[],int cantP,int ValorIni);
void mostrar (int vec[], int len1);

int main()
{
    //1 Declarar el vector
    int numeros[10];
    int len =0;

    //2 Inicializar el vector
    inicializar(numeros, 10, 0);

    //3 Cargar el vector - CARGA DIRECTA
    numeros[0] =2;
    len++;
    numeros[1] =4;
    len++;
    numeros[2] =6;
    len++;
    numeros[3] =8;
    len++;


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