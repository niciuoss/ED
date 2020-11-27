#include <iostream>
#include <string>
#include <locale>
#include <iomanip> 

using namespace std;

bool primo (int n){
    bool resultado = true;
    int i;
    
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

    cin >> a;
    cin >> b;

    for(i = a; i <= b; i++){
     if(primo(i)){
         cout << i << "\n";
     }   
    }

    return 0;
}