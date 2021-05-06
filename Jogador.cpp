#include "Jogador.hpp"
#include "ListaJogador.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

int Jogador::ultimoId = 0;

Jogador::Jogador(string nome, int dia, int mes, int ano, string nacionalidade, string categoria, double salario_bruto){
  this->setId(this->geraId());
  this->setNome(nome);
  this->setCategoria(categoria);
  this->setSalarioBruto(salario_bruto);
  this->setDiaNascimento(dia);
  this->setMesNascimento(mes);
  this->setAnoNascimento(ano);
  this->calculaSalarioLiquido(salario_bruto);
}

Jogador::Jogador(){
  return;
}

string Jogador::getNome(){
  return this->nome;
}

void Jogador::setNome(string nome){
  this->nome = nome;
}

string Jogador::getNacionalidade(){
  return this->nacionalidade;
}

void Jogador::setNacionalidade(string nacionalidade){
  this->nacionalidade = nacionalidade;
}

string Jogador::getCategoria(){
  return this->categoria;
}

void Jogador::setCategoria(string categoria){
  this->categoria = categoria;
}

double Jogador::getSalarioBruto(){
  return this->salario_bruto;
}

void Jogador::setSalarioBruto(double salario_bruto){
  this->salario_bruto = salario_bruto;
}

double Jogador::getSalarioLiquido(){
  return this->salario_liquido;
}

void Jogador::setSalarioLiquido(double salario_liquido){
  this->salario_liquido = salario_liquido;
}

int Jogador::getDiaNascimento(){
  return this->diaNascimento;
}

void Jogador::setDiaNascimento(int dia){
  this->diaNascimento = dia;
}

int Jogador::getMesNascimento(){
  return this->mesNascimento;
}

void Jogador::setMesNascimento(int mes){
  this->mesNascimento = mes;
}

int Jogador::getAnoNascimento(){
  return this->anoNascimento;
}

void Jogador::setAnoNascimento(int ano){
  this->anoNascimento = ano;
}

int Jogador::getId(){
  return this->id;
}

void Jogador::setId(int id){
  this->id = id;
}

int Jogador::geraId()
{
  return this->ultimoId++;
}


double Jogador::getINSS(){
  return this->inss;
}

void Jogador::setINSS(double inss){
  this->inss = inss;
}

double Jogador::getIR(){
  return this->inss;
}

void Jogador::setIR(double ir){
  this->ir = ir;
}


int Jogador::tempoAposentadoria(int idade){
    return 65 - idade;
}

double Jogador::calculaSalarioLiquido(double salario_bruto){
  double inss = 0;
  double salario_liquido = 0;
  double ir = 0;

  if(salario_bruto <= 1100){

    inss = salario_bruto * 0.075;
  
  }else if(salario_bruto > 1100 && salario_bruto <= 2000){ 
    
    inss = salario_bruto * 0.09;
    ir = salario_bruto * 0.075;

  }else if(salario_bruto > 2000 && salario_bruto <= 3100){ 

    inss = salario_bruto * 0.12;
    ir = salario_bruto * 0.15;

  }else if(salario_bruto > 3100 && salario_bruto <= 4100){ 

    inss = salario_bruto * 0.14;
    ir = salario_bruto * 0.22;

  }else if(salario_bruto > 4100){ 

    inss = salario_bruto * 0.14;
    ir = salario_bruto * 0.27;

  }

  salario_liquido = salario_bruto - inss - ir;

  this->setSalarioLiquido(salario_liquido);
  this->setINSS(inss);
  this->setIR(ir);

  return salario_liquido;
}

int Jogador::calculaIdade(int dia_nascimento, int mes_nascimento, int ano_nascimento){
  time_t data_atual = time(NULL);
  struct tm *aTime = localtime(&data_atual);

  int dia = aTime->tm_mday;
  int mes = aTime->tm_mon + 1;
  int ano = aTime->tm_year + 1900;

  int idade_ano = ano - ano_nascimento;

  if(mes < mes_nascimento){

    idade_ano--;

  }else if(mes <= mes_nascimento){

    if(dia < dia_nascimento){
      idade_ano--;
    }

  }

  return idade_ano;
}


