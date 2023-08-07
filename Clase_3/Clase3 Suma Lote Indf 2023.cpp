// Name : Suma de Lote Indefinido 2023.cpp

#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    int num;
    int suma = 0;

    // 1) Pedir los valores al usuario
    cout << "Ingrese un valor o  ingrese un número negativo para terminar" << endl;

    // 2) Leer
    cin << num;

    // 3) Mientras ese valor sea mayor o igual que 0, sumar ese valor y pedir uno nuevo
    while (num >= 0)
    {
        suma = suma + num;
        cout << "Ingrese un valor o  ingrese un número negativo para terminar" << endl;
        cin << num;
    }

    // 4) Mostrar la suma
    cout << "La suma del Lote ingresado es:" << suma << endl;

    return 0;
}