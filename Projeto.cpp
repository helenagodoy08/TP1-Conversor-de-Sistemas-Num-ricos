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
    int digito, result;
    string binario, agrup="";

    cout<<"Digite o numero binario para ser convertido:"<<endl;
    cin>>binario;

    int tamanho = binario.size();

    while (binario.size()%3 !=0){
            binario= "0"+binario;
        }
        
        cout<<"Resultado: ";
        for (int i=0; i<binario.size(); i+=3){
            agrup="";
            
            agrup+=binario[i];   
            agrup+=binario[i+1]; 
            agrup+=binario[i+2]; 
    

            if (agrup=="000"){
                cout<<0;
            }
            else if (agrup=="001"){
                cout<<1;
            }
            else if (agrup=="010"){
                cout<<2;
            }
            else if (agrup=="011"){
                cout<<3;
            }
            else if (agrup=="100"){
                cout<<4;
            }
            else if (agrup=="101"){
                cout<<5;
            }
            else if (agrup=="110"){
                cout<<6;
            }   
            else if (agrup=="111"){
                cout<<7;
            }
        }

    return;
}
void octalpbinario(){
    int digito;
    string numero;

    cout<<"Digite o numero para ser convertido:"<<endl;
    cin>>numero;

    int tamanho=numero.size();

    cout<<"Resultado: ";

    for (int i=0; i<tamanho; i++){
        digito=numero[i];
            
        if (digito=='0'){
            cout<<"000";
        }
        else if (digito=='1'){
            cout<<"001";
        }
        else if (digito=='2'){
            cout<<"010";
        }
        else if (digito=='3'){
           cout<<"011";
        }
        else if (digito=='4'){
            cout<<100;
        }
        else if (digito=='5'){
            cout<<101;
        }
        else if (digito=='6'){
            cout<<110;
        }
        else if (digito=='7'){
            cout<<111;
        }

    }

    return;
}
void binariophexad(){
    int base, digito, result;
    string binario, agrup="";

    cout<<"Digite o numero binario para ser convertido:"<<endl;
    cin>>binario;

    int tamanho = binario.size();

    while (binario.size()%4 !=0){
            binario = "0" + binario;
        }

        cout<<"Resultado: ";
        for (int i=0; i<binario.size(); i+=4){
            agrup="";

            agrup+=binario[i];
            agrup+=binario[i+1];
            agrup+=binario[i+2];
            agrup+=binario[i+3];
            
            if (agrup=="0000"){
                cout<<0;
            }
            else if (agrup=="0001"){
                cout<<1;
            }
            else if (agrup=="0010"){
                cout<<2;
            }
            else if (agrup=="0011"){
                cout<<3;
            }
            else if (agrup=="0100"){
                cout<<4;
            }
            else if (agrup=="0101"){
                cout<<5;
            }
            else if (agrup=="0110"){
                cout<<6;
            }
            else if (agrup=="0111"){
                cout<<7;
            }
            else if (agrup=="1000"){
                cout<<8;
            }
            else if (agrup=="1001"){
                cout<<9;
            }
            else if (agrup=="1010"){
                cout<<"A";
            }
            else if (agrup=="1011"){
                cout<<"B";
            }
            else if (agrup=="1100"){
                cout<<"C";
            }
            else if (agrup=="1101"){
                cout<<"D";
            }
            else if (agrup=="1110"){
                cout<<"E";
            }
            else if (agrup=="1111"){
                cout<<"F";
            }
        } 
    
    return;
}
void hexadpbinario(){
    int digito;
    string numero;

    cout<<"Digite o numero para ser convertido:"<<endl;
    cin>>numero;
    
    int tamanho=numero.size();

    cout<<"Resultado: ";

    for (int i=0; i<tamanho; i++){
       digito=numero[i];
            
       if (digito=='0'){
            cout<<"0000";
        }
        else if (digito=='1'){
            cout<<"0001";
        }
        else if (digito=='2'){
            cout<<"0010";
        }
        else if (digito=='3'){
            cout<<"0011";
        }
        else if (digito=='4'){
           cout<<"0100";
        }
        else if (digito=='5'){
            cout<<"0101";
        }
        else if (digito=='6'){
            cout<<"0110";
        }
        else if (digito=='7'){
            cout<<"0111";
        }
        else if (digito=='8'){
            cout<<"1000";
        }
        else if (digito=='9'){
            cout<<"1001";
        }
        else if (digito=='A'){
            cout<<"1010";
        }
        else if (digito=='B'){
            cout<<"1011";
        }
        else if (digito=='C'){
            cout<<"1100";
        }
        else if (digito=='D'){
            cout<<"1101";
        }
        else if (digito=='E'){
            cout<<"1110";
        }
        else if (digito=='F'){
            cout<<"1111";
        }
    }

    return;
}
void calcmaximos(){
    int bits, maximo;

    cout<<"Insira a quantidade de bits"<<endl;
    cin>>bits; //pow(base,expoente)

    maximo = pow(2, bits) -1; //maximo esta em decimal
    
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