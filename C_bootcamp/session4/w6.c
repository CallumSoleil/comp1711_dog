#include <stdio.h>

float calc (float a, float b, char c){
    if(c == '+'){
        return a + b;
    }
    else if(c == '-'){
        return a - b;
    }
    else if(c == '*'){
        return a * b;
    }
    else if(c == '/'){
        return a / b;
    }
}

int main() {
    float a = 7;
    float b = 5.3;
    char c = '-';
    float ans = calc(a,b,c);


    printf("%f %c %f = %f\n", a, c, b, ans);
    return 0;
}