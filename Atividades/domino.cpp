#include <iostream>
#include <new>
#include <locale>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL, "");

    int *alturas;
    int size = 0;
    
    cout << "Digite o tamanho do vetor: ";
    cin >> size;
    
    alturas = (int*) new int(size);

    cout << "Digite o tamanho de cada peça: ";
    int i = 0;
    for(i = 0; i < size; i++){
        cin >> alturas[i];
    }

    int cont = 0;
    for(i = 0; i <= size; i++){
        if(alturas[i] <= alturas[i +1]){
            cont++;
        }
    }
    //cout << cont << "\n";
    if (cont < size){
        cout << "precisa de ajustes" << "\n";
    } else {
        cout << "sim" << "\n";
    }

    free(alturas);

    return 0;
}
