//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Constantes
#define tamanho 5
//Estrutura da Pilha
struct tpilha {
int dados[tamanho];
int ini;
int fim;
};
//Variáveis globais do tipo tpilha
struct tpilha pilha;
struct tpilha pilhando;
int op;
//Protipação
void pilha_entrar();
void pilha_entrando();

void pilha_sair();

void pilha_cres();
void pilha_decr();

void menu_mostrar();
//Função principal
int main(){
setlocale(LC_ALL, "Portuguese");
op = 1;
pilha.ini = 0;
pilha.fim = 0;
while (op != 0) {
system("cls"); //limpa a tela (só funciona no windows)
pilha_cres();
pilha_decr();
menu_mostrar();
scanf("%d", &op);
switch (op) {
case 1:
pilha_entrar();
break;
case 2:
pilha_sair();
break;
}
}
return(0);
}
//Adicionar um elemento no final da Pilha
void pilha_entrar(){
if (pilha.fim == tamanho) {
printf("\nA pilha está cheia, impossível empilhar!\n\n");
system("pause");
}
else {
printf("\nDigite o valor a ser empilhado: ");
scanf("%d", &pilha.dados[pilha.fim]);
pilha.fim++;
}
}

//Adicionar um elemento no final de Pilhando
void pilha_entrando(int valor){
if (pilhando.fim == tamanho) {
printf("\nA pilha está cheia, impossível empilhar!\n\n");
system("pause");
}
else {
pilhando.dados[pilhando.fim] = valor;
pilhando.fim++;
}
}

//Retirar o último elemento da Pilha
void pilha_sair() {
if (pilha.ini == pilha.fim) {
printf("\nA pilha está vazia, impossível desempilhar!\n\n");
system("pause");
}
else {
pilha_entrando(pilha.dados[pilha.fim-1]);
pilha.dados[pilha.fim-1] = 0;
pilha.fim--;
}
}
//Mostrar o conteúdo da Pilha 1
void pilha_cres() {
int i;
printf("[ ");
for (i = 0; i < tamanho; i++) {
printf("%d ", pilha.dados[i]);
}
printf("]\n\n");
}
//Mostrar o conteúdo da Pilha 2
void pilha_decr() {
int i;
printf("[ ");
for (i = 0; i < tamanho; i++) {
printf("%d ", pilhando.dados[i]);
}
printf("]\n\n");
}
//Mostrar o menu de opções
void menu_mostrar() {
printf("\nEscolha uma opção:\n");
printf("1 - Empilhar\n");
printf("2 - Desempilhar\n");
printf("0 - Sair\n\n");
}
