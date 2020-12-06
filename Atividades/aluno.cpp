#include <iostream>
#include <new>
#include <locale>
#include <string>

using namespace std;

struct aluno{
    string nome;
    int matricula;
    string disciplina;
    double nota;

};

void leitura(aluno *pessoa){
    cout << "Digite o nome do aluno: ";
    //cin.ignore();
    getline(cin, pessoa->nome);
    //cout << pessoa->nome << "\n";
    cout << "Digite a matricula do aluno: ";
    cin >> pessoa->matricula;
    cout << "Digite a disciplina do aluno: ";
    cin.ignore();
    getline(cin, pessoa->disciplina);
    cout << "Digite a nota do aluno: ";
    cin >> pessoa->nota;
}

void imprime(aluno *pessoa){
    if(pessoa->nota >= 7){
        cout << pessoa->nome << " aprovado(a) em " << pessoa->disciplina << "\n";
    } else {
        cout << pessoa->nome << " reprovado(a) em " << pessoa->disciplina << "\n";
    }

}


int main(){
    setlocale(LC_ALL, "");
    aluno *pessoa = new aluno; 

    leitura(pessoa);
    imprime(pessoa);

return 0;
}