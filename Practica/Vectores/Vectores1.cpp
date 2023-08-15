// Name : Ejercicio 1 de Vectores 2023.cpp
//1) Dado un vector Prueba 1 y su len, busque el valor mínimo e imprímalo por pantalla

#include <iostream>
using namespace std;

//Emcabezado de funciones y procedimientos
void inicializar(int vec[], int cantP, int ValorIni);
void insertar(int vec[], int &len1, int valor, int pos);
void mostrar(int vec[], int len1);
void insertarOrdenado(int vec[], int &len1, int valor);

int minimoVector(int vec[], int len);

int main (){
    //1 Declarar el vector
    int prueba1[4];
    int len = 0;
    int n;
    int cont = 0;
    int min;

    //2 Inicializar el vector
    inicializar(prueba1, 4, 0);

    //3 Cargar el vector
    cout << "Ingrese un valor o 0 para terminar" << endl;
    cin >> n;

    while (n != 0 && cont < 4)
    {
        insertarOrdenado(prueba1, len, n);
        cont++;
        cout << "Ingrese un valor o 0 para terminar" << endl;
        cin >> n;
    }

    // 4 Busca el valor minimo
    min = minimoVector(prueba1, len);
    cout << "El valor mínimo es: " << prueba1[min] << endl;
    
    // 5 mostrar
    mostrar(prueba1, len);

    return 0;

}

// Desarrollar las funciones y procedimientos
void inicializar(int vec[], int cantP, int ValorIni)
{
    for (int i = 0; i < cantP; i++)
    {
        vec[i] = ValorIni;
    }
}

void insertar(int vec[], int &len1, int valor, int pos)
{
    // Generer el movimiento de los valores para generar el espacio de carga necesario
    for (int i = len1; i > pos; i--)
    {
        vec[i] = vec[i - 1];
    }
    // Carga el valor
    vec[pos] = valor;
    len1++;
}

int minimoVector(int vec[], int len)
{
    int posmin;
    posmin = 0;
    for (int i = 1; i < len; i++)
    {
        if (vec[posmin] > vec[i])
        {
            posmin = i;
        }
    }
    return posmin;
}

void mostrar(int vec[], int len1)
{
    for (int i = 0; i < len1; i++)
    {
        cout << vec[i] << endl;
    }
}

void insertarOrdenado(int vec[], int &len1, int valor)
{
    // 1 Definir donde lo voy a cargar, buscar la posición en la que lo tengo que insertar
    int i = 0;
    while (i < len1 && vec[i] <= valor)
    {
        i++;
    }
    // 2 CARGAR el valor en la posición que determiné
    if (i == len1)
    {
        vec[len1] = valor;
        len1++;
    }
    else
        insertar(vec, len1, valor, i);
}