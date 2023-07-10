#include <iostream>
#include <string> // Necesario para usar la función std::stoi().

int main()
{
    std::string input; // Variable para almacenar la entrada del usuario.
    int num;           // Variable para almacenar el número ingresado por el usuario.

    do
    {
        std::cout << "Introduce un numero: ";
        std::cin >> input; // Lee la entrada del usuario como un string.

        try
        {
            num = std::stoi(input); // Convierte el string a un número entero.
        }
        catch (...)
        { // Captura cualquier excepción que pueda ocurrir durante la conversión.
            std::cout << "Entrada no valida. Por favor, introduce un numero valido.\n";
            continue; // Vuelve al principio del bucle.
        }

        // Si la conversión fue exitosa, sale del bucle.
        break;

    } while (true);

    std::cout << "Tu numero es: " << num << std::endl;
    std::cout << "El doble de tu numero es: " << num * 2 << std::endl;

    // Espera a que el usuario presione una tecla antes de salir.
    std::cout << "Presiona una tecla para salir...";
    std::cin.get();
    std::cin.get();
    return 0;
}
