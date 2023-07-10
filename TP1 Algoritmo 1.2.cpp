// Dados dos números calcular, la suma, resta, multiplicación y división. Mostrar los resultados.

// Nota: sólo puede dividir si el segundo número es distinto de 0. Realizar la comprobación.

#include <iostream>
using namespace std;

int main()
{
  float num1; // Variable para almacenar el número ingresado por el usuario.
  float num2; // Variable para almacenar el número ingresado por el usuario.

  cout << "Ingrese su primer numero: ";
  cin >> num1; // Lee la entrada del usuario como un string.

  cout << "Ingrese su segundo numero: ";
  cin >> num2; // Lee la entrada del usuario como un string.

  cout << "La suma es:" << num1 + num2 << endl;
  cout << "La resta es:" << num1 - num2 << endl;
  cout << "La multiplicacion es:" << num1 * num2 << endl;

  if (num2 != 0)
  {
    cout << "La division es:" << num1 / num2 << endl;
    else
    {
      cout << "El segundo numero ingresado debe ser distinto de cero";
    }
  }
  return 0;
}
