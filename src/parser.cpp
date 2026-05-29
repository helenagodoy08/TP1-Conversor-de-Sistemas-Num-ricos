#include <iostream>
#include <string>

#include "conversores.hpp"
#include "parser.hpp"
#include "formatador.hpp"

using namespace std;

//funcao para separar os inteiros dos fracionarios em numeros com ',' ou '.'
void separador(string valor, string &inteiro, string &frac){
    inteiro="";
    frac="";

    bool partefrac=false;

    for (int i=0; i<valor.size(); i++){

        if (valor[i]=='.' or valor[i]==','){

            partefrac=true;
        }

        else if (!partefrac){

            inteiro += valor[i];
        }

        else{

            frac += valor[i];
        }
    }
}
