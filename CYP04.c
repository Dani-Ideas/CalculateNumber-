#include <stdio.h>
#include <math.h>
void main()
{
    double startLimit, endLimit, increment, factorial=1, potencia=1;
    
    scanf("%lf %lf %lf", &startLimit,&endLimit, &increment);
    if (endLimit>startLimit)
    {
        for (int i = (endLimit-startLimit)/increment; i > 0; i--)
        {
            factorial= factorial * i;
            potencia = potencia * startLimit;
            printf(" en el ciclo %f %f\n",factorial, potencia);
        }
        printf("después de terminar el ciclo el factorial de %f es %f, y %f elevado a la %f es %f\n",(endLimit-startLimit)/increment,factorial,startLimit, (endLimit-startLimit)/increment, potencia);
    }
    else
    {
        printf("no seas wey startLimit tiene que ser mayor que endLimit");
    }
    
}