// Name : Ejercicio 12 2023.cpp

//El promedio del primer parcial
#include <iostream>
#include <stdio.h>
using namespace std;

struct Alumno{
int legajo;
int dni;
int nota1;
int nota2;
};

int main(){
    int suma = 0;
    int cont=0;
    Alumno = raux;

    //1) Definir el puntero al archivo
    FILE*Alum;

    //2) Abrir el archivo en modo Lectura
    Alum = fopen ("k1151.dat", "rb");

    //3) Leer mi archivo
    fread(&raux,sizeof(struct Alumno),1,Alum);

    while(!feof (Alum)){
        //4 Procesar
        suma = suma + raux.nota1;
        cont++;

        cout << "----------"<<endl;
        cout <<"Legajo"<< raux.legajo<<endl;
        cout <<"DNI"<< raux.dni<<endl;
        cout <<"Nota 1: "<< raux.nota1<<endl;
        cout <<"Nota 2: "<< raux.nota2<<endl;

        fread(&raux,sizeof(struct Alumno),1,Alum);
    }
    fclose(Alum);
    cout<< "El promedio del primer parcial es: " <<suma/cont << endl;

    return 0;
}
