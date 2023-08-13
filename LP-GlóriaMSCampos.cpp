//Biblioteca
#include <iostream>
//Diminuindo a sitaxe 
using namespace std;
//Vetor para armazenar números escolhidos pelo usuário
float numero[3], conta;
//Declarando as variáveis globais
int escolha;
string nome, continuar;
#define N 2

//Função titulo
void inicio(){
	cout<<"-Meu conhecimento sobre programação-\n";
}
//Função de recepção
string boasvindas(string nome){
	//Recebendo nome do usuário
	cout << "\nOlá, insira seu primeiro nome por favor: ";
	cin >> nome;
	cout << "\nSeja bem-vindo(a) "<< nome <<"!\n";

	return nome;
}
//Função finalização
void fim(){
	//Continuação após a condição para sair do loop se tornar verdadeira(se o usuário escolher a opção 3)
	cout <<"\nObrigada por utilizar meu programa!\nAté a próxima :)";
}

int main() {

	inicio();
	boasvindas(nome);
	//Loop com a intenção de continuar repetindo o programa até o usuário escolher sair
	while(escolha != 3){
		//Recebendo escolha do usuário
		cout<<"\nEscolha uma das opções abaixo \n\n1 - adição com 2 números inteiros\n2 - adição com 3 números inteiros\n3 - sair do programa \n";
		cin>> escolha;
			
		//Condicional para executar a escolha do usuário
		if(escolha == 1){
			//Contador para receber os números escolhidos pelo usuário
			for(int i = 0; i < 2; i++){
				cout <<"Digite um número inteiro: ";
				cin >>numero[i];
				conta = conta + numero[i];
			}
			//Exibindo a conta
			cout << "\n"<<numero[0]<<" + "<<numero[1]<<" = " << conta << "\n";
		
		}else if(escolha == 2){
			//Contador para recolher os números escolhidos pelo usuário
			for(int i = 0; i < 3; i++){
				cout <<"Digite um número inteiro: ";
				cin >>numero[i];
				conta = conta + numero[i];
			}
			//Exibindo a conta
			cout << "\n"<<numero[0]<<" + "<<numero[1]<<" + "<< numero[2]<<" = " << conta << "\n";
		}
	}
	fim();
}