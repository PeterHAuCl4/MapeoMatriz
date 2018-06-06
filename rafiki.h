#ifndef RAFIKI_H
#define RAFIKI_H

#include<iostream>
#include <time.h>

#define filas 9
#define columnas 9
#define Gioba 1

using namespace std;

//int matriz[5][5] = {
//    {1,0,0,1,1},
//    {1,1,1,0,0},
//    {0,0,0,0,1},
//    {0,0,1,1,0},
//    {1,1,1,0,0}
//};

typedef struct pilas P;

struct pilas
{
    int pastel[1][1];

    P *pasta;
};

int crearMatriz();
int contarNu();
void mapeoPro();
void mapeoVecinos();
void Pos(int x, int y);
void Mostrar();
void mapeoN();


#endif // RAFIKI_H
