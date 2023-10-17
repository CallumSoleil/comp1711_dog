#include <stdio.h>
int main() {
    int num;
    printf("Enter number ");
    scanf("%d", &num);
    while(num != -1){
        if (num < 100 && num > 0) 
        printf ("Yes\n");
    else
        printf ("No\n");
    printf("Enter number ");
    scanf("%d", &num);
    }

    return 0;
}