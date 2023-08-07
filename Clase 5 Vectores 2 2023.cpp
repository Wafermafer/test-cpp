// Name : Vectores 2 2023.cpp

#include <iostream>
using namespace std;

// Encabezados funciones y procedimientos
void inicializar(int vec[],int cantP,int ValorIni);
void mostrar (int vec[], int len1);
void insertar( int vec[], int &len1, int valor, int pos);

void sumarizo(int vec[], int lent1);

int main()
{
    //1 Declarar el vector
    int numeros[10];
    int len =0;

    //2 Inicializar el vector
    inicializar(numeros, 10, 0);

    //3 Cargar el vector - INSERTAR
    numeros[0]=2;
    len++;
    numeros[1]=4;
    len++;
    numeros[2]=6;
    len++;
    numeros[3]=8;
    len++;
    insertar(numeros,len,3,1);

    //4 Sumarizo el vector
     sumarizo(numeros,len);

    //5 Mostrar el vector
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



void sumarizo(int vec[], int lent1)
{
    int suma =0;
    for (int i = 0; i < lent1; i++)
    {
       suma= suma + vec[i];
    }
    cout<<suma<<endl;

}

void insertar( int vec[], int &len1, int valor, int pos){
    //Generer el movimiento de los valores para generar el espacio de carga necesario
    for(int i=len1; i>pos; i--){
        vec[i]=vec[i-1];
    }
    //Carga el valor
    vec[pos]=valor;
    len1++;

}