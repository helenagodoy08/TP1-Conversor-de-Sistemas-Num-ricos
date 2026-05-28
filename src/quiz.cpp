#include <iostream>
#include <cstdlib>
#include <ctime>

#include "quiz.hpp"
#include "conversores.hpp"

using namespace std;

//--Modo quiz--
//Funções: 
//rand() -> gera numeros pseudoaleatorios
//srand() -> define a seed inicial para a geração da sequencia
//sem ela o resultado seria sempre a mesma sequencia 
//time(0) -> pega o horario atual do computador em segundos

void modo_quiz(){
    int nivel, pontos=0;

    srand(time(0)); 
    
    cout<<"Escolha a dificuldade: 1 a 5"<<endl;
    cin>>nivel;

}

