#ifndef Time_hpp
#define Time_hpp
#include <vector>
#include<iostream>
#include "Jogador.hpp"
using namespace std;

class Time
{
  public:
      Time(string nome, string categoria);
      Time();

      string getNome();
      void setNome(string nome);

      string getCategoria();
      void setCategoria(string categoria);

      int getId();
      void setId(int id);

      vector<Jogador> getJogadores();

      void adicionaJogador(Jogador jogador);
      void relatorioGeral();
      void relatorioFinanceiro();
      
  private:
      int id;
      string nome;
      string categoria;
      vector <Jogador> jogadores;
      int static ultimoId;
      int geraId();
    
};

#endif /* Jogador_hpp */