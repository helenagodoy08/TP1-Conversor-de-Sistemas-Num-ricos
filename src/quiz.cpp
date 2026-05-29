#include <iostream>
#include <cstdlib>
#include <ctime>

#include "quiz.hpp"
#include "conversores.hpp"
#include "formatador.hpp"

using namespace std;

//--Modo quiz--
//Funções: 
//rand() -> gera numeros pseudoaleatorios
//srand() -> define a seed inicial para a geração da sequencia
//sem ela o resultado seria sempre a mesma sequencia 
//time(0) -> pega o horario atual do computador em segundos

void modo_quiz(){
    int nivel, pontos=0;

    srand(time(0)); //deixa os numeros do rand() diferentes a cada execucao
    
    menuquiz();
    cin>>nivel;

    for (int rodada=1; rodada<=5; rodada++){
        int num=0, conversao=0;
        string correta="", digitado="";
        //vao receber novos valores a cada rodada

        cout<<"===Questão "<<rodada<<"==="<<endl;

        if (nivel==1){
            num=rand()%10;
        }
        else if (nivel==2){
            num=rand()%100;
        }
        else if (nivel==3){
            num=rand()%1000;
        }
        else if (nivel==4){
            num=rand()%10000;
        }
        else if (nivel==5){
            num=rand()%100000;
        }
        else {
            erro();
        }
        //vai aumentando um digito por nivel

        //escolhendo conversao aleatoriamente 
        conversao=rand()%3;
        
        //%3 resto pode ser 0, 1 ou 2 
        if (conversao==0){
            cout<<"Converta "<<num<<" decimal para binário:"<<endl;
            cin>>digitado;
            
            correta=dec_bin_quiz(num);
        }
        else if (conversao==1){
            cout<<"Converta "<<num<<" decimal para octal:"<<endl;
            cin>>digitado;

            correta=dec_oct_quiz(num);
        }
        else{
            cout<<"Converta "<<num<<" decimal para hexadecimal:"<<endl;
            cin>>digitado;

            correta=dec_hex_quiz(num);
        }

        if (correta==digitado){
            cout<<"Resposta correta!"<<endl;
            pontos++;
        }
        else {
            cout<<"Errado!"<<endl;
            cout<<"Resposta correta: "<<correta<<endl;
        }
    }

    cout<<"=== Resultado Final ==="<<endl;
    cout<<"Pontuação: "<<pontos<<"/5"<<endl;
}

