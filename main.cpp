#include <iostream>
#include <math.h>
#include <string>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cctype>
#include "aluno.hpp"

using namespace std;
int main(){
    vector<int> notas={10,20,30};
    string nome="pedro";
    Aluno a(nome,1234,notas);
    a.Media();
}
