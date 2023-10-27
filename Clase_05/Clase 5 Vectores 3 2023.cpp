// Name : Vectores 3 2023.cpp

#include <iostream>
using namespace std;

// Encabezados funciones y procedimientos
void inicializar(int vec[],int cantP,int ValorIni);
void mostrar (int vec[], int len1);
void insertar( int vec[], int &len1, int valor, int pos);
void insertarOrdenado(int vec[], int &len1, int valor);

void sumarizo(int vec[], int lent1);

int main()
{
    //1 Declarar el vector
    int numeros[10];
    int len =0;
    int n;
    int cont =0;


    //2 Inicializar el vector
    inicializar(numeros,10,0);

    //3 Cargar el vector - INSERTAR ORDENADO
   cout<<"Ingrese un valor o 0 para terminar"<<endl;
   cin>>n;

   while(n!=0 && cont<10){
    insertarOrdenado(numeros, len, n);
    //Cuento para no pasarme de la capacidad del vector
    cont++;
    cout<<"Ingrese un valor o 0 para terminar"<<endl;
    cin>>n;
   }

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

void insertarOrdenado(int vec[], int &len1, int valor){
    // 1 Definir donde lo voy a cargar, buscar la posición en la que lo tengo que insertar
    int i=0;
    while( i <len1 && vec[i]<= valor){
        i++;
    }
    //2 CARGAR el valor en la posición que determiné 
    if (i==len1){
        vec[len1]=valor;
        len1++;
    }else insertar (vec, len1, valor,i);
}
