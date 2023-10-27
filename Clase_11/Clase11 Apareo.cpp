// Name : Apareo 2023.cpp

#include <iostream>
#include <stdio.h>
using namespace std;

struct Alum{
    int legajo;
    int dni;
    int Nota1;
    int Nota2;
};

int main()
{
    //1.Definir puntero
    FILE *A;
    FILE *B;
    FILE *C;

    //2.Abrir para leer
    A=fopen("ArchA.dat", "rb");
    B=fopen("ArchB.dat", "rb");
    
    //2.Abrir para escribir
    C=fopen("ArchC.dat", "wb");

    //3. Los registros
    Alum rauxA;
    Alum rauxB;

    //Para leer
    fread(&rauxA, sizeof(struct Alum), 1, A);
    fread(&rauxB, sizeof(struct Alum), 1, B);

    //Solo sirve para cuando los 2 tienen contenido
    while((!feof(A))&& (!feof(B))){
        if (rauxA.legajo < rauxB.legajo){
            fwrite(&rauxA,sizeof (struct Alum), 1,C);
            fread(&rauxA, sizeof(struct Alum), 1, A);
        }else{
           fwrite(&rauxB,sizeof (struct Alum), 1,C); 
           fread(&rauxB, sizeof(struct Alum), 1, B);
        }
    }

    while (!feof(A))
    {
       fwrite(&rauxA,sizeof (struct Alum), 1,C);
       fread(&rauxA, sizeof(struct Alum), 1, A); 
    }

    while (!feof(B))
    {
        fwrite(&rauxB,sizeof (struct Alum), 1,C); 
        fread(&rauxB, sizeof(struct Alum), 1, B);
    }
    
    fclose(A);
    fclose(B);
    fclose(C);
    
  return 0;
}