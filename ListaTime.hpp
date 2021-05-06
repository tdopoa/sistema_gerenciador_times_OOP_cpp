#ifndef ListaTime_hpp
#define ListaTime_hpp

#include "Time.hpp"
#include "Jogador.hpp"
#include "ListaJogador.hpp"
#include <vector> // vetor dinamico

class ListaTime
{
  public:
    void adicionaTime(ListaJogador listajogador);
    void listaTimes();
    void relatorioGeral();
    void relatorioFinanceiro();
    Time getTime(int id);

  private:
    vector<Time> times;
    vector<Jogador> jogadores;
};

#endif
