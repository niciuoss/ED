#include "Circulo.h"
#include <math.h>
#include <iostream>

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
    if(c != nullptr){
        pto_libera(c->centro);
        delete[] c;
        std::cout << "circulo liberado" << std::endl;
    }
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
    double area = (M_PI * pow (c->raio, 2));

    return area; 
}

// Recebe um Ponto p e um Circulo c e retorna:
// true: se o ponto esta contido no circulo;
// false: caso contrario.
bool circ_interior(Circulo *c, Ponto *p){
    double dist = pto_distancia(c->centro, p);
    if(dist <= circ_getRaio(c)){
        return true;
    } else {
        return false;
    }
}
