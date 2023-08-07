// Name : Positivo o Negativo 2023.cpp

#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables
    int num;

    // 1) Pedir los valores al usuario
    cout << "Ingrese un valor entero" << endl;

    // 2) Leer el valor
    cin >> num;

    // 3) Preguntar si es mayor a 0
    if (num > 0)
    {

        // 4) Mostrar si es positivo o negativo
        cout << "El valor es POSITIVO" << endl;
    }
    else
    {
        cout << "El valor es NEGATIVO" << endl;
    }
    return 0;
}