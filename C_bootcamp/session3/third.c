#include <stdio.h>
int main() {
    int mark;
    printf("What was the mark? ");
    scanf("%d", &mark);
    if (mark >= 70)
        printf ("The mark of %d is a distinction\n", mark);
    else if (mark >= 50)
        printf ("The mark of %d is a pass\n", mark);
    else
        printf ("The mark of %d is a fail\n", mark);
    return 0;
}