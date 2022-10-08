#include <stdio.h>
#include <string.h>
#include <locale.h>
  
void inverte(char *texto)
{
    setlocale(LC_ALL, "Portuguese");
    int posicao, comprimento, auxiliar;
    comprimento = strlen(texto);
    
    for (posicao = 0; posicao < comprimento/2; posicao++)
    {
        auxiliar = texto[posicao]; // texto[0] = 'G';
        texto[posicao] = texto[comprimento - 1 - posicao]; // substituiu G por l
        texto[comprimento - 1 - posicao] = auxiliar;
    }  
}

int main()  
{
    char meu_texto[255];
    printf ("Insira um texto: ");
    fgets(meu_texto, 255, stdin);

    printf ("Antes de inverter o texto:\n%s\n", meu_texto);
    inverte(meu_texto);
    printf ("Após inverter o texto: %s", meu_texto);
}
