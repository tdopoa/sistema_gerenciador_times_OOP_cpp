#ifndef ListaEmpresa_hpp
#define ListaEmpresa_hpp

#include "Empresa.hpp"
#include "Time.hpp"
#include "ListaTime.hpp"
#include <vector> // vetor dinamico

class ListaEmpresa
{
  public:
    void adicionaEmpresa(ListaTime listaTime);
    void listaJogadores();
    void relatorioFinanceiro();

  private:
    vector<Time> times;
    vector<Empresa> empresas;
};

#endif