#include "Empresa.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int Empresa::ultimoId = 0;

Empresa::Empresa(string nome, string estado){
  this->setId(this->geraId());
  this->setNomeFantasia(nome);
  this->setEstado(estado);
}

Empresa::Empresa(){
}

string Empresa::getNomeFantasia(){
  return this->nome_fantasia;
}

void Empresa::setNomeFantasia(string nome){
  this->nome_fantasia = nome;
}

string Empresa::getEstado(){
  return this->estado;
}

void Empresa::setEstado(string estado){
  this->estado = estado;
}

int Empresa::getId(){
  return this->id;
}

void Empresa::setId(int id){
  this->id = id;
}

int Empresa::geraId()
{
    return this->ultimoId++;
}

void Empresa::consultaJogador(int id){
  
}

void Empresa::consultaJogador(string nome){
}

void Empresa::listaJogadores(){
}

void Empresa::relatorioFinanceiro(){
}

void Empresa::adicionaTime(Time time)
{
  this->times.push_back(time);
}

vector<Time> Empresa::getTimes(){
  return this->times;
}