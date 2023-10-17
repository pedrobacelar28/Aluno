#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
#include "aluno.hpp"
using namespace std;

/*void Aluno::Conseguir(){
    cin>>_nome;
    cin>>_matricula;
    while(1){
        int a2;
        cin>>a2;
        if (a2==(-1)) break;
        _notas.push_back(a2);
    }

}*/
Aluno::Aluno(string nome,int matricula, vector<int> notas){

    _nome=nome;
    _matricula=matricula;
    _notas=notas;

}

double Aluno::Media(){
   double x;
   int tamanho= _notas.size();
   for (auto it = _notas.begin(); it !=_notas.end(); ++it){
        x=x+*it;
    }
    return x/tamanho;
}

int Aluno::Maior_Nota(){
   
   sort(_notas.begin(),_notas.end());
   int a=*_notas.end();
   return a;
}

void Aluno::Imprime(){
    cout<<_matricula<<' '<<_nome;
    for (auto it = _notas.begin(); it !=_notas.end(); ++it){
        cout << ' ' << *it;
    }
}