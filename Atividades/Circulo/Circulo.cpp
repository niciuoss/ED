#include "Circulo.h"
#include <math.h>
#include <iostream>

using namespace std;

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
    double area = (M_PI * pow (c->raio, 2));

    return area; 
}

// Recebe um Ponto p e um Circulo c e retorna:
// true: se o ponto esta contido no circulo;
// false: caso contrario.
bool circ_interior(Circulo *c, Ponto *p){
 
    if (pto_getX(c->centro, p) <= (pto_getX(c->centro) + c->raio)){
        return true;
    } else {
        return false; 
    }
}

void circ_imprime(Circulo *c){
    cout << "[" << "raio: " << c->raio << "," << "x:" << pto_getX(c->centro) << "y:" << pto_getY(c->centro) << "]" << endl;
}