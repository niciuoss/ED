#include "Ponto.h"
#include <math.h>
#include <iostream>

struct Ponto{
    int x;
    int y;
}; 


Ponto *pto_cria(double x, double y){
    Ponto *p = new Ponto;
    p->x = x;
    p->y = y;

    return p; 
}

void pto_libera(Ponto *p) { 
    if(p != nullptr) {
        delete p;
        std::cout << "ponto liberado" << std::endl;
    }
} 
double pto_getX(Ponto *p){
    return p->x;
}

double pto_getY(Ponto *p){
    return p->y;
}

void pto_setX(Ponto *p, double x){
    p->x = x;
}

void pto_setY(Ponto *p, double y){
    p->y = y;
}

double pto_distancia(Ponto* p1, Ponto* p2){
    double dx = p2->x - p1->x;
    double dy = p2->y- p1->y;
 return sqrt(dx*dx + dy*dy);
    //return resultado;
}

