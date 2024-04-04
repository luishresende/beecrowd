/*
Leia um valor inteiro correspondente à idade de uma pessoa em 
dias e informe-a em anos, meses e dias

Obs.: apenas para facilitar o cálculo, considere todo ano com 
365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá 
uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. 
Este é apenas um exercício com objetivo de testar raciocínio 
matemático simples.

Entrada
O arquivo de entrada contém um valor inteiro.

Saída
Imprima a saída conforme exemplo fornecido.
 */
#include <stdio.h>

int main(){
    int dias, meses, anos, entrada;

    scanf("%d", &entrada);

    anos = entrada/365; // Obtendo a quantidade de anos através da divisão por 365
    entrada -= anos * 365; // Reduzindo da entrada a quantidade de dias que agora são representada pelos anos
    meses = entrada/30; // Obtendo a quantidade de meses através da divisão por 30
    entrada -= meses * 30; // Reduzindo da entrada a quantidade de dias que agora são representada pelos meses
    dias = entrada; // O que sobrou são os dias

    printf("%d ano(s)\n"
           "%d mes(es)\n"
           "%d dia(s)\n", anos, meses, dias);

    return 0;
}