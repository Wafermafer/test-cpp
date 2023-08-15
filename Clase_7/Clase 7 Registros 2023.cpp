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

int main()
{
    // 3 Variavles del Topo de Dato Alumno
    Alumno x;
    Alumno y;
    Alumno z;

    // 3 Variables x, y z del Tipo de Dato Alumno

    int sum = 0;
    cout << "Ingrese un legajo" << endl;
    cin >> x.Legajo;
    cout << "Ingrese un número de curso" << endl;
    cin >> x.Curso;
    cout << "Ingrese la nota" << endl;
    cin >> x.Nota;

    cout << "Ingrese un legajo" << endl;
    cin >> y.Legajo;
    cout << "Ingrese un número de curso" << endl;
    cin >> y.Curso;
    cout << "Ingrese la nota" << endl;
    cin >> y.Nota;

    cout << "Ingrese un legajo" << endl;
    cin >> z.Legajo;
    cout << "Ingrese un número de curso" << endl;
    cin >> z.Curso;
    cout << "Ingrese la nota" << endl;
    cin >> z.Nota;

    sum = x.Nota + y.Nota + z.Nota;
    cout<< "El promedio de las notas de los alumnos es: " << sum / 3 << endl;

    return 0;
}