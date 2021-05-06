#ifndef Jogador_hpp
#define Jogador_hpp

#include<iostream>
using namespace std;

class Jogador
{
  public:
    Jogador(string nome, int dia, int mes, int ano, string nacionalidade, string categoria, double salario_bruto);
    Jogador();

    string getNome();
    void setNome(string nome);

    string getNacionalidade();
    void setNacionalidade(string nacionalidade);

    string getCategoria();
    void setCategoria(string categoria);

    double getSalarioLiquido();
    void setSalarioLiquido(double salario_liquido);

    double getSalarioBruto();
    void setSalarioBruto(double salario_bruto);

    int getDiaNascimento();
    void setDiaNascimento(int dia);

    int getMesNascimento();
    void setMesNascimento(int Mes);

    int getAnoNascimento();
    void setAnoNascimento(int ano);

    double getINSS();
    void setINSS(double inss);

    double getIR();
    void setIR(double ir);
    
    int getId();
    void setId(int id);

    int geraId();
    int tempoAposentadoria(int idade);
    int calculaIdade(int dia_nascimento, int mes_nascimento, int ano_nascimento);
    double calculaSalarioLiquido(double salario_bruto);

  private:
    int id;
    int diaNascimento;
    int mesNascimento;
    int anoNascimento;
    int static ultimoId;
    double salario_bruto;
    double salario_liquido;
    double inss;
    double ir;
    string nome;
    string nacionalidade;
    string categoria;
};

#endif /* Jogador_hpp */