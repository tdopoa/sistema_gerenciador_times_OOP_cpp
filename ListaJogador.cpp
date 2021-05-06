 
#include "ListaJogador.hpp"
#include <iostream>
#include <stdlib.h>

void ListaJogador::adicionaJogador(){
  int id;
  int diaNascimento;
  int mesNascimento;
  int anoNascimento;
  double salario_bruto;
  string nome;
  string nacionalidade;
  string categoria;

  system("cls");
  printf("================================================================\n");
  printf("          Sistema de Controle para Times Esportivos \n");
  printf("                    Inserir Jogador \n");
  printf("================================================================\n");
  printf("Nome...:");
  cin >> nome;

  printf("Dia data de nascimento..:");
  cin >> diaNascimento;

  printf("Mes data de nascimento..:");
  cin >> mesNascimento;

  printf("Ano data de nascimento..:");
  cin >> anoNascimento;

  printf("Nacionalidade..:");
  cin >> nacionalidade;

  printf("Categoria (B) Base | (P) Profissional...:");
  cin >> categoria;
  if(categoria=="B"){
    categoria = "BASE";
  }else{
    categoria = "PROFISSIONAL";
  }

  printf("Salario Bruto..:");
  cin >> salario_bruto;

  jogadores.push_back(Jogador(nome, diaNascimento, mesNascimento, anoNascimento, nacionalidade, categoria, salario_bruto));
}


void ListaJogador::listaJogadores(){
  Jogador jogador;
  system("cls");
  printf("\n================================================================\n");
  cout << "Total de " << jogadores.size() << " jogadores \n";
  printf("================================================================\n");  
  for(int i=0; i < jogadores.size(); i++)
  {
      int idade = jogador.calculaIdade(jogadores[i].getDiaNascimento(), jogadores[i].getMesNascimento(), jogadores[i].getAnoNascimento());
      cout << " | Id.............................................: [" << jogadores[i].getId() << "]" << endl
        << " | Nome...........................................: "  << jogadores[i].getNome() << endl
        << " | Categoria......................................: " << jogadores[i].getCategoria() << endl
        << " | Idade..........................................: " << idade << " anos " << endl
        << " | Tempo para se aposentar (65 anos pelo INSS)....: " << jogador.tempoAposentadoria(idade) << " anos " << endl
        << " | Salario Bruto..................................: R$ " << jogadores[i].getSalarioBruto() << endl
        << " | Salario Liquido................................: R$ " << jogador.calculaSalarioLiquido(jogadores[i].getSalarioBruto()) << endl
        << " --------------------------------------------------------- " << endl;
  }
}

Jogador ListaJogador::getJogador(int id){
  Jogador jogador;

  for(int i=0; i < jogadores.size(); i++)
  {
    if(jogadores[i].getId() == id){
      return jogadores[i];
    }
  }

  return jogador;
}


void ListaJogador::consultarJogador(){
  int idJogador;
  string nome;
  string opt;
  system("cls");
  printf("\n================================================================\n");
  printf("          Sistema de Controle para Times Esportivos \n");
  printf("                    CONSULTAR JOGADOR \n");
  printf("================================================================\n");
  printf("Voce deseja consultar por codigo ou por nome? (C) Codigo| (N) Nome..:");
  cin >> opt;

  if(opt=="C"){
    printf("\nInforme o codigo do jogador..: ");
    cin >> idJogador;
    for(int i=0; i < jogadores.size(); i++){
      if(jogadores[i].getId()==idJogador){
        cout << "\n Id: [" << jogadores[i].getId() << "] | Nome: " << jogadores[i].getNome() << " | Categoria: " << jogadores[i].getCategoria() << " | Salario Bruto: " << jogadores[i].getSalarioBruto() << endl;        
      }
    }
  }else{
    printf("\nInforme o nome do jogador..: ");
    cin >> nome;
    for(int i=0; i < jogadores.size(); i++){
      if(jogadores[i].getNome()==nome){
        cout << "\n Id: [" << jogadores[i].getId() << "] | Nome: " << jogadores[i].getNome() << " | Categoria: " << jogadores[i].getCategoria() << " | Salario Bruto: " << jogadores[i].getSalarioBruto() << endl;        
      }
    }
  }

}

