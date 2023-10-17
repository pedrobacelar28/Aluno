#include <iostream>
#include <math.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
#include <iomanip>
#include "aluno.hpp"

using namespace std;
int main(){
    cout << fixed << setprecision(2);
    vector<Aluno*> escola;
    vector<int> notas;
    string nome;
    int matricula;
    Aluno* pessoa=new Aluno(nome,matricula,notas);
    int x=0;
    while(1){
        cin>>nome;
        if(nome=="END") break;
        cin>> matricula;
        while(1){
            int a2;
            cin>>a2;
            if (a2==(-1)) break;
            notas.push_back(a2);
        }
        pessoa->_nome=nome;
        pessoa->_matricula=matricula;
        pessoa->_notas=notas;
        escola.push_back(pessoa);

    }
    sort(escola.begin(),escola.end());
    int y=escola.size();
    for (int i=0;i<y;i++){
        escola[i]->Imprime();
    }
    cout << endl;

    
}
