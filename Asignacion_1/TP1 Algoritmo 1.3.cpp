// Dados 10 valores ingresados por el usuario, calcular el promedio.

#include <iostream>
using namespace std;

int main()
{
    float num;
    float total = 0;

    for (int i = 0; i < 10; i++)
    {

        cout << "Ingrese un valor" << endl;
        cin >> num;
        total = total + num;
    }

    cout << "El promedio es:" << total / 10 << endl;
    return 0;
}
