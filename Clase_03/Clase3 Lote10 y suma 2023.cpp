// Name : Lote de 10 y sumar 2023.cpp

#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    int num;
    int suma = 0;

    for (int i = 0; i < 10; i++)
    {
        // 1) Pedir los valores al usuario
        cout << "Ingrese un valor" << endl;
        // 2) Leer
        cin << num;
        // 3) Sumando cada valor
        suma = suma + num;
    }
    // 4) Mostrar la suma total
    cout << "El resultado de la suma de los 10 números es:" << suma << endl;

    return 0;
}