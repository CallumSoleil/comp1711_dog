#include<stdio.h>

int main () {
    char name [10];
    float width, length; 
    printf("Insert width: ");
    scanf("%f", &width);
    printf("Insert length: ");
    scanf("%f", &length);
    float area = width * length;
    printf("That rectangle would have an area of %f \n", area);
    return 0;
}