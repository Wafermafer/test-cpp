// Name : Registros 2 2023.cpp

#include <iostream>
using namespace std;

// Defino los Tipos de Datos
struct Alumno
{
    int Legajo;
    int Curso;
    int Nota;
};

// Encabezados funciones y procedimientos.
void inicializar(Alumno vec[], int cantP, Alumno ValorIni);
void mostrar(Alumno vec[], int len1);
int maximoVector(Alumno vec[], int len);

int main()
{
    // 1) Definir el VECTOR DE TIPO DATO alumno
    Alumno vec[5];
    // Por cada vector, un len
    int len = 0;

    // Creo mi REGISTRO para inicializar mi vector.(VARIABLE DE TIPO REGISTRO)
    Alumno RegIni;

    int sum = 0;
    int aux;

    // Campos
    RegIni.Legajo = 0;
    RegIni.Curso = 0;
    RegIni.Nota = 0;

    // 2) Inicializar
    inicializar(vec, 5, RegIni);

    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese un legajo" << endl;
        cin >> vec[i].Legajo;

        cout << "Ingrese un número de curso" << endl;
        cin >> vec[i].Curso;

        cout << "Ingrese la nota" << endl;
        cin >> vec[i].Nota;

        len++;
    }

    aux = maximoVector(vec, len);
    cout<< "La nota maxima del legajo es:" << vec[aux].Legajo << " y fue: "<< vec[aux].Nota << endl;
    mostrar(vec, len);
    return 0;
}

// Desarrollar las funciones y procedimientos
void inicializar(Alumno vec[], int cantP, Alumno ValorIni)
{
    for (int i = 0; i < cantP; i++)
    {
        vec[i].Legajo = ValorIni.Legajo;
        vec[i].Curso = ValorIni.Curso;
        vec[i].Nota = ValorIni.Nota;
    }
}

void mostrar(Alumno vec[], int len1)
{
    for (int i = 0; i < len1; i++)
    {
        cout << vec[i].Legajo << "." << vec[i].Curso << "." << vec[i].Nota << endl;
    }
}

int maximoVector(Alumno vec[], int len)
{
    int posMax = 0;

    for (int i = 1; i < len; i++)
    {
        if (vec[i].Nota > vec[posMax].Nota)
        {
            posMax = i;
        }
    }
    return posMax;
}