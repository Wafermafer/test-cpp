// Name : Corte de Control 2023.cpp

#include <iostream>
#include <stdio.h>
using namespace std;

struct multa{
    int dominio;
    int tipo;
    int imp;
};

int main(){

    //1er paso: Definir puntero
    FILE *Multas;

    //2do paso: Abrir el archivo para lectura
    Multas=fopen("multas.dat","rb");

    //LA VARIABLE AUXILIAR
    multa raux;

     //VARIABLES PARA RESULTADOS
    int anterior;
    int sumaMultas;

    //3er paso: Leer
    fread(&raux,sizeof (struct multa), 1, Multas);

    //3er paso
    while (!feof(Multas)){
        anterior =raux.dominio;
        sumaMultas=0;

        //CONCATENEO
        while((!feof(Multas)) && (anterior ==raux.dominio)){
            sumaMultas =sumaMultas + raux.imp;         
            fread(&raux,sizeof (struct multa), 1, Multas);
        }
        cout << "Dominio " <<anterior<< "tiene un total de multas de: " << sumaMultas<<endl;

    }

    //4to Cierro
    fclose (Multas);

    return 0;
}