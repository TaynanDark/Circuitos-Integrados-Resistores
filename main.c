#include <stdio.h>
#include <stdlib.h>

float Vin = 0.0, Vled = 0.0, Iled = 0.0, R = 0.0;

int main(int argc, char * argv[])
{
    printf("Digite o valor de Vin (em volts):");
    scanf("%f", &Vin);
    printf("Digite o valor de Vled (em volts):");
    scanf("%f", &Vled);
    printf("Digite o valor de Iled (em ampheres):");
    scanf("%f", &Iled);

    R = (Vin-Vled) / Iled;
    
    printf("O resistor para o LED tem o valor de %2f Ohms\n\n", R);

}