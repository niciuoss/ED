#include <iostream>
#include <new>
#include <locale>
#include <string>
#include <iomanip> 

using namespace std;

struct aluno{
    int matricula = 0;
    char nome[100];
    double media = 0.0;
};

void lervet(aluno *alunos, int tamanho){
    int i = 0;
    for(i = 0; i < tamanho; i++){
        cout << "Digite a matricula do aluno: ";
        cin >> alunos[i].matricula;
        cout << "Digite o nome do aluno: ";
        cin.ignore();
        cin.get(alunos[i].nome, 100);
        cout << "Digite a média do aluno: ";
        cin >> alunos[i].media;
        system("clear");
        cout << "---------------------------------" << "\n";
        cout << "operação realizada com sucesso..." << "\n";
        cout << "---------------------------------" << "\n";
    }
}

void buscM(aluno *alunos, int tamanho, int matriculaB){
    int i = 0;
    int cont = 0;
    for(i = 0; i < tamanho; i++){
        if(alunos[i].matricula == matriculaB){
            cout << alunos[i].nome << "\n";
            cout << alunos[i].media << "\n";
        } else {
            cont ++;
        }
    }
    if (cont == tamanho){
        cout << "NAO ENCONTRADA" << "\n";
    }
}

int main(){
    setlocale(LC_ALL, "");

    aluno *alunos;
    int tamanho = 0;
    int matriculaB = 0;

    cout << "Digite a quantidade de alunos: ";
    cin >> tamanho;
    system("clear");
    
    alunos = new aluno[tamanho];

    lervet(alunos, tamanho);
    cout << "Digite a matricula que deverá ser encontrada: ";
    cin >> matriculaB;
    buscM(alunos, tamanho, matriculaB);

    free(alunos);
    return 0;
}