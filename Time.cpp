#include "Time.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int Time::ultimoId = 0;

Time::Time(string nome, string categoria){
  this->setId(this->geraId());
  this->setNome(nome);
  this->setCategoria(categoria);
}

Time::Time(){
}

string Time::getNome(){
  return this->nome;
}

void Time::setNome(string nome){
  this->nome = nome;
}

string Time::getCategoria(){
  return this->categoria;
}

void Time::setCategoria(string categoria){
  this->categoria = categoria;
}

int Time::getId(){
  return this->id;
}

void Time::setId(int id){
  this->id = id;
}

int Time::geraId()
{
  return this->ultimoId++;
}

void Time::relatorioGeral(){
}

void Time::relatorioFinanceiro(){
}

void Time::adicionaJogador(Jogador jogador)
{
  this->jogadores.push_back(jogador);
}

vector<Jogador> Time::getJogadores(){
  return this->jogadores;
}