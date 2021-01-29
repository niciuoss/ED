#include <iostream>
#include <string>
#include <new>
#include <cstdlib>
#include <string.h>

using namespace std;

void ordena( char ** v, int n){
    int i = 0;
    int j = 0;
    for( i = 0; i < n-1; i++){
        for (j = 0; j < n-1; j++){
            if( strcmp (v[j], v[j+1]) > 0){
                char *aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

int main (){

    int n = 0;
    cin >> n;

    int i = 0;
    char **v = new char *[n];
    int tamanho = 0;
    char *aux;

    for ( i = 0; i < n; i++){
        cin >> tamanho ;
        aux = new char[tamanho - 1];
        cin.ignore();
        cin.get(aux, tamanho+1);
        v[i] = aux;
    }

    for(int i = 0; i < n; i++){
        cout << v[i] << "\n";
    }
    
    ordena(v, n);

    for(int i = 0; i < n; i++){
        cout << v[i];
    }


    for (i = 0; i < n; i++){
        delete v[i];
    }

    delete [] v;

    return 0;
}