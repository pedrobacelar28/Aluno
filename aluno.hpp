#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
using namespace std;

struct Aluno {
    string _nome;
    int _matricula; 
    vector<int> _notas;
    
    Aluno(string nome,int matricula, vector<int> notas);
    void Media();
    void Maior_Nota();
    void Imprime();

    
};
#endif