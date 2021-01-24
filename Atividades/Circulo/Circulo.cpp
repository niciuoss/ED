#include "Circulo.h"
#include <math.h>

struct Circulo{
    Ponto *centro;
    double raio;
}; 

Circulo *circ_cria(double raio, Ponto *centro){
    Circulo *c = new Circulo;
    c-> centro = centro;
    c-> raio = raio;

    return c;
}

void circ_libera(Circulo *c){
    delete[] c;
}

// setters
void circ_setRaio(Circulo *c, double raio){
    c-> raio = raio;
}
void circ_setCentro(Circulo *c, Ponto *p){
    c-> centro = p;
}
void circ_setX(Circulo *c, double x){
    pto_setX(c-> centro, x);
} 
void circ_setY(Circulo *c, double y){
    pto_setY(c-> centro, y);
} 

// getters
double circ_getRaio(Circulo *c){
    return c-> raio;
}
Ponto *circ_getCentro(Circulo *c){
    return c-> centro;
}
double circ_getX(Circulo *c){
    return pto_getX(c-> centro);
} 
double circ_getY(Circulo *c){
    return pto_getY(c-> centro);
} 
double circ_getArea(Circulo *c){
     
}

bool circ_interior(Circulo *c, Ponto *p){

}