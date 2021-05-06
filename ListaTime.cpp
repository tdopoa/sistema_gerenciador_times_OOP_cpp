 
#include "ListaTime.hpp"
#include "ListaJogador.hpp"
#include "Jogador.hpp"
#include "Time.hpp"
#include <iostream>
#include <stdlib.h>

void ListaTime::adicionaTime(ListaJogador listaJogador){
  int id;
  string nome;
  string categoria;
  Time time;

  system("cls");
  printf("================================================================\n");
  printf("          Sistema de Controle para Times Esportivos \n");
  printf("                    Inserir Time \n");
  printf("================================================================\n");
  printf("Nome do Time..:");
  cin >> nome;

  printf("Categoria (B) Base | (P) Profissional..: ");
  cin >> categoria;

  if(categoria=="B"){
    categoria = "BASE";
  }else{
    categoria = "PROFISSIONAL";
  }

  printf("================================================================\n");
  printf("Quais jogadores farao parte desse time? \n");
  printf("================================================================\n");

  listaJogador.listaJogadores();

  int opcaoJogador = -1;
  int idJogador = 0;

  while(opcaoJogador != 0){
    printf("Informe o id do jogador..: ");
    cin >> idJogador;
    cout << idJogador;

    Jogador jogador;
    jogador = listaJogador.getJogador(idJogador);

    time.adicionaJogador(jogador);

    printf("Deseja incluir outro jogador? (1) SIM | (0) NAO..: ");
    cin >> opcaoJogador;
  }

  time.setNome(nome);
  time.setCategoria(categoria);
  times.push_back(time);
}

void ListaTime::listaTimes(){
  cout << "Total de " << times.size() << " times disponiveis! \n";
  for(int i=0; i < times.size(); i++)
  {
    cout << " Id: [" << times[i].getId() << "] | Nome: " << times[i].getNome() << endl;
  }
}

Time ListaTime::getTime(int id){
  Time time;
  for(int i=0; i < times.size(); i++)
  {
    if(times[i].getId()==id){
      time = times[i];
      return time;
    }
  }
  return time;
}

void ListaTime::relatorioGeral(){
  system("cls");
  cout << "Total de " << times.size() << " times! \n";
  for(int i=0; i < times.size(); i++)
  {
    cout << " ---------------------- Nome:" << times[i].getNome() << " ---------------------" << endl;
    cout << " ----------- JOGADORES -----------" << endl;

    for(int j=0; j < times[i].getJogadores().size(); j++){
      cout << " Jogador.......:" << times[i].getJogadores()[j].getNome() << endl;
      cout << " Categoria.....:" << times[i].getJogadores()[j].getCategoria() << endl;
      cout << " Idade.........:" << times[i].getJogadores()[j].calculaIdade(times[i].getJogadores()[j].getDiaNascimento(), times[i].getJogadores()[j].getMesNascimento(), times[i].getJogadores()[j].getAnoNascimento()) << " anos " << endl;
      cout << " Salario Bruto.: R$ " << times[i].getJogadores()[j].getSalarioBruto() << endl;
      cout << " ------------------------------------------------------" << endl;
    }

  }
}

void ListaTime::relatorioFinanceiro(){
  system("cls");
  cout << "Total de " << times.size() << " times! \n";
  for(int i=0; i < times.size(); i++)
  {
    cout << " ---------------------- Nome do Time : " << times[i].getNome() << " ---------------------" << endl;
    cout << " ----------- JOGADORES ----------- " << endl;

    for(int j=0; j < times[i].getJogadores().size(); j++){
      cout << " Jogador.......: " << times[i].getJogadores()[j].getNome() << endl;
      cout << " Salario Bruto...: R$ " << times[i].getJogadores()[j].getSalarioBruto() << endl;
      cout << " Salario Liquido.: R$ " << times[i].getJogadores()[j].calculaSalarioLiquido(times[i].getJogadores()[j].getSalarioBruto()) << endl;
      cout << " ------------------------------------------------------" << endl;
    }
  }
}
