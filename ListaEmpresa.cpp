 
#include "ListaTime.hpp"
#include "ListaEmpresa.hpp"
#include "Empresa.hpp"
#include "Time.hpp"
#include <iostream>
#include <stdlib.h>

void ListaEmpresa::adicionaEmpresa(ListaTime listaTime){
  int id;
  string nome;
  string estado;

  Empresa empresa;

  system("cls");
  printf("================================================================\n");
  printf("          Sistema de Controle para Times Esportivos \n");
  printf("                    Inserir Empresa e Times \n");
  printf("================================================================\n");
  printf("Nome Fantasia...:");
  cin >> nome;

  printf("Estado...:");
  cin >> estado;

  printf("Quais times farao parte dessa empresa? \n");

  empresa.setNomeFantasia(nome);
  empresa.setEstado(estado);

  listaTime.listaTimes();
  printf("================================================================\n");

  int opcaoTime = -1;
  int idTime = 0;

  while(opcaoTime!=0){
    printf("Informe o id do Time..: ");
    cin >> idTime;

    Time time;
    time = listaTime.getTime(idTime);
    empresa.adicionaTime(time);

    printf("Deseja incluir outro time? (1) SIM | (0) NAO..: ");
    cin >> opcaoTime;
  }

  empresas.push_back(empresa);
}


void ListaEmpresa::listaJogadores(){
  system("cls");
  printf("================================================================\n");
  printf("                Lista de Jogadores da Empresa \n");
  printf("================================================================\n");

  for(int e=0; e <= empresas.size(); e++){
    for(int t=0; t < empresas[e].getTimes().size(); t++){
      for(int j = 0; j < empresas[e].getTimes()[t].getJogadores().size(); j++){
        cout << " Id: [" << empresas[e].getTimes()[t].getJogadores()[j].getId() << "] | Nome: " <<  empresas[e].getTimes()[t].getJogadores()[j].getNome();
      }
    }
  }
}

void ListaEmpresa::relatorioFinanceiro(){
  system("cls");
  printf("================================================================\n");
  printf("               Relatorio Financeiro da Empresa \n");
  printf("================================================================\n");

  for(int e=0; e < empresas.size(); e++){
    for(int t=0; t < empresas[e].getTimes().size(); t++){
      
      double total_salarios = 0;
      double total_inss = 0;
      double total_ir = 0;
      
      for(int j = 0; j < empresas[e].getTimes()[t].getJogadores().size(); j++){

        total_salarios += empresas[e].getTimes()[t].getJogadores()[j].getSalarioBruto();
        total_inss += empresas[e].getTimes()[t].getJogadores()[j].getINSS();
        total_ir += empresas[e].getTimes()[t].getJogadores()[j].getIR();

      }

      cout << "Total de salarios a serem pagos..: R$ " << total_salarios << endl;
      cout << "Total de INSS a serem pagos......: R$ " << total_inss << endl;
      cout << "Total de IR a serem pagos........: R$ " << total_ir << endl;

    }
  }
}

