#ifndef ListaJogador_hpp
#define ListaJogador_hpp

#include "Jogador.hpp"
#include <vector> // vetor dinamico

class ListaJogador
{
public:
    void listaJogadores();
    void adicionaJogador();
    void consultarJogador();
    Jogador getJogador(int id);

private:
    //vetor dinamico de jogadores
    vector<Jogador> jogadores;
    int static ultimoId;
};

#endif
