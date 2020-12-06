#include <iostream>
#include <new>
#include <locale>
#include <string>
#include <iomanip> 

using namespace std;

struct aluno{
    char nome[100];
    int matricula = 0;
    char disciplina[120];
    double nota = 0.0;
};

void leitura(aluno *alunos){
    int i = 0;
    for(i = 0; i < 2; i++){
        cout << "Digite o nome do aluno: ";
        cin.get(alunos[i].nome, 100);
        cout << "Digite a matricula do aluno: ";
        cin >> alunos[i].matricula;
        cout << "Digite a disciplina: ";
        cin.ignore();
        cin.get(alunos[i].disciplina, 120);
        cout << "Digite a nota do aluno: ";
        cin >> alunos[i].nota;
        cin.ignore();
        system("clear");
        cout << "---------------------------------" << "\n";
        cout << "dados cadastrados com sucesso..." << "\n";
        cout << "---------------------------------" << "\n";
    }
}
void maiornota(aluno *alunos){
    int i = 0;
    for(i = 0; i < 2; i++){
        if(alunos[i].nota > alunos[i+1].nota){
            cout << "Aluno com a maior nota:" << "\n";
            cout << std::fixed;
            cout << alunos[i].nome << " , " << std::setprecision(2) << alunos[i].nota << "\n";
            break;
        }
        else if (alunos[i].nota == alunos[i+1].nota){
            cout << "Ambos os alunos possuem a mesma nota: " << "\n";
            cout << std::fixed;
            cout << alunos[i].nome << " e " << alunos[i+1].nome << " , " << std::setprecision(2) << alunos[i].nota << "\n";
            break;
        } 
        else if (alunos[i].nota < alunos[i+1].nota) {
            cout << "Aluno com a maior nota:" << "\n";
            cout << std::fixed;
            cout << alunos[i+1].nome << " , " << std::setprecision(2) << alunos[i+1].nota << "\n";
            break;
        }
    }
}

int main(){
    setlocale(LC_ALL, "");

    aluno *alunos;
    alunos = new aluno[2];

    leitura(alunos);
    maiornota(alunos);

    free(alunos);
    
    return 0;
}