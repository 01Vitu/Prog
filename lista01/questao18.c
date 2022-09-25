#include <stdio.h>
 
int main()
{
    float area,circ,raio,diametro;

    printf("Informe o raio da circunferencia: ");
    scanf("%f", &raio);

    diametro=2*raio;
    printf("O diametro da circunferencia e %.1f: \n", diametro);

    circ=3.14159*raio;
    printf("O valor da circunferencia e: %.1f \n", circ);

    area=3.14159*(raio*raio);
    printf("O valor da area e: %.1f \n", area);
 
    return(0);
}