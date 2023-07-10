// Dado un lote de valores ingresados por el usuario (que finaliza el ingreso con un valor negativo) calcular y mostrar la suma y el promedio.

#include <iostream>
using namespace std;

int main()
{
  float num;
  float total = 0;
  int c = 0;

  while (num >= 0)
  {
    cout << "Ingrese un valor" << endl;
    cin >> num;
    total = total + num;
    c = c + 1;
  }
  cout << " La suma es:" << total << endl;
  cout << "El promedio es:" << total / c << endl;

  cin >> num;

  return 0;
}
