// Name : Ejercicio 12 2023.cpp

// En un torneo de fútbol participan k equipos. El torneo se juega con el sistema
// de “todos contra todos”. Por cada partido en el que participa un equipo se dispone
// de la siguiente información:
//  *código de equipo (codEq) y
//  *código de resultado (“P” = perdido, “E” = empatado, “G”= ganado).
// Se dispone de un lote de datos conteniendo todos los resultados del torneo,
// agrupados por codEq.
// Desarrollar el programa que imprima, por cada equipo, su código y el puntaje
// total que obtuvo considerando que suma 3 puntos por cada partido ganado y 1
// punto por cada partido empatado.

#include <iostream>
using namespace std;

// Tipo de dato
struct Resultado
{
    // Campos
    int codEq;
    char rdo;
};

int main()
{
    // 1) Definir el vector de resultados
    Resultado resultados[90];

    // falta cargar resultados en el vector resultados

    // cada vector tiene su len, ademas el len vale 90 porque ya esta cargado.
    int len = 0;

    // Sumar el puntaje por equipo
    int acumuladoEquipoUno = 0;
    int acumuladoEquipoDos = 0;

    // El codigo de cada equipo
    int equipoUno;
    int equipoDos;

    equipoUno = resultados[0].codEq; // Codigo del equipo

    for (int i = 0; i < len; i++)
    {
        if (resultados[i].codEq == equipoUno)
        {
            // Acumulo el puntaje por equipo
            acumuladoEquipoUno = acumuladoEquipoUno + puntaje(resultados[i].rdo);
        }
        else
        {
            equipoDos = resultados[i].codEq;
            // Acumulo el puntaje por equipo
            acumuladoEquipoDos = acumuladoEquipoDos + puntaje(resultados[i].rdo);
        }
    }

    cout << "El equipo: " << equipoUno << " sumo los siguientes puntos: " << acumuladoEquipoUno << endl;
    cout << "El equipo: " << equipoDos << " sumo los siguientes puntos: " << acumuladoEquipoDos << endl;

    return 0;
}

int puntaje(char resultado)
{
    switch (resultado)
    {
    case 'p':
    case 'P':
        return 0;
    case 'e':
    case 'E':
        return 1;
    case 'g':
    case 'G':
        return 3;
    default:
        // Fallo al no encontrar el resultado
        return 0;
    }
}