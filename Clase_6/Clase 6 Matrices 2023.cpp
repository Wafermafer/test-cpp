// Name : VMatrices 2023.cpp

#include <iostream>
using namespace std;

// Encabezados funciones y procedimientos

int main()
{
    int vec[10]; // vector de 10 posiciones
    // TipoDato nombreMatriz [fila][columna]
    int mat[10][2];

    // Carga matriz
    for (int i = 0; i < 10; i++)
    {
        // i fila
        for (int j = 0; j < 2; j++)
        {
            cout << "Ingrese un valor para la matriz" << endl;
            cin >> mat[i][j];
        }
    }

    // Mostrar la matriz
    for (int i = 0; i < 10; i++)
    {
        // i filas
        for (int j = 0; j < 2; j++)
        {
            cout << " " << mat[i][j];
        }
        cout << endl;
    }

    return 0;
}