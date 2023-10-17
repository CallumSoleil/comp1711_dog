#include <stdio.h>
int main() {
    float num;
    printf("Enter number ");
    scanf("%f", &num);

    if (num < 0) 
        printf ("Negative\n");
    else if(num == 0)
        printf ("Zero\n");
    else
        printf("Positive\n");
    return 0;
}