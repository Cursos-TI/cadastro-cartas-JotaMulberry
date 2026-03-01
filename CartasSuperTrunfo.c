#include <stdio.h>
#include <string.h>//Parece que o strcspn não funciona sem essa biblioteca

//Desafio Super Trunfo - Países
//Tema 1 - Cadastro das cartas
//Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main(){
  //Área para definição das variáveis para armazenar as propriedades das cidades:

  //Usando 1 e 2 para diferenciar qual vai pra qual carta mas usando uma nomenclatura padrão.
  char estado1, estado2;//Cada estado receb uma letra que o identifica(Apenas do A ao H por serem 8 estados).

  char codigo1[3], codigo2[3];//O código é formado por "letra do estado + númeração de 04"(Ex: A01, A02, B01).

  char cidade1[50], cidade2[50];//Recebe a informação do nome da cidade. Era 15 mas por conta do fgets tive que colocar 50.

  int população1, população2;//Quantidade de habitantes(Número inteiro apenas).

  float area1, area2;//Área em km²(Podendo casas decimais).

  float pib1, pib2;//PIB da cidade(Também permitindo casas decimais).

  int pontosTuristicos1, pontosTuristicos2;//Quantidade de pontos turísticos.

  //Área para entrada de dados:
  
  //Inicio:
  printf("\n**SuperTrunfo**\n");
  printf("Insira as infrmações das suas cartas para fazer o cadastro delas.");

  //Área de insersão das informações:
  //Nesta parte de inserção das infromações das cartas segue o mesmo padrão de enunciado, inserir para a primeira carta e depois a segunda carta.

  //Inserir as letras:
  printf("\nInforme a letra que corresponde ao estado de cada carta.(A-H)\n");
  //Foi necessario colocar um espaço para poder inserir o caractere senão ele pulava a segunda carta, acontece com caracteres unicos.
  printf("Letra da primeira carta: ");
  scanf(" %c", &estado1);

  printf("Letra da segunda carta: ");
  scanf(" %c", &estado2);

  //Inserir códigos:
  printf("\nAgora informe o código de cada carta(Os 3 digitos compostos pela letra e por um numero de 01 a 04).\n");

  printf("Código da primeira carta: ");
  scanf("%s", &codigo1);

  printf("Código da segunda carta: ");
  scanf("%s", &codigo2);

  //Inserir o nome da cidade:
  printf("\nMuito bem! Agora agora informe o nome da cidade de cada carta.\n");
  
  printf("Nome da cidade da primeira carta: ");
  fgets(cidade1, 50, stdin);//PROBLEMA! O COMPILADOR PULA ESTA PARTE.
  cidade1[strcspn(cidade1, "\n")] = 0;
  
  printf("Nome da cidade da segunda carta: ");
  fgets(cidade2, 50, stdin);
  cidade2[strcspn(cidade2, "\n")] = 0;

  //Inserir a população:
  printf("\nÓtimo! Coloque agora a população(Sem pontuação, apenas os números).\n");

  printf("População da primeira carta: ");
  scanf("%d", &população1);

  printf("População da segunda carta: ");
  scanf("%d", &população2);

  //Inserir a area em km²:
  printf("\nInsira a área em km²(Agora pode usar a pontuação).\n");

  printf("Área da primeira carta: ");
  scanf("%f", &area1);

  printf("Área da segunda carta: ");
  scanf("%f", &area2);

  //Inserir o PIB:
  printf("\nQuase lá! Coloque o PIB de cada carta.\n");

  printf("PIB da primeira carta: ");
  scanf("%f", &pib1);

  printf("PIB da segunda carta: ");
  scanf("%f", &pib2);

  //Inserir a quantidade de pontos turísticos:
  printf("\nTerminando! Informe a quantidade de pontos turisticos de cada carta.\n");

  printf("Pontos turísticos da primeira carta: ");
  scanf("%d", &pontosTuristicos1);

  printf("Pontos turísticos da segunda carta: ");
  scanf("%d", &pontosTuristicos2);

  //Área para exibição dos dados das cartas:

  printf("\nPronto! Cadastro concluído, vamos vizualizar as informações de suas cartas.\n");

  printf("\n-Carta 1- \n Estado:%c \n Código da carta:%s \n Cidade:%s \n População:%d \n Área:%f \n PIB:%f \n Pontos Turísticos:%d \n", estado1,codigo1,cidade1,população1,area1,pib1,pontosTuristicos1);
  
  printf("\n-Carta 2- \n Estado:%c \n Código da carta:%s \n Cidade:%s \n População:%d \n Área:%f \n PIB:%f \n Pontos Turísticos:%d \n", estado2,codigo2,cidade2,população2,area2,pib2,pontosTuristicos2);

return 0;
} 