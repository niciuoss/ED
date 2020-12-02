#include <iostream>
#include <new>
#include <locale>
#include <string>

using namespace std;

int main (){
  
    int quantP = 1;
    double *valor;
    double *chute;
    string *segundo;
    int i = 0;

    cout << "Quantos produtos: ";
    cin >> quantP;
    
    cout << "O valor de cada produto: ";
    valor = (double*) new int(quantP);
    for(i = 0; i < quantP; i++){
        cin >> valor[i];
        //cout << valor[i] << "\n";
    }    

    cout << "O chute do primeiro: ";
    chute = (double*) new int(quantP);
    for(i = 0; i < quantP; i++){
        cin >> chute[i];
        //cout << chute[i] << "\n";
    }
    
    cout << "A resposta do segundo: ";
    segundo = new string[2];
    for(i = 0; i < quantP; i++){
        cin >> segundo[i];
        //cout << segundo[i] << "\n";
    }

    
    

 
 
    free(valor);
    free(chute);
    delete []segundo;
    
    return 0;
}