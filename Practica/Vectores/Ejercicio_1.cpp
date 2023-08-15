// Name : Ejercicio 1 de Vectores 2023.cpp
//1) Dado un vector Prueba 1 y su len, busque el valor mínimo e imprímalo por pantalla

#include <iostream>
using namespace std;

// Encabezados funciones y procedimientos
void inicializar(int vec[], int cantP, int ValorIni);
void mostrar(int vec[], int len1);
void insertar(int vec[], int &len1, int valor, int pos);
void insertarOrdenado(int vec[], int &len1, int valor);
int buscar(int vec[], int len, int valor);
int minimoVector(int vec[], int len);


int main()
{
    // 1 Declarar el vector
    int prueba1[4];
    int len = 0;
    int n;
    int cont = 0;
    int min;

    // 2 Inicializar el vector
    inicializar(prueba1, 4, 0);

    // 3 Cargar el vector - INSERTAR ORDENADO
    cout << "Ingrese un valor o 0 para terminar" << endl;
    cin >> n;

    while (n != 0 && cont < 4)
    {
        insertarOrdenado(prueba1, len, n);
        // Cuento para no pasarme de la capacidad del vector
        cont++;
        cout << "Ingrese un valor o 0 para terminar" << endl;
        cin >> n;
    }

    // 4 Buscar el valor minimo
    min = minimoVector(prueba1, len);
    cout << "El valor mínimo es: " << prueba1[min] << endl;

    // 5 Mostrar el vector
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

void mostrar(int vec[], int len1)
{
    for (int i = 0; i < len1; i++)
    {
        cout << vec[i] << endl;
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

int buscar(int vec[], int len, int valor)
{
    int i = 0;
    while (i < len && vec[i] != valor)
    {
        i++;
    }
    if (i == len)
    {
        return -1;
    }
    else
        return i;
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