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

    matriz = (int**) new int(linhas);
    for(i = 0; i < linhas; i++){
        matriz[i] = (int*) new int(colunas);
    }

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            cin >> matriz[i][j];
        }
    }

    int cont = 0;
    for(i = 0; i < linhas -1 ; i++){
        for(j = 0; j < colunas; j++){
            if(matriz[i][j] > matriz[i+1][j]){
                cont++;
            }
        }
    }

    cout << cont << "\n";

    free(matriz);

    return 0;
}