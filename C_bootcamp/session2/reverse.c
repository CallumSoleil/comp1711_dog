#include<stdio.h>

int main () {
    char i[5] = "Hello";
    for(int j = 4; j >= 0; j--){
        printf("%c \n", i[j] );
    }
    return 0;

}