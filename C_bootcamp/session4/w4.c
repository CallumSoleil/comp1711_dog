#include <stdio.h>

int isPrime (int num){
    for(int i = 2; i<num/2; i++){
        if (num % i == 0){
            return 0;
        }
    }
    return 1;
}

int main() {
    int num = 7919;
    if(isPrime(num) == 1){
        printf("PRIME\n");
    }
    else{
        printf("NOT PRIME\n");
    }

    return 0;
}