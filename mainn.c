#include <stdio.h>
#include <stdlib.h>

int main()
{
   float temperateur,transform;
    printf("saisir la temperateur en celsius/n");
    scanf("%f",&temperateur);
    transform= temperateur* 273.15;
    printf("la valeur de transformes en kelvin,%f",transform);

    return 0;
}
