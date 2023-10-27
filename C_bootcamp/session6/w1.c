#include <stdio.h>

typedef struct {
    double x;
    double y;
}point;


int main () {
    point arr[10];
    for(int i = 0; i< 10; i++){
        arr[i].x = rand() % 100;
        arr[i].y = rand() % 100;
    }
    for(int i = 0; i< 10; i++){
        printf("%.2f %.2f\n", arr[i].x, arr[i].y);
    }
    return 0;
}