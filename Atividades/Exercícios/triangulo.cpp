#include <iostream>
#include <string>

using namespace std;

void printar(int v[], int n){
    
    if( n > 0){
        cout << v[n-1] << ", ";
        printar(v, n-1);
    } else {
        cout << "\n";
    }
}

void triangulo(int v[], int n){
    int i = 0;
    if(n > 0){
        int aux[n-1];
        for(i = 0; i < n; i++){
            aux[i] = v[i] + v[i+1];

        }
        triangulo(aux, n-1);
        cout<<"[";
        printar(v,n);
        cout<<"]"; 
    }
} 


int main(){
    int i = 0;
    int n = 0;
    cin >> n;
    int v[n];

    for (i = 0; i < n; i++){
        cin >> v[i];
    }

    triangulo(v, n);
}