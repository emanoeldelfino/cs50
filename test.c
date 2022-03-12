#include <stdlib.h>
#include <stdio.h>
#include <stdio_ext.h> // <-- para usar o __fpurge()

/*
  Deseja-se publicar o número de acertos de cada
  aluno em uma prova em forma de testes. A prova
  consta de 3 questões, cada uma com cinco alternativas
  identificadas por A, B, C, D e E. Para isso são dados:
    - O Gabarito
    - O Número de Alunos
    - O Cartão de Resposta
*/

int main() {

  /*
  char mensagem[16] = "Ola, mundo!";
                     //   ^
  mensagem[0] = 'A'; //   |
  mensagem[2] = 'o'; //   |
  mensagem[3] = 0; // ----+
  printf("Mensagem: [%s]\n", mensagem);
  printf("Bônus: [%s]\n", mensagem + 5);
  return EXIT_SUCCESS;
  */

  // -------

  // Declaramos nossas variáveis!
  int i, j;
  int numero;
  int acertos;
  char resposta;
  char nome[64]; // <- uma string!
  char gabarito[4] = { 0, 0, 0, 0 };
  //    \ /            ^
  //     |             |
  //     +-------------+

  printf("Informe o gabarito:\n");

  // Vamos verificar cada resposta!
  for(i = 0; i < 3; i++) {
    printf("  Questão #%d: ", i + 1);
    // Lemos apenas um caracter!
    scanf("%c", &gabarito[i]);
    // Quando digitamos um caracter e damos enter,
    // o "enter" é o caracter \n, e isso pode dificultar
    // a nossa entrada! Precisamos limpar a entrada
    // após cada leitura...
    // Como estamos no Linux...
    __fpurge(stdin);
    // Para limpar o teclado no Windows:
    // fflush(stdin);
  }

  // Como nós sabemos que existe um 0 no final de gabarito,
  // podemos mostrá-lo na tela!
  printf("Gabarito = [%s]\n", gabarito);

  // Vamos solicitar a quantidade de alunos
  printf("Digite a quantidade de alunos:\n");
  scanf("%d", &numero);

  // Para cada aluno existente...
  for(i = 0; i < numero; i++) {
    // Solicita o nome do aluno!
    printf("Digite o nome do aluno: ");
    // Lembramos que "nome" é o endereço do primeiro elemento
    // do vetor, então não precisamos usar o & aqui!
    scanf("%s", nome);
    // A forma IDEAL e SEGURA seria:
    // fgets(nome, 64, stdin); // <-- evita ler mais que 63 caracteres!
    // Vamos limpar o teclado, pra remover o \n digitado!
    __fpurge(stdin);

    // Vamos contar o número de acertos!
    acertos = 0;
    for(j = 0; j < 3; j++) {
      // Solicita a questão
      // Lembrando: i conta o aluno
      //            j conta a questão
      printf("  Questão #%d: ", j + 1);
      scanf("%c", &resposta);
      __fpurge(stdin);

      // O aluno acertou essa questão?
      if(resposta == gabarito[j]) {
        acertos++;
      }
    }

    // Agora que sabemos o resultado...
    printf("O aluno %s acertou %d questões!\n", nome, acertos);
  }

  return 0;
}

