#include <stdio.h>

int main () {

    char letra1;
    char codigo1[10];
    char cidade1 [10];
    int populacao1;
    int ponto1;
    float area1;
    float PIB1;
    int populacao2;
    int ponto2;
    float area2;
    float PIB2;
    char letra2 [5];
    char codigo2 [10];
    char cidade2 [10];

//Quis criar uma interação com o usuário criando as cartas de maneira limpa com o código


printf ("Vamos fazer o cadastro de 2 cartas \n");
printf ("\n");

printf ("Vamos fazer a PRIMEIRA carta, me diga por favor, uma letra de A a H (representando um dois oito estados): \n");
scanf ("%c", &letra1);

printf ("A letra do estado seguida de um número de 01 a 04, esse será o código da carta: \n");
scanf ("%s", codigo1);


printf ("Agora me informa por favor, o nome de uma cidade: \n");
scanf ("%s",cidade1);


printf ("Agora me informa o número da população dessa cidade: \n");
scanf ("%d", &populacao1);


printf("Agora preciso que me informe a área desta cidade em quilômetros quadrados: \n");
scanf ("%f", &area1);


printf ("Me diz qual PIB dessa cidade: \n");
scanf("%f", &PIB1);


printf ("Agora por último, me diz quantos pontos turisticos tem nessa cidade: \n");
scanf ("%d", &ponto1);

printf ("\n");


//cadastro da segunda carta igual ao cadastro da primeira carta, com código de fácil compreensão e não tão extensos.


printf ("Vamos fazer a SEGUNDA carta,\nMe diga por favor, uma letra de A a H (representando um dois oito estados): \n");
scanf ("%s", letra2);

printf ("A letra do estado seguida de um número de 01 a 04, esse será o código da carta: \n");
scanf ("%s", codigo2);

printf ("Agora me informa por favor, o nome de uma cidade: \n");
scanf ("%s",cidade2);


printf ("Agora me informa o número da população dessa cidade: \n");
scanf ("%d", &populacao2);

printf("Agora preciso que me informe a área desta cidade em quilômetros quadrados: \n");
scanf ("%f", &area2);

printf ("Me diz qual PIB dessa cidade: \n");
scanf("%f", &PIB2);

printf ("Agora por último, me diz quantos pontos turisticos tem nessa cidade: \n");
scanf ("%d", &ponto2);





// Os calculos na variavel float, de densidade e pib per capita


float densidade1 =  populacao1/ area1;
float densidade2 = populacao2/ area2;
float percapita1 = PIB1/ populacao1;
float percapita2 = PIB2/ populacao2;
float superpoder1 = area1 + populacao1 + PIB1 + ponto1 + percapita1 + densidade1/1;
float superpoder2 = area2 + populacao2 + PIB2 + ponto2   + percapita2 + densidade2/ 1;
float carta1= superpoder1 + area1 + populacao1 + PIB1 + ponto1 + percapita1 + densidade1/1;
float carta2= superpoder2 + area2 + populacao2 + PIB2    + ponto2 + percapita2 + densidade2/1;

// agora a apresentação das duas cartas de forma mais limpa que consegui reproduzir

printf ("\n");
printf ("\n");


printf (" CARTA 1 \n");

printf (" Estado: %c \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Número De Pontos Turísticos: %d \n Densidade Populacional: %.2f \n PIB Per Capita: %.2f \n Super Poder: %f \n", letra1, codigo1, cidade1, populacao1, area1, PIB1, 
                                                                                                                                                                                            ponto1, densidade1, percapita1,superpoder1);

printf  ("\n");
printf ("\n");  

printf (" CARTA2 \n");

printf (" Estado: %s \n Código: %s \n Nome da Cidade: %s \n População: %d \n Área: %f \n PIB: %f \n Número De Pontos Turísticos: %d \n Densidade Populacional: %.2f \n PIB Per Capita: %.2f \n Super poder: %f \n", letra2, codigo2, cidade2, populacao2, area2, PIB2, ponto2, densidade2, percapita2, superpoder2);

printf ("\n");

printf ("Agora vamos ver quem tem a maior população \n");

printf ("Carta 1: %s %d \n ", cidade1, populacao1);
printf ("Carta 2: %s %d \n", cidade2, populacao2);

//aplicação de estrutura composta para o super trunfo

if (populacao1>populacao2) {
printf ("Carta 1 (%s) ganhou!!! \n", cidade1);
} else {
printf ("Carta 2 (%s) ganhou!!! \n", cidade2);

}


}

