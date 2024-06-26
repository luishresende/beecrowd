/*
Leia um valor inteiro. A seguir, calcule o menor número de notas 
possíveis (cédulas) no qual o valor pode ser decomposto. As notas 
consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o 
valor lido e a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 1000000).

Saída
Imprima o valor lido e, em seguida, a quantidade mínima de notas 
de cada tipo necessárias, conforme o exemplo fornecido. Não esqueça 
de imprimir o fim de linha após cada linha, caso contrário seu 
programa apresentará a mensagem: “Presentation Error”.
 */
#include <stdio.h>

int main(){
    int cedulas[8] = {100, 50, 20, 10, 5, 2, 1}, value, cont;

    scanf("%d", &value);
    printf("%d\n", value);
    
    for(int i = 0; i < 7; i++){
        cont = 0;
        while(value >= cedulas[i]){
            cont++;
            value -= cedulas[i];
        }

        printf("%d nota(s) de R$ %d,00\n", cont, cedulas[i]);
    }
    return 0;
}