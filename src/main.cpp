#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

#include "conversores.hpp"
#include "formatador.hpp"
#include "quiz.hpp"

using namespace std;

int main() {
    int opcao, opcao1;

    menu();
    cin>>opcao;

    if (opcao == 1) {
        menu1();
        
        cin>>opcao1;

        if (opcao1==1){
            dec_base();
        }
        else if (opcao1==2){
            base_dec();
        }
        else if (opcao1==3){
            bin_oct();
        }
        else if (opcao1==4){
            oct_bin();
        }   
        else if (opcao1==5){
            bin_hex();
        }
        else if (opcao1==6){
            hex_bin();
        }
        else if (opcao1==7){
            oct_hex();
        }
        else if (opcao1==8){
            hex_oct();
        }
        else {
            erro();
        }

    }
    else if (opcao==2){
        calc_max();
    }
    else if (opcao==3){
        modo_quiz();
    }
    //else if (opcao==4){
       // modo_batch();
    //}
    else {
       erro();
    }

    return 0;
}