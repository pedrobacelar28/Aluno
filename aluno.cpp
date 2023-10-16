#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
#include "aluno.hpp"
using namespace std;

Aluno::Aluno(string nome,int matricula, vector<int> notas){

    _nome=nome;
    _matricula=matricula;
    _notas=notas;

}
void Aluno::Media(){
   double x;
   int tamanho= _notas.size();
   for (auto it = _notas.begin(); it !=_notas.end(); ++it){
        x=+*it;
    }
    cout<<x/tamanho;
}

/*void Aluno::Maior_Nota(vector<double> notas){
   _saldo -= valor;
   cout<<"saque efetuado"<<endl;
}

void Aluno::Imprime(){
    cout << _nome << " " << _matricula << _notas << endl;
}*/