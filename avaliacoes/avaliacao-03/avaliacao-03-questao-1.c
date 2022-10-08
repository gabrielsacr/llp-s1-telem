#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    int delta;
    float  x1, x2;
   
    printf("informe tres numeros inteiros: ");
    scanf ("%d %d %d", &a, &b, &c);
   
    delta = b*b - 4*a*c;
   
    printf ("delta = %d\n", delta);
   
    if ( delta < 0 )
    {
        printf ("raizes imaginarias\n");
    } else {
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt( delta))/(2*a);
       
        printf ("primeira raiz da função %f\nsegunda raiz da função %f\n ", x1, x2);
    }

    return 0;
}

