#include <stdio.h>
int main() {
    int menu;
    printf("Menu\n1: Meslier\n2: Ayling\n3: Struijk\n4: Cooper\n5: Cresswell\n");
    scanf("%d", &menu);
    switch (menu)
    {
        case 1:
        printf("Illan\n");
        break;
        case 2:
        printf("Luke\n");
        break;
        case 3:
        printf("Pascal\n");
        break;
        case 4:
        printf("Liam\n");
        break;
        case 5:
        printf("Charlie\n");
        break;
        default:
        printf("WHO?\n");
        break;
    }
    return 0;
}