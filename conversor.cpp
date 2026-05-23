#include <iostream>
#include <cmath>
using namespace std;

void decimalpbase() {
    int decimal, base;
    int resto[100];

    cout<<"Digite um numero decimal:"<<endl;
    cin>>decimal;

    cout<<"Digite a base para conversao:"<<endl;
    cout<<"Para base binaria:2, octal:8 e hexadecimal:16"<<endl;
    cin>>base;

    char escolha;
    bool passo;
    cout<<"Ativar modo passo a passo? Digite S ou N"<<endl;
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
        cout<<"Numero Divisor Quociente Resto"<<endl;
        
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
void basepdecimal() {
    int base, decimal=0;
    int digito=0, resultado=0;
    string n;

    std::cout<<"Digite a base para conversao:"<<endl;
    std::cout<<"Numero binario:2, octal:8, hexadecimal:16"<<endl;
    cin>>base;
    std::cout<<"Digite um numero para conversao:"<<endl;
    cin>>n;

    char escolha;
    bool passo;
    cout<<"Ativar modo passo a passo? Digite S ou N"<<endl;
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    int tamanho = n.size();
    
    if (base==2){
        if (passo){
            cout<<"Digito Potencia Resultado"<<endl;
        }
        
        for (int i=0; i<tamanho; i++){
            digito=n[i]-'0'; 
           
            decimal=digito * pow(2, tamanho-1-i);
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
            cout<<"Digito Potencia Resultado"<<endl;
        }
        
        for (int i=0; i<tamanho; i++){
            digito=n[i]-'0';
            decimal=digito * pow(8, tamanho-1-i);
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
            cout<<"Digito Potencia Resultado"<<endl;
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
            decimal=digito * pow(16, tamanho-1-i);
            resultado+=decimal;

            if (passo){
                cout<<digito<<"        ";
                cout<<"16^"<<tamanho-1-i<<"        ";
                cout<<decimal<<endl;
            }
        }
        cout<<"Resultado "<<resultado<<endl;
    }
    
    return;
}
void binariopoctal(){
    int digito;
    string binario, agrup="";

    cout<<"Digite o numero binario para ser convertido:"<<endl;
    cin>>binario;

    char escolha;
    bool passo;
    cout<<"Ativar modo passo a passo? Digite S ou N"<<endl;
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
void octalpbinario(){
    int digito;
    string numero;

    cout<<"Digite o numero para ser convertido:"<<endl;
    cin>>numero;

    char escolha;
    bool passo;
    cout<<"Ativar modo passo a passo? Digite S ou N"<<endl;
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    int tamanho=numero.size();

    cout<<"Octal Binario"<<endl;

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
void binariophexad(){
    int base, digito;
    string binario, agrup="";

    cout<<"Digite o numero binario para ser convertido:"<<endl;
    cin>>binario;

    char escolha;
    bool passo;
    cout<<"Ativar modo passo a passo? Digite S ou N"<<endl;
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
void hexadpbinario(){
    int digito;
    string numero;

    cout<<"Digite o numero para ser convertido:"<<endl;
    cin>>numero;
    
    char escolha;
    bool passo;
    cout<<"Ativar modo passo a passo? Digite S ou N"<<endl;
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    int tamanho=numero.size();

    cout<<"Hexadecimal Binario"<<endl;

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
void calcmaximos(){
    int bits, maximo;

    cout<<"Insira a quantidade de bits"<<endl;
    cin>>bits; 

    char escolha;
    bool passo;
    cout<<"Ativar modo passo a passo? Digite S ou N"<<endl;
    cin>>escolha;
    if (escolha=='S'){
        passo=true;
    } else {
        passo=false;
    }

    maximo = pow(2, bits) -1; //maximo esta em decimal

    if (passo){
        cout<<"Bits Expressao Resultado"<<endl;
        cout<<bits<<"      ";
        cout<<"2^"<<bits<<" - 1"<<"      ";
        cout<<maximo<<endl;
    }
    
    cout<<"Maior numero binario: ";
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

    cout<<"Maior numero octal: ";
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

    cout<<"Maior numero decimal: "<<maximo<<endl;

    cout<<"Maior numero hexadecimal: ";
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

int main(){
    int opcao;
    cout<<"Digite o numero da operacao a ser realizada:"<<endl;
    cout<<"1:Decimal para binario/octal/hexadecimal"<<endl;
    cout<<"2:Binario/octal/hexadecimal para decimal"<<endl;
    cout<<"3:Binario para octal"<<endl;
    cout<<"4:Octal para binario"<<endl;
    cout<<"5:Binario para hexadecimal"<<endl;
    cout<<"6:Hexadecimal para binario"<<endl;
    cout<<"7:Calculadora de maximo representavel por k bits"<<endl;

    cin>>opcao;

    if (opcao==1){
        decimalpbase();
    }
    else if (opcao==2){
        basepdecimal();
    }
    else if (opcao==3){
        binariopoctal();
    }
    else if (opcao==4){
        octalpbinario();
    }   
    else if (opcao==5){
        binariophexad();
    }
    else if (opcao==6){
        hexadpbinario();
    }
    else if (opcao==7){
        calcmaximos();
    }
    
    return 0;
}