#include <stdio.h>

float circleArea (int r){
    return r*r*3.141592;
}

int main() {
    int radius = 5;

    printf("The area of a circle with radius 5 is %d is %f\n", radius,circleArea(radius));
    return 0;
}