#ifndef Empresa_hpp
#define Empresa_hpp

#include <vector>
#include<iostream>
#include "Time.hpp"

using namespace std;

class Empresa
{
  public:
    Empresa(string nome, string estado);
    Empresa();

    string getNomeFantasia();
    void setNomeFantasia(string nome);

    string getEstado();
    void setEstado(string Estado);

    int getId();
    void setId(int id);

    int geraId();

    vector<Time> getTimes();

    void consultaJogador(int id);
    void adicionaTime(Time time);
    void consultaJogador(string nome);
    void listaJogadores();
    void relatorioFinanceiro();

  private:
    int id;
    int static ultimoId;
    string nome_fantasia;
    vector <Time> times;
    string estado;

};

#endif 