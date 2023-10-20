#include <stdio.h>

float sphereVolume (int r){
    return r*r*r * 4/3 * 3.141592;
}

int main() {
    int radius = 5;

    printf("The volume of a sphere with radius %d is %f\n", radius, sphereVolume(radius));
    return 0;
}