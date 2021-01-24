#include "Ponto.h"
#include <math.h>

struct Ponto{
    int x;
    int y;
}; 


Ponto *pto_cria(double x, double y){
    Ponto *p = new Ponto;
    p->x = x;
    p->y = y;

    return p; 
};

void pto_libera(Ponto* p){
    delete[] p;
};

double pto_getX(Ponto *p){
    return p->x;
};

double pto_getY(Ponto *p){
    return p->y;
};

void pto_setX(Ponto *p, double x){
    p->x = x;
};

void pto_setY(Ponto *p, double y){
    p->y = y;
};

double pto_distancia(Ponto* p1, Ponto* p2){
    double resultado = 0.0;
    double xa = p1->x;
    double ya = p1->y;
    double xb = p2->x;
    double yb = p2->y;
    
    resultado = sqrt(pow(xb-xa, 2) + pow(yb-ya,2));
};

