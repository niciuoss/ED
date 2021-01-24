#include <iostream>
#include <string>
#include <new>
#include <cstdlib>
#include <iomanip>

using namespace std;

int fatorial(int n){
    if(n <= 1){ 
        return 1;
    }else {
        return n * fatorial (n-1);
    }
}

int main(){
    int n = 0;
    cin >> n;
    cout << fatorial(n) << endl;

    return 0;
}