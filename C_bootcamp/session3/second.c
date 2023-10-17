#include <stdio.h>
int main() {
    int num;
    printf("Enter number ");
    scanf("%d", &num);

    if (num % 20 == 0) 
        printf ("Yes\n");
    else
        printf ("No\n");
    return 0;
}