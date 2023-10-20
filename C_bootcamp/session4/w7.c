#include <stdio.h>
#include <math.h>

void reverseArr (int *arr, int len){
    int temp = 0;
    for(int i = 0; i< floor(len/2); i++){
        temp = arr[i];
        arr[i] = arr[len-1-i];
        arr[len-1-i] = temp;
    }
    for(int i = 0; i< len; i++){
        printf("%d\n", arr[i]);
}
}
int main() {
    int mark[5] = {19, 10, 8, 17, 9};
    reverseArr(mark, 5);
    return 0;
}
