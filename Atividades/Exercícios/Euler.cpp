#include <iostream>
#include <string>
#include <locale>
#include <iomanip> 

using namespace std;

double fatorial(int n){
    double valorF = 0.00;
    
    for(valorF = 1; n > 1; n--){
        valorF = valorF * n;
    }

    return valorF;
}

double euler(int n){
    double valorE = 1;
    int i;

    for(i = 1; i <= n ; i++){
    valorE = valorE + (1 / fatorial(i));
    }

    return valorE;
}

int main(){
    setlocale(LC_ALL,"");

    int n = 0;
    
    cout << "Digite um número inteiro positivo: ";
    cin >> n;

    cout << std::fixed;
    cout << std::setprecision(6) << euler(n) << "\n" ;
 
    return 0;
}