#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>

#include "conversores.hpp"
#include "formatador.hpp"

using namespace std;

//1. Decimal -> bases
void dec_base() {
    int decimal, base;
    int resto[100];

    num();
    cin>>decimal;

    cout<<"Digite a base para conversão:"<<endl;
    cout<<"Para base binária:2, octal:8 e hexadecimal:16"<<endl;
    cin>>base;

    char escolha;
    bool passo;
    modopap();
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    if (decimal==0){
        cout<<"Resultado: 0";
        return;
    }

    if (passo){
        cout<<"Número Divisor Quociente Resto"<<endl;

    }

    int i=0;
    while (decimal>0){
        if (passo){
            cout << decimal << "        ";
            cout << base << "        ";
            cout << decimal/base << "        ";
            cout << decimal%base << endl;

        }
        resto[i]=decimal%base;
        decimal=decimal/base;
        i++;
    }

    if (passo){
        cout<<"Lendo os resultados de baixo para cima:"<<endl;
    }
    cout<<"Resultado: ";
    
    for (int j=i-1; j>=0; j--){
        if (resto[j]<10){
            cout<<resto[j];
        } else if (resto[j]==10){
            cout<<'A';
        } else if (resto[j]==11){
            cout<<'B';
        } else if (resto[j]==12){
            cout<<'C';
        } else if (resto[j]==13){
            cout<<'D';
        } else if (resto[j]==14){
            cout<<'E';
        } else if (resto[j]==15){
            cout<<'F';
        }

    }
    return;
}

//2. Bases -> decimal
void base_dec(){
    int base, decimal=0;
    int digito=0, resultado=0;
    string n;

    std::cout<<"Digite a base para conversão:"<<endl;
    std::cout<<"Numero binário:2, octal:8, hexadecimal:16"<<endl;
    cin>>base;
    num();
    cin>>n;

    char escolha;
    bool passo;
    modopap();
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    int tamanho = n.size();
    
    if (base==2){
        if (passo){
            cout<<"Dígito Potência Resultado"<<endl;
        }
        
        for (int i=0; i<tamanho; i++){
            digito=n[i]-'0'; 
           
            decimal=digito * std::pow(2, tamanho-1-i);
            resultado+=decimal;

            if (passo){
                cout<<digito<<"        ";
                cout<<"2^"<<tamanho-1-i<<"        ";
                cout<<decimal<<endl;
            }
        }
        cout<<"Resultado "<<resultado<<endl;
    } 
    else if (base==8){
        if (passo){
            cout<<"Dígito Potência Resultado"<<endl;
        }
        
        for (int i=0; i<tamanho; i++){
            digito=n[i]-'0';
            decimal=digito * std::pow(8, tamanho-1-i);
            resultado+=decimal;
            
            if (passo){
                cout<<digito<<"        ";
                cout<<"8^"<<tamanho-1-i<<"        ";
                cout<<decimal<<endl;
            }
        }
        cout<<"Resultado "<<resultado<<endl;
    }
    else if (base==16){
        if (passo){
            cout<<"Dígito Potência Resultado"<<endl;
        }
        
        for (int i=0; i<tamanho; i++){
            if (n[i]>='0' and n[i]<='9'){
                digito=n[i] - '0';
            } 
            else if (n[i]=='A') {
                digito=10;
            }
            else if (n[i]=='B'){
                digito=11;
            } 
            else if (n[i]=='C'){
                digito=12;
            }
            else if (n[i]=='D'){
                digito=13;
            }
            else if (n[i]=='E'){
                digito=14;
            }
            else if (n[i]=='F'){
                digito=15;
            }
            decimal=digito * std::pow(16, tamanho-1-i);
            resultado+=decimal;

            if (passo){
                cout<<digito<<"        ";
                cout<<"16^"<<tamanho-1-i<<"        ";
                cout<<decimal<<endl;
            }
        }
        cout<<"Resultado "<<resultado<<endl;
    }
    else {
        erro();
    }

    return;
}

//3. Binário -> octal
void bin_oct(){
    int digito;
    string binario, agrup="";

    num();
    cin>>binario;

    char escolha;
    bool passo;
    modopap();
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    int tamanho = binario.size();

    while (binario.size()%3 !=0){
        binario= "0"+binario;
    }
    
    if (passo){
        cout<<"Completando zeros: "<<binario<<endl;
        cout<<endl;
        cout<<"Grupo Octal"<<endl;
    }
        
    string result="";
    for (int i=0; i<binario.size(); i+=3){
        agrup="";

        agrup+=binario[i];   
        agrup+=binario[i+1]; 
        agrup+=binario[i+2]; 
    
        if (agrup=="000"){
            if (passo){
                cout<<agrup<<"     0"<<endl;
            }
            result+="0";
        }
        else if (agrup=="001"){
            if (passo){
                cout<<agrup<<"     1"<<endl;
            }
            result+="1";
        }
        else if (agrup=="010"){
            if (passo){
                cout<<agrup<<"     2"<<endl;
            }
            result+="2";
        }
        else if (agrup=="011"){
            if (passo){
                cout<<agrup<<"     3"<<endl;
            }
            result+="3";
        }
        else if (agrup=="100"){
            if (passo){
                cout<<agrup<<"     4"<<endl;
            }
            result+="4";
        }
        else if (agrup=="101"){
            if (passo){
                cout<<agrup<<"     5"<<endl;
            }
            result+="5";
        }
        else if (agrup=="110"){
            if (passo){
                cout<<agrup<<"     6"<<endl;
            }
            result+="6";
        }   
        else if (agrup=="111"){
            if (passo){
                cout<<agrup<<"     7"<<endl;
            }
            result+="7";
        }
    }
    cout<<"Resultado: "<<result;

    return;
}

//4. Octal -> binário
void oct_bin(){
    int digito;
    string numero;

    num();
    cin>>numero;

    char escolha;
    bool passo;
    modopap();
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    int tamanho=numero.size();

    if (passo){
        cout<<"Octal Binário"<<endl;
    }

    string result="";
    for (int i=0; i<tamanho; i++){
        digito=numero[i];
            
        if (digito=='0'){
            if (passo){
                cout<<"0"<<"      000"<<endl;
            }
            result+="000";
        }
        else if (digito=='1'){
            if (passo){
                cout<<"1"<<"      001"<<endl;
            }
            result+="001";
        }
        else if (digito=='2'){
            if (passo){
                cout<<"2"<<"      010"<<endl;
            }
            result+="010";
        }
        else if (digito=='3'){
            if (passo){
                cout<<"3"<<"      011"<<endl;
            }
            result+="011";
        }
        else if (digito=='4'){
            if (passo){
                cout<<"4"<<"      100"<<endl;
            }
            result+="100";
        }
        else if (digito=='5'){
            if (passo){
                cout<<"5"<<"      101"<<endl;
            }
            result+="101";
        }
        else if (digito=='6'){
            if (passo){
                cout<<"6"<<"      110"<<endl;
            }
            result+="110";
        }
        else if (digito=='7'){
            if (passo){
                cout<<"7"<<"      111"<<endl;
            }
            result+="111";
        }
    }
    cout<<result<<endl;
    
    return;
}

//5. Binário -> hexadecimal
void bin_hex(){
    int base, digito;
    string binario, agrup="";

    num();
    cin>>binario;

    char escolha;
    bool passo;
    modopap();
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    int tamanho = binario.size();

    while (binario.size()%4 !=0){
        binario = "0" + binario;
    }

    if (passo){
        cout<<"Completando zeros: "<<binario<<endl;
        cout<<endl;
        cout<<"Grupo Hexadecimal"<<endl;
    }

    string result="";
    for (int i=0; i<binario.size(); i+=4){
        agrup="";

        agrup+=binario[i];
        agrup+=binario[i+1];
        agrup+=binario[i+2];
        agrup+=binario[i+3];
            
        if (agrup=="0000"){
            if (passo){
                cout<<agrup<<"     0"<<endl;
            }
            result+="0";
        }
        else if (agrup=="0001"){
            if (passo){
                cout<<agrup<<"     1"<<endl;
            }
            result+="1";
        }
        else if (agrup=="0010"){
            if (passo){
                cout<<agrup<<"     2"<<endl;
            }
            result+="2";
        }
        else if (agrup=="0011"){
            if (passo){
                cout<<agrup<<"     3"<<endl;
            }
            result+="3";
        }
        else if (agrup=="0100"){
            if (passo){
                cout<<agrup<<"     4"<<endl;
            }
            result+="4";
        }
        else if (agrup=="0101"){
            if (passo){
                cout<<agrup<<"     5"<<endl;
            }
            result+="5";
        }
        else if (agrup=="0110"){
            if (passo){
                cout<<agrup<<"     6"<<endl;
            }
            result+="6";
        }
        else if (agrup=="0111"){
            if (passo){
                cout<<agrup<<"     7"<<endl;
            }
            result+="7";
        }
        else if (agrup=="1000"){
            if (passo){
                cout<<agrup<<"     8"<<endl;
            }
            result+="8";
        }
        else if (agrup=="1001"){
            if (passo){
                cout<<agrup<<"     9"<<endl;
            }
            result+="9";
        }
        else if (agrup=="1010"){
            if (passo){
                cout<<agrup<<"     A"<<endl;
            }
            result+="A";
        }
        else if (agrup=="1011"){
            if (passo){
                cout<<agrup<<"     B"<<endl;
            }
            result+="B";
        }
        else if (agrup=="1100"){
            if (passo){
                cout<<agrup<<"     C"<<endl;
            }
            result+="C";
        }
        else if (agrup=="1101"){
            if (passo){
                cout<<agrup<<"     D"<<endl;
            }
            result+="D";
        }
        else if (agrup=="1110"){
            if (passo){
                cout<<agrup<<"     E"<<endl;
            }
            result+="E";
        }
        else if (agrup=="1111"){
            if (passo){
                cout<<agrup<<"     F"<<endl;
            }
            result+="F";
        }
    }
    cout<<"Resultado: "<<result<<endl;

    return;
}

//6. Hexadecimal -> binário
void hex_bin(){
    int digito;
    string numero;

    num();
    cin>>numero;
    
    char escolha;
    bool passo;
    modopap();
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    int tamanho=numero.size();

    cout<<"Hexadecimal Binário"<<endl;

    string result="";
    for (int i=0; i<tamanho; i++){
       digito=numero[i];
            
       if (digito=='0'){
            if (passo){
                cout<<"0"<<"      0000"<<endl;
            }
            result+="0000";
        }
        else if (digito=='1'){
            if (passo){
                cout<<"1"<<"      0001"<<endl;
            }
            result+="0001";
        }
        else if (digito=='2'){
            if (passo){
                cout<<"2"<<"      0010"<<endl;
            }
            result+="0010";
        }
        else if (digito=='3'){
            if (passo){
                cout<<"3"<<"      0011"<<endl;
            }
            result+="0011";
        }
        else if (digito=='4'){
           if (passo){
                cout<<"4"<<"      0100"<<endl;
            }
            result+="0100";
        }
        else if (digito=='5'){
            if (passo){
                cout<<"5"<<"      0101"<<endl;
            }
            result+="0101";
        }
        else if (digito=='6'){
            if (passo){
                cout<<"6"<<"      0110"<<endl;
            }
            result+="0110";
        }
        else if (digito=='7'){
            if (passo){
                cout<<"7"<<"      0111"<<endl;
            }
            result+="0111";
        }
        else if (digito=='8'){
            if (passo){
                cout<<"8"<<"      1000"<<endl;
            }
            result+="1000";
        }
        else if (digito=='9'){
            if (passo){
                cout<<"9"<<"      1001"<<endl;
            }
            result+="1001";
        }
        else if (digito=='A'){
            if (passo){
                cout<<"A"<<"      1010"<<endl;
            }
            result+="1010";
        }
        else if (digito=='B'){
            if (passo){
                cout<<"B"<<"      1011"<<endl;
            }
            result+="1011";
        }
        else if (digito=='C'){
            if (passo){
                cout<<"C"<<"      1100"<<endl;
            }
            result+="1100";
        }
        else if (digito=='D'){
            if (passo){
                cout<<"D"<<"      1101"<<endl;
            }
            result+="1101";
        }
        else if (digito=='E'){
            if (passo){
                cout<<"E"<<"      1110"<<endl;
            }
            result+="1110";
        }
        else if (digito=='F'){
            if (passo){
                cout<<"F"<<"      1111"<<endl;
            }
            result+="1111";
        }
    }
    cout<<"Resultado: "<<result<<endl;

    return;
}

//7. Octal -> hexadecimal
void oct_hex(){
    int digito;
    string numero, agrup;

    num();
    cin>>numero;

    char escolha;
    bool passo;
    modopap();
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    int tamanho=numero.size();

    if (passo){
        cout<<"Octal Binário"<<endl;
    }

    string binario="";
    for (int i=0; i<tamanho; i++){
        digito=numero[i];
            
        if (digito=='0'){
            if (passo){
                cout<<"0"<<"      000"<<endl;
            }
            binario+="000";
        }
        else if (digito=='1'){
            if (passo){
                cout<<"1"<<"      001"<<endl;
            }
            binario+="001";
        }
        else if (digito=='2'){
            if (passo){
                cout<<"2"<<"      010"<<endl;
            }
            binario+="010";
        }
        else if (digito=='3'){
            if (passo){
                cout<<"3"<<"      011"<<endl;
            }
            binario+="011";
        }
        else if (digito=='4'){
            if (passo){
                cout<<"4"<<"      100"<<endl;
            }
            binario+="100";
        }
        else if (digito=='5'){
            if (passo){
                cout<<"5"<<"      101"<<endl;
            }
            binario+="101";
        }
        else if (digito=='6'){
            if (passo){
                cout<<"6"<<"      110"<<endl;
            }
            binario+="110";
        }
        else if (digito=='7'){
            if (passo){
                cout<<"7"<<"      111"<<endl;
            }
            binario+="111";
        }
    }
    cout<<endl;
    /////////////////////////////////////////

    tamanho = binario.size();

    while (binario.size()%4 !=0){
        binario = "0" + binario;
    }

    if (passo){
        cout<<"Completando zeros: "<<binario<<endl;
        cout<<endl;
        cout<<"Grupo Hexadecimal"<<endl;
    }

    string result="";
    for (int i=0; i<binario.size(); i+=4){
        agrup="";

        agrup+=binario[i];
        agrup+=binario[i+1];
        agrup+=binario[i+2];
        agrup+=binario[i+3];
            
        if (agrup=="0000"){
            if (passo){
                cout<<agrup<<"     0"<<endl;
            }
            result+="0";
        }
        else if (agrup=="0001"){
            if (passo){
                cout<<agrup<<"     1"<<endl;
            }
            result+="1";
        }
        else if (agrup=="0010"){
            if (passo){
                cout<<agrup<<"     2"<<endl;
            }
            result+="2";
        }
        else if (agrup=="0011"){
            if (passo){
                cout<<agrup<<"     3"<<endl;
            }
            result+="3";
        }
        else if (agrup=="0100"){
            if (passo){
                cout<<agrup<<"     4"<<endl;
            }
            result+="4";
        }
        else if (agrup=="0101"){
            if (passo){
                cout<<agrup<<"     5"<<endl;
            }
            result+="5";
        }
        else if (agrup=="0110"){
            if (passo){
                cout<<agrup<<"     6"<<endl;
            }
            result+="6";
        }
        else if (agrup=="0111"){
            if (passo){
                cout<<agrup<<"     7"<<endl;
            }
            result+="7";
        }
        else if (agrup=="1000"){
            if (passo){
                cout<<agrup<<"     8"<<endl;
            }
            result+="8";
        }
        else if (agrup=="1001"){
            if (passo){
                cout<<agrup<<"     9"<<endl;
            }
            result+="9";
        }
        else if (agrup=="1010"){
            if (passo){
                cout<<agrup<<"     A"<<endl;
            }
            result+="A";
        }
        else if (agrup=="1011"){
            if (passo){
                cout<<agrup<<"     B"<<endl;
            }
            result+="B";
        }
        else if (agrup=="1100"){
            if (passo){
                cout<<agrup<<"     C"<<endl;
            }
            result+="C";
        }
        else if (agrup=="1101"){
            if (passo){
                cout<<agrup<<"     D"<<endl;
            }
            result+="D";
        }
        else if (agrup=="1110"){
            if (passo){
                cout<<agrup<<"     E"<<endl;
            }
            result+="E";
        }
        else if (agrup=="1111"){
            if (passo){
                cout<<agrup<<"     F"<<endl;
            }
            result+="F";
        }
    }

    //.erase(posicao,quantidade)
    //enquanto result for maior q zero e primeira posicao igual a zero
    while (result.size()>1 and result[0]=='0'){
        result.erase(0,1);
    }
    cout<<"Resultado: "<<result<<endl;
    
    return;
}

//8. Hexadecimal -> octal
void hex_oct(){
    int digito;
    string numero, result, agrup="";

    num();
    cin>>numero;
    
    char escolha;
    bool passo;
    modopap();
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    int tamanho=numero.size();

    cout<<"Hexadecimal Binário"<<endl;

    string binario="";
    for (int i=0; i<tamanho; i++){
       digito=numero[i];
            
       if (digito=='0'){
            if (passo){
                cout<<"0"<<"      0000"<<endl;
            }
            binario+="0000";
        }
        else if (digito=='1'){
            if (passo){
                cout<<"1"<<"      0001"<<endl;
            }
            binario+="0001";
        }
        else if (digito=='2'){
            if (passo){
                cout<<"2"<<"      0010"<<endl;
            }
            binario+="0010";
        }
        else if (digito=='3'){
            if (passo){
                cout<<"3"<<"      0011"<<endl;
            }
            binario+="0011";
        }
        else if (digito=='4'){
           if (passo){
                cout<<"4"<<"      0100"<<endl;
            }
            binario+="0100";
        }
        else if (digito=='5'){
            if (passo){
                cout<<"5"<<"      0101"<<endl;
            }
            binario+="0101";
        }
        else if (digito=='6'){
            if (passo){
                cout<<"6"<<"      0110"<<endl;
            }
            binario+="0110";
        }
        else if (digito=='7'){
            if (passo){
                cout<<"7"<<"      0111"<<endl;
            }
            binario+="0111";
        }
        else if (digito=='8'){
            if (passo){
                cout<<"8"<<"      1000"<<endl;
            }
            binario+="1000";
        }
        else if (digito=='9'){
            if (passo){
                cout<<"9"<<"      1001"<<endl;
            }
            binario+="1001";
        }
        else if (digito=='A'){
            if (passo){
                cout<<"A"<<"      1010"<<endl;
            }
            binario+="1010";
        }
        else if (digito=='B'){
            if (passo){
                cout<<"B"<<"      1011"<<endl;
            }
            binario+="1011";
        }
        else if (digito=='C'){
            if (passo){
                cout<<"C"<<"      1100"<<endl;
            }
            binario+="1100";
        }
        else if (digito=='D'){
            if (passo){
                cout<<"D"<<"      1101"<<endl;
            }
            binario+="1101";
        }
        else if (digito=='E'){
            if (passo){
                cout<<"E"<<"      1110"<<endl;
            }
            binario+="1110";
        }
        else if (digito=='F'){
            if (passo){
                cout<<"F"<<"      1111"<<endl;
            }
            binario+="1111";
        }
    }
    //////////////////////////////////////////

    tamanho = binario.size();

    while (binario.size()%3 !=0){
        binario= "0"+binario;
    }
    
    if (passo){
        cout<<"Completando zeros: "<<binario<<endl;
        cout<<endl;
        cout<<"Grupo Octal"<<endl;
    }
        
    result="";
    for (int i=0; i<binario.size(); i+=3){
        agrup="";

        agrup+=binario[i];   
        agrup+=binario[i+1]; 
        agrup+=binario[i+2]; 
    
        if (agrup=="000"){
            if (passo){
                cout<<agrup<<"     0"<<endl;
            }
            result+="0";
        }
        else if (agrup=="001"){
            if (passo){
                cout<<agrup<<"     1"<<endl;
            }
            result+="1";
        }
        else if (agrup=="010"){
            if (passo){
                cout<<agrup<<"     2"<<endl;
            }
            result+="2";
        }
        else if (agrup=="011"){
            if (passo){
                cout<<agrup<<"     3"<<endl;
            }
            result+="3";
        }
        else if (agrup=="100"){
            if (passo){
                cout<<agrup<<"     4"<<endl;
            }
            result+="4";
        }
        else if (agrup=="101"){
            if (passo){
                cout<<agrup<<"     5"<<endl;
            }
            result+="5";
        }
        else if (agrup=="110"){
            if (passo){
                cout<<agrup<<"     6"<<endl;
            }
            result+="6";
        }   
        else if (agrup=="111"){
            if (passo){
                cout<<agrup<<"     7"<<endl;
            }
            result+="7";
        }
    }

    while (result.size()>1 and result[0]=='0'){
        result.erase(0,1);
    }
    
    cout<<"Resultado: "<<result;

    return;
}

//Calculadora de máximos
void calc_max(){
    int bits, maximo;

    cout<<"Insira a quantidade de bits"<<endl;
    cin>>bits; 

    char escolha;
    bool passo;
    modopap();
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    maximo = std::pow(2, bits) -1; 

    if (passo){
        cout<<"Bits Expressão Resultado"<<endl;
        cout<<bits<<"      ";
        cout<<"2^"<<bits<<" - 1"<<"      ";
        cout<<maximo<<endl;
    }
    
    cout<<"Maior número binário: ";
    int resto[100];
    if (maximo==0){
        cout<<"0";
        return;
    }

    int valor=maximo;
    int i=0;
    while (valor>0){
        resto[i]=valor%2;
        valor=valor/2;
        i++;
    }
     for (int j=i-1; j>=0; j--){
      cout<<resto[j];    
    }
    cout<<endl;

    cout<<"Maior número octal: ";
    int resto1[100];
    if (maximo==0){
        cout<<"0";
        return;
    }

    int valor1=maximo;
    i=0;
    while (valor1>0){
        resto1[i]=valor1%8;
        valor1=valor1/8;
        i++;
    }

    for (int j=i-1; j>=0; j--){
      cout<<resto1[j];    
    }
    cout<<endl;

    cout<<"Maior número decimal: "<<maximo<<endl;

    cout<<"Maior número hexadecimal: ";
    int resto2[100];
    if (maximo==0){
        cout<<"0";
        return;
    }

    int valor2=maximo;
    i=0;
    while (valor2>0){
        resto2[i]=valor2%16;
        valor2=valor2/16;
        i++;
    }

    for (int j=i-1; j>=0; j--){
        if (resto2[j]<10){
            cout<<resto2[j];
        } else if (resto2[j]==10){
            cout<<'A';
        } else if (resto2[j]==11){
            cout<<'B';
        } else if (resto2[j]==12){
            cout<<'C';
        } else if (resto2[j]==13){
            cout<<'D';
        } else if (resto2[j]==14){
            cout<<'E';
        } else if (resto2[j]==15){
            cout<<'F';
        }
    }

    return;
}

