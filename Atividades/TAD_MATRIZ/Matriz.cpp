#include "Matriz.h"
#include <iomanip>
#include <iostream>

Matriz::Matriz(int l, int c){
    this->_l = l;
    this->_c = c;
    
    _M = new float*[_l];
    
    for(int i = 0; i < _l; i++){
        float *v = new float[_c];
        _M[i] = v;
    }
}

        
Matriz::~Matriz(){
    for(int i = 0; i < _l; i++){
        delete[] _M[i];
    }
    delete[] _M;
    std::cout<<"<Matriz Liberada>\n";
} 
    
int Matriz::linhas(){
    return _l;
}

int Matriz::colunas(){
    return _c;
}  

void Matriz::imprime(int largura){
    int i = 0;
    int j = 0;
    for(i = 0; i < _l; i++){
        for(j = 0; j < _c; j++){
            std::cout  << _M[i][j]<< std::setw(largura); 
        }
        std::cout <<"\n";
    }
}

    
float Matriz::valor(int i, int j){
    return _M[i][j];
} 

    
void Matriz::atribui(float v, int i, int j){
    _M[i][j] = v;
} 

Matriz *Matriz::soma(Matriz *B){
    int i = 0;
    int j = 0;
    float soma = 0.0;
    
    Matriz* C = new Matriz(_l, _c);

    for (i = 0; i < _l; i++){
        for (j = 0; j < _c; j++){
            soma = _M[i][j] + B->_M[i][j];
            C->atribui(soma, i, j);
        }
    }
    
    return C;
} 
      
Matriz *Matriz::multiplica(Matriz *B){
    int l1 = _l;
    int c1 = _c;
    int l2 = B->_l;
    int c2 = B->_c;
    int i = 0;
    int j = 0;
    int k = 0;
    float aux = 0.0;
    
    Matriz* C = new Matriz(l1, c2);

    for (i = 0; i < _l; i++){
        std::cout<<"O i: " <<i<<"\n";
        for (j = 0; j <= _c; j++){
            std::cout<<"O j: " <<j<<"\n";
            aux = 0.0;
            for(k = 0; k <_c; k++){
                std::cout<<"O k: " <<k<<"\n";
                aux = aux + _M[i][k] * B->_M[k][j];
                C->atribui(aux, i, j);
            }
        }
    }

    return C;
} 
