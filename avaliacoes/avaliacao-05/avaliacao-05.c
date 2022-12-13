#include <stdlib.h>
#include <stdio.h>

#define TAMANHO 1000


int main()
{
  char texto[TAMANHO];
  FILE* fp;
  
  printf ( "escreva o texto que deseja gravar no arquivo (maximo %d caracteres).\n", TAMANHO - 1);
  fgets(texto, TAMANHO, stdin);
  
  if((fp = fopen("arquivo.txt","w"))==NULL)
  {
    printf("não pode ser aberto tal arquivo.\n");
    exit(1);
  }
  
  fputs(texto, fp);
  fclose(fp);
  
  return 0;
}
