// Dado un lote de valores ingresados por el usuario (que finaliza el ingreso con un valor negativo) calcular y mostrar la suma y el promedio.

#include <iostream>
using namespace std;

int main()
{
  float userInput;
  float acum = 0;
  int contador = 0;

  while (userInput >= 0)
  {
    cout << "Ingrese un valor" << endl;
    cin >> userInput;
    acum = acum + userInput;
    contador = contador + 1;
  }
  cout << " La suma es:" << acum << endl;
  cout << "El promedio es:" << acum / contador << endl;

  cin >> userInput;

  return 0;
}
