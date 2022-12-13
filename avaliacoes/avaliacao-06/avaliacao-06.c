#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 30

int main() {
    int i;
    int pares[TAMANHO];
    FILE* fp;
    
    for(i = 0; i < TAMANHO; i++)
    {
        pares[i] = (i+1)*2;
    }      
    
    if ((fp = fopen("arquivos.txt", "w"))==NULL)
    {
        printf("o arquivo não pode ser criado.\n");
        exit(1);
    } 
    
    for  (i = 0; i < TAMANHO; i++)
        fprintf(fp, "%d\n", pares[i]);
    
    fclose(fp);
    
    return 0;
}
