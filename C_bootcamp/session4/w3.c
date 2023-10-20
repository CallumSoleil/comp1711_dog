#include <stdio.h>

int strLen (char *string){
    int i = 0;
    while(string[i] != '\0'){
        i++;
    }
    return i;
}

int main() {
    char str[100] = "Hellooo";

    printf("The length of %s is %d\n", str, strLen(str));
    return 0;
}