#include <stdio.h>
int main() {
    float temperature;
    float cold = 15;
    printf("Whats the temperature? ");
    scanf("%f", &temperature);

    if (temperature < cold) 
        printf ("It's cold, wear a jacket!\n");
        else
            printf ("It’s nice and warm!\n");
        return 0;
}