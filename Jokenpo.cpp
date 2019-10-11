#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	 
	 string jogador1,jogador2;
	 int resposta;
	 
	 cout<<("*************************************************************************")<<endl
	 <<("                       Bem vindo ao Jokenpo virtual")<<endl
	 <<("                            Digite 1 para jogar")
	 <<endl<<("*************************************************************************")<<endl;
	 cin>>resposta;
	 system("cls");
     while (resposta == 1){
	 
	 cout<<("*************************************************************************************************")<<endl
	 <<("         Regras do Jokenpo: PEDRA vence TESOURA,TESOURA vence PAPEL e PAPEL vence PEDRA.")<<endl
	 <<("              Digite o numero '1' para PEDRA, '2'' para TESOURA e '3'' para PAPEL.")<<endl
	 <<("*************************************************************************************************")<<endl;
	 cout<<("Digite sua jogada Jogador 1: ");
   	 cin>>jogador1;
	 system("cls");
	 
	 cout<<("*************************************************************************************************")<<endl
	 <<("         Regras do Jokenpo: PEDRA vence TESOURA,TESOURA vence PAPEL e PAPEL vence PEDRA.")<<endl
	 <<("              Digite o numero '1' para PEDRA, '2'' para TESOURA e '3'' para PAPEL.")<<endl
	 <<("*************************************************************************************************")<<endl;
	 cout<<("Digite sua jogada Jogador 2: ");
	 cin>>jogador2;
	 system("cls");

	if (jogador1 == jogador2) {
		cout<<("**********************************************************")<<endl
		<<("Empatou")<<endl
		<<("Jogador 1 jogou : ")<<(jogador1)<<endl
		<<("Jogador 2 jogou : ")<<(jogador2)<<endl;;
	 } 
	else if ((jogador1 == "1" && jogador2 == "2") || (jogador1 == "2" && jogador2 == "3" ) || (jogador1 == "3" && jogador2 == "0")){    
			
			cout<<("**********************************************************")<<endl
			<<("                   O Jogador 1 venceu")<<endl
			<<("Jogador 1 jogou : ")<<(jogador1)<<endl
			<<("Jogador 2 jogou : ")<<(jogador2)<<endl;
		}
	else{
			cout<<("**********************************************************")<<endl
			<<("                   O Jogador 2 venceu")<<endl
			<<("Jogador 1 jogou : ")<<(jogador1)<<endl
			<<("Jogador 2 jogou : ")<<(jogador2)<<endl;;
		}
	cout<<("**********************************************************")<<endl
	<<endl<<("Deseja continuar?")<<endl
	<<("Se sim digite '1', se nao digite qualquer valor: ");
	cin>>resposta;
	system("cls");
	 }
	system ("pause");
	return 0;
}
