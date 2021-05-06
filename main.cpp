#include "ListaJogador.hpp"
#include "ListaTime.hpp"
#include "ListaEmpresa.hpp"
#include "Jogador.hpp"
#include "Time.hpp"
#include "Empresa.hpp"
#include <iostream>
#include <stdlib.h>

ListaJogador listaJogador;
ListaTime listaTime;
ListaEmpresa listaEmpresa;

void gerenciarEmpresa(){
  int opcaoSubMenu = -1;
  while(opcaoSubMenu != 0){
    //system("cls");
    printf("\n================================================================\n");
    printf("          Sistema de Controle para Times Esportivos \n");
    printf("================================================================\n");  
    printf("                    GERENCIAR EMPRESA \n");
    printf("================================================================\n");  
    printf("(1) - Adicionar Empresa e Times \n");
    printf("(2) - Consultar Jogador \n");
    printf("(3) - Lista de Jogadores \n");
    printf("(4) - Relatorio Financeiro \n");
    printf("(0) - Voltar ao Menu Principal \n");
    printf("Digite sua opcao: ");
    cin >> opcaoSubMenu;

    if(opcaoSubMenu==1){

      listaEmpresa.adicionaEmpresa(listaTime);

    }else if(opcaoSubMenu==2){

      listaJogador.consultarJogador();

    }else if(opcaoSubMenu==3){

      listaJogador.listaJogadores();

    }else if(opcaoSubMenu==4){

      listaEmpresa.relatorioFinanceiro();

    }else if(opcaoSubMenu==0){
      return;
    }else{
      cout << "OPCAO INVALIDA! ";
    }
  }
  printf("================================================================\n");
}

void gerenciarTime(){
  int opcaoSubMenu = -1;
  while(opcaoSubMenu != 0){
    //system("cls");
    printf("================================================================\n");
    printf("          Sistema de Controle para Times Esportivos \n");
    printf("================================================================\n");  
    printf("                    GERENCIAR TIME \n");
    printf("================================================================\n");  
    printf("(1) - Adicionar Time e Jogadores \n");
    printf("(2) - Relatoio Geral \n");
    printf("(3) - Relatorio Financeiro \n");
    printf("(0) - Voltar ao Menu Principal \n");
    printf("Digite sua opcao: ");
    cin >> opcaoSubMenu;

    if(opcaoSubMenu==1){

      listaTime.adicionaTime(listaJogador);

    }else if(opcaoSubMenu==2){

      listaTime.relatorioGeral();

    }else if(opcaoSubMenu==3){

      listaTime.relatorioFinanceiro();

    }else if(opcaoSubMenu==0){
      return;
    }else{
      cout << "OPCAO INVALIDA! ";
    }
  }
  printf("================================================================\n");
}

void gerenciarJogador(){
  int opcaoSubMenu = -1;
  while(opcaoSubMenu != 0){
    //system("cls");
    printf("\n\n================================================================\n");
    printf("          Sistema de Controle para Times Esportivos \n");
    printf("================================================================\n");  
    printf("                    GERENCIAR JOGADOR \n");
    printf("================================================================\n");  
    printf("(1) - Adicionar Jogador \n");
    printf("(2) - Lista Jogadores \n");
    printf("(0) - Voltar ao Menu Principal \n");
    printf("Digite sua opcao: ");
    cin >> opcaoSubMenu;

    if(opcaoSubMenu==1){

      listaJogador.adicionaJogador();

    }else if(opcaoSubMenu==2){

      listaJogador.listaJogadores();
     
    }else if(opcaoSubMenu==0){
      return;
    }else{
      cout << "OPCAO INVALIDA! ";
    }
  }
  printf("================================================================\n");  
}


int main() {
  int opcaoMenu = -1;

  while(opcaoMenu != 0){
    system("cls");
    printf("================================================================\n");
    printf("          Sistema de Controle para Times Esportivos \n");
    printf("================================================================\n");
    printf("(1) - Gerenciar Jogador \n");
    printf("(2) - Gerenciar Time \n");
    printf("(3) - Gerenciar Empresa \n");
    printf("(0) - Finalizar \n");
    printf("Digite sua opcao: ");
    cin >> opcaoMenu;

    if(opcaoMenu==1){

      gerenciarJogador();

    }else if(opcaoMenu==2){

      gerenciarTime();

    }else if(opcaoMenu==3){
      
      gerenciarEmpresa();
      
    }else if(opcaoMenu==0){
      cout << "FIM DO PROGRAMA! ";
      return 0;
    }else{
      cout << "OPCAO INVALIDA! ";
    }

  }

  return 0;
}
