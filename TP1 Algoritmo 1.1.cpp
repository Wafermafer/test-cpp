// Se necesita obtener el promedio de un estudiante a partir de sus tres notas parciales, las mismas son ingresadas por el usuario.

#include <iostream>
using namespace std;

int main()
{

  int num1; // Variable para almacenar el número ingresado por el usuario.
  int num2; // Variable para almacenar el número ingresado por el usuario.
  int num3; // Variable para almacenar el número ingresado por el usuario.

  int sum = 0;

  cout << "Ingrese su primera nota: ";
  cin >> num1; // Lee la entrada del usuario como un string.

  cout << "Ingrese su primera nota: ";
  cin >> num2; // Lee la entrada del usuario como un string.

  cout << "Ingrese su primera nota: ";
  cin >> num3; // Lee la entrada del usuario como un string.

  sum = num1 + num2 + num3;

  cout << "El promedio de sus 3 notas es:" << sum / 3 << endl;

  return 0;
}
