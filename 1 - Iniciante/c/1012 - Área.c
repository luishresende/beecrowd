/*
Escreva um programa que leia três valores com ponto flutuante de 
dupla precisão: A, B e C. Em seguida, calcule e mostre:
a) a área do triângulo retângulo que tem A por base e C por altura.
b) a área do círculo de raio C. (pi = 3.14159)
c) a área do trapézio que tem A e B por bases e C por altura.
d) a área do quadrado que tem lado B.
e) a área do retângulo que tem lados A e B.
Entrada
O arquivo de entrada contém três valores com um dígito após o ponto decimal.

Saída
O arquivo de saída deverá conter 5 linhas de dados. Cada linha 
corresponde a uma das áreas descritas acima, sempre com mensagem 
correspondente e um espaço entre os dois pontos e o valor. O valor 
calculado deve ser apresentado com 3 dígitos após o ponto decimal.
 */
#include <stdio.h>

int main(){
    double A, B, C, pi = 3.14159;
    scanf("%lf %lf %lf", &A, &B, &C);

    double triangulo = A * C / 2; //  A = base, C = altura
    double circulo = pi * (C * C); // C = raio
    double trapezio = (A + B) * C / 2; // A e B são bases e C = altura
    double quadrado = B * B; // B = lado
    double retangulo = A * B; // A e B são os lados

    printf("TRIANGULO: %.3lf\n"
            "CIRCULO: %.3lf\n"
            "TRAPEZIO: %.3lf\n"
            "QUADRADO: %.3lf\n"
            "RETANGULO: %.3lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
    return 0;
}