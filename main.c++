#include <stdio.h>
#include <locale.h>


main(){

    setlocale(LC_ALL,"Portuguese");

     //Declaração de variavel

        int continuar, acerto=0;

        int P1, P2, P3, P4, P5, P6, P7, P8, P9, P10;

    //Codigo

    printf("Seja Bem vindo ao quiz de astronomia \n");
    printf("Serão 10 perguntas sobre astronomia \n");
    printf("Boa Sorte!");
    printf("\n");

    printf("\nPrimeira Pergunta: \n");
    printf("Qual a verdadeira cor do sol? \n");
    printf("1 - Vermelho \n");
    printf("2 - Branco \n");
    printf("3 - Amarelo \n");
    scanf("%d", &P1);


    if (P1==2){

        printf(" \a Resposta correta! \n");
        acerto++;
        

    }
      else {

        printf(" Incorreta! \n");
    
      }
  
    printf("Segunda pergunta: \n");
    printf("Quantos Planetas existem? \n");
    printf("1 - Sete \n");
    printf("2 - Duzentos \n");
    printf("3 - Oito \n");
    scanf("%d", &P2);

    if (P2==3){

        printf(" \a Resposta correta! \n");
        acerto++;
        
    }
      else {

        printf(" Incorreta! \n");
    
      }

    printf("Terceira pergunta: \n");
    printf("Em que ano o homem pisou na lua? \n");
    printf("1 - 1967 \n");
    printf("2 - 1964 \n");
    printf("3 - 1969 \n");
    scanf("%d", &P3);

    if (P3==3){

        printf(" \a Resposta correta! \n");
        acerto++;
    }
      else {

        printf(" Incorreta! \n");

      }

    printf("Quarta pergunta: \n");
    printf("Qual o nome da nossa galaxia? \n");
    printf("1 - Via láctea \n");
    printf("2 - Milkway \n");
    printf("3 - Voltz \n");
    scanf("%d", &P4);

    if (P4==1){

        printf(" \a Resposta correta! \n");
        acerto++;
    }
      else {

        printf(" Incorreta! \n");
    
      }

    printf("Quinta pergunta: \n");
    printf("Oque é astronomia? \n");
    printf("1 - Ciência para o estudo do universo \n");
    printf("2 - Marca de leite \n");
    printf("3 - Ciência para estudo de leite \n");
    scanf("%d", &P5);

    if (P5==1){

        printf(" \a Resposta correta! \n");
        acerto++;

    }
      else {

        printf(" Incorreta! \n");

      }

    printf("Sexta pergunta: \n");
    printf("Do que é feito uma estrela? \n");
    printf("1 - Leite \n");
    printf("2 - Plasma \n");
    printf("3 - Leite desnatado \n");
    scanf("%d", &P6);

    if (P6==2){

        printf(" \a Resposta correta! \n");
        acerto++;

      }

      else {

        printf(" Incorreta! \n");

      }

    printf("Setima Pergunta: \n");
    printf("Qual planeta mais proximo do sol? \n");
    printf("1 - Terra \n");
    printf("2 - Venus\n");
    printf("3 - Mercurio \n");
    scanf("%d", &P7);

    if (P7==3){

        printf(" \a Resposta correta! \n");
        acerto++;
    }
      else {

        printf(" Incorreta! \n");

      }

    printf("Oitava pergunta: \n");
    printf("Que ano a nasa foi criada? \n");
    printf("1 - 400 A.c  \n");
    printf("2 - 1958 \n");
    printf("3 - 2022 \n");
    scanf("%d", &P8);

    if (P8==2){

        printf(" \a Resposta correta! \n");
        acerto++;
    }
      else {

        printf(" Incorreta! \n");
      }

    printf("Nona pergunta: \n");
    printf("Quem criou a nasa? \n");
    printf("1 - Seu zé ali do bar \n");
    printf("2 - Dwight D. Eisenhower \n");
    printf("3 - Doutor Claudio \n");
    scanf("%d", &P9);

    if (P9==2){

        printf(" \a Resposta correta! \n");
        acerto++;
    }
      else {

        printf(" Incorreta! \n");

      }

    printf("Decima pergunta: \n");
    printf("Qual o raio médio da lua? \n");
    printf("1 - 1,079.6 1,737.5 milhas \n");
    printf("2 - 7,079.9 1,787.5 milhas\n");
    printf("3 - 1,079.9 1,997.9 milhas \n");
    scanf("%d", &P10);

    if (P10==1){

        printf(" \a Resposta correta! \n");
        acerto++;
    }
      else {

        printf(" Incorreta! \n");
      }


      printf("Você acertou %d questoes \n", acerto);

      if (acerto>=5){

        printf("Sua nota foi decente!");
  
      }
      else {

        printf("Sua nota ta complicada estude mais! \n");
 
      }

}