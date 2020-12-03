#include <iostream>
#include <new>
#include <locale>
#include <string>

using namespace std;

int main (){
    
    setlocale(LC_ALL, "");

    int quantP = 1;
    double *valor;
    double *chute;
    string *segundo;
    double *auxS;
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
    segundo = new string[5];
    for(i = 0; i < quantP; i++){
        cin >> segundo[i];
        //cout << segundo[i] << "\n";
    }

    auxS = (double*) new int(quantP);

    for(i = 0; i < quantP; i++){
        if (segundo[i] == "M" && valor[i] > chute[i]){
            auxS[i] = valor[i];
        }
        else if (segundo[i] == "M" && valor[i] < chute[i]){
            auxS[i] = chute[i] + 0.1;
        }
        else if (segundo[i] == "M" && valor[i] == chute[i]){
            auxS[i] = chute[i] + 0.1;
        }       
        else if (segundo[i] == "m" && valor[i] < chute[i]){
            auxS[i] = valor[i];
        }
        else if (segundo[i] == "m" && valor[i] > chute[i]){
            auxS[i] = chute[i] - 0.1;
        }
        else if (segundo[i] == "m" && valor[i] == chute[i]){
            auxS[i] = chute[i] + 0.1;
        }
    }
    /*for(i = 0; i < quantP; i++){
        cout << auxS[i] << "\n";                 
    }*/
    int contP = 0;
    int contS = 0;
    int contE = 0;
    for(i = 0; i < quantP; i++){
        if((chute[i] - valor[i]) < (auxS[i] - valor[i])){
            contP++;//0/1/1
        }
        else if ((chute[i] - valor[i]) > ( auxS[i] - valor[i])){
            contS++;//1/0/0
        }
        else if (( chute[i] - valor[i]) == ( auxS[i] - valor[i])){
            contE++;//0/0/0
        }
    }
    //cout << contP << "\n";
    //cout << contS << "\n";
    //cout << contE << "\n";
    if (contS > contP && contS > contE){
        cout << "segundo" << "\n";
    } else if (contP > contS && contP > contE){
        cout << "primeiro" << "\n";
    } else {
        cout << "empate" << "\n";
    }

 
 
    free(valor);
    free(auxS);
    free(chute);
    delete []segundo;
    
    return 0;
}