#include <stdio.h>
#include <stdlib.h>

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
    float totalMDist = 0;
    float mXDist = 0;
    float mYDist = 0;
    for(int i = 0; i< 9; i++){
        totalMDist += abs(arr[i].x - arr[i+1].x) + abs(arr[i].y - arr[i+1].y);
    }
    totalMDist += abs(arr[0].x - arr[9].x) + abs(arr[1].y - arr[9].y);

    printf("%f\n", totalMDist/10);
    return 0;
}