#include <iostream>
#include <string>
#include <locale>
#include <iomanip>
#include <new>

using namespace std;

int main (){
    setlocale(LC_ALL, "");

    int linhas = 0;
    int colunas = 0;
    int i = 0;
    int j = 0;
    int **matriz;
    int *somaL;
    int *somaC;
    int somaDP = 0;
    int somaDS = 0;

    cout << "Digite a quantidade de linhas ";
    cin >> linhas;
    cout << "Digite a quantidade de colunas: ";
    cin >> colunas;

    matriz = (int **) new int(linhas);
    for(i = 0; i < linhas; i++){
        matriz[i] = (int *) new int(colunas);
    }

    somaL = (int *) new int(linhas);
    somaC = (int *) new int(colunas);
    
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            cin >> matriz[i][j];
        }
    }
    
    for(i = 0; i < linhas; i++){
        somaL[i] = 0;
    }
    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            somaL[i] = somaL[i] + matriz[i][j];
        }
    }

    for(j = 0; j < colunas; j++){
        somaC[j] = 0;
    }
    for(j = 0; j < colunas; j++){
        for(i= 0; i < linhas; i++){
            somaC[j] = somaC[j] + matriz[i][j]; 
        }
    }

    for(i = 0; i < linhas; i++){
        somaDP = somaDP + matriz[i][i];
    }
    for(i = 0; i < linhas; i++){
        somaDS = somaDS + matriz[i][colunas - i - 1];
    }
    int resultadoL;
    int resultadoC;

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(somaL[i] == somaL[i+1]){
                resultadoL = somaL[i];
            }
        }
    }
    for(j = 0; j < colunas; j++){
        for(i= 0; i < linhas; i++){
            if(somaC[j] == somaC[j+1]){
            resultadoC = somaC[j];
            } 
        }
    }

    if (somaDS == somaDP && somaDP == resultadoC && resultadoC == resultadoL){
        cout << "sim" << "\n";
            }else { cout << "não" << "\n"; }
            


    free (matriz);
    free (somaL);
    free (somaC);

    return 0;
}