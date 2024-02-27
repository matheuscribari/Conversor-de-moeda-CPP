#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    float esc, esc2, senha, cpf, senhad, cpfd, esc3, saldo, conta, saque, deposito;
    cout<<"Olá Digite o seu nome!"<<endl<<endl;
    cin>>name;
    cout<<"Seja bem vindo ao Banco do Brasil, " << name << "!"<<endl<<endl<<endl;
    cout<<"1-Deseja fazer login"<<endl;
    cout<<"2-Deseja criar conta"<<endl<<endl<<endl;
    cin>>esc;
    
    if(esc == 1){
        cout<<"Digite a sua senha:"<<endl;
        cin>>senha;
        cout<<"Digite o seu cpf"<<endl;
        cin>>cpf;
        cout<<"Login feito com sucesso"<<endl;
        
}
    
    else
        cout<<"Seja bem-vindo ao Banco do Brasil, vamos criar a sua conta!!"<<endl<<endl;
        cout<<"Digite a senha desejada..."<<endl;
        cin>>senha;
        cout<<"Digite o seu cpf"<<endl<<endl;
        cin>>cpf;
        cout<<"Conta salva!!"<<endl<<endl;
        cout<<"Digite"<<endl<<endl;
        cout<<"1-Para logar na conta"<<endl<<endl;
        cout<<"2- Para usar conta já existente"<<endl<<endl;
        cin>>esc2;
    
    if(esc2 == 1){
        cout<<"Confirme a sua senha"<<endl<<endl;
        cin>>senhad;
        cout<<"Confirme o seu cpf"<<endl<<endl;
        cin>>cpfd;
        
        if (senhad == senha && cpfd == cpf){
           cout<<"Login feito com sucesso..."<<endl<<endl; 
        }   
        
         else {
             cout<<"Senha ou cpf incorreto"<<endl<<endl;
         }
         
}
    

    if{
        cout<<"Digite a sua senha"<<endl;
        cin>>senhad;
        cout<<"Digite seu cpf"<<endl;
        cout<<cpfd;
    }
    
    if (senhad && cpfd == senha && cpf){
           cout<<"Login feito com sucesso..."<<endl<<endl; 
           cout<<"Digite"<<endl<<endl;
           cout<<"1-Deseja sacar"<<endl;
           cout<<"2-Deseja Depositar"<<endl<<endl;
           cin>>esc3;
           if (esc3 == 1){
               saldo = 5000;
               cout<<"Digite a quantidade que deseja sacar de sua conta"<<endl<<endl;
               cin>>saque;
               if(saldo < saque){
                   cout<<"Saldo insuficiente...";
               }
               else
                   cout<<"Saque efetuado com sucesso";
                   conta = saldo - saque;
                   cout<<"Seu saldo atual é igual à :" << conta <<endl<<endl;
           }
           if (esc3 == 2){
               saldo = 5000;
               cout<<"Qual o valor que você deseja Depositar?";
               cin>>deposito;
               conta = saldo + deposito;
               cout<<"Seu saldo atual é igual à :" << conta << endl <<endl;
           }
    }

    return 0;
    
}

    