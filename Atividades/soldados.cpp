#include <iostream>
#include <string>
#include <locale>
#include <iomanip>
#include <new>

using namespace std;

int main(){
    setlocale(LC_ALL,"");
    int linhas = 3;
    int colunas = 3;
    int i;
    int j;
    int **matriz;

    /*cout << "Quantas linhas: ";
    cin >> linhas;
    cout << "Quantas colunas: ";
    cin >> colunas;*/

    matriz = (int**) new int(linhas);
    for(i = 0; i < linhas; i++){
        matriz[i] = (int*) new int(colunas);
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            cin >> matriz[i][j];
        }
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            if(matriz[i][j])
        }
    }

    free(matriz);

    return 0;
}