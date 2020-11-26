#include <iostream>
#include <string>
#include <locale>
#include <iomanip> 

using namespace std;

bool primo (int i){
    bool resultado = true;
    int cont;
    int n;
    
    //cout << "Digite um número n: ";
    cin >> n;
    
    for( i = 2; i < n; i++){
        if ( n % i == 0 ){
        return resultado = false;
        }
    }
    return resultado;   
}

int main (){
    setlocale(LC_ALL, "");

    int a = 0;
    int b = 0;
    int i = 0;
    int j = 0;

    cin >> a;
    cin >> b;

    for(j = 2; j < b; j++){
        
    }

    //cout << primo(i) << "\n";

}