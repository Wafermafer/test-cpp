// Name : Registros 2023.cpp

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

int main()
{
    // 1) Definir el VECTOR DE TIPO DATO alumno
    Alumno vec[5];
    // Por cada vector, un len
    int len = 0;

    // Creo mi REGISTRO para inicializar mi vector.(VARIABLE DE TIPO REGISTRO)
    Alumno RegIni;

    int sum = 0;

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

        sum = sum + vec[i].Nota;
        len++;
    }

    cout << "El promedio de las notas de los alumnos es: " << sum / 5 << endl;

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