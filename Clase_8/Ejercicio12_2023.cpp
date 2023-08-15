// Name : Ejercicio 12 2023.cpp

//En un torneo de fútbol participan k equipos. El torneo se juega con el sistema 
//de “todos contra todos”. Por cada partido en el que participa un equipo se dispone
//de la siguiente información:
// *código de equipo (codEq) y
// *código de resultado (“P” = perdido, “E” = empatado, “G”= ganado).
//Se dispone de un lote de datos conteniendo todos los resultados del torneo,
//agrupados por codEq.
//Desarrollar el programa que imprima, por cada equipo, su código y el puntaje
//total que obtuvo considerando que suma 3 puntos por cada partido ganado y 1
//punto por cada partido empatado.

#include <iostream>
using namespace std;

// Tipo de dato
struct Equipo
{
    //Campos
    int codEq;
    char rdo;
};

int main(){
    //1) Definir el vector
    equipo vec[90];
    // cada vector tiene su len, ademas el len vale 90 porque ya esta cargado.
    int len; 

    //Sumar el puntaje por equipo
    int sum=0;

    //El codigo de cada equipo
    int aux;
    int aux2;

    aux= vec[0].codEq; // Codigo del equipo

    for (int i=0; i<len; i++){
        if (vec[i].codEq == aux){
            aux2=puntaje(vec[i].rdo);
            //Acumulo el puntaje por equipo
            sum= sum+aux2;
        }else{
            cout<<"El equipo: "<< aux<<"sumo los siguientes puntos: " <<sum<<endl;
            //Asigno el nuevo codigo del equipo
            aux=vec[i].codEq;

            //seria sum=0; sum = sum +puntaje (Se simplifico)
            sum=puntaje(vec[i].rdo); 

        }
    }


    return 0;
}

int puntaje (char x){
    if( x == P){
        return 0;
    }else (if x == E){
        return 1;
    }else return 3;
    
}