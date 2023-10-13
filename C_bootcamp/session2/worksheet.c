#include<stdio.h>

int main () {

/* 1
    int arr[5] = {1,2,3,4,5};
    int sum = 0;

    for(int i = 0; i <= 4; i++){
        sum += arr[i];
    }
    printf("%d \n", sum);
*/
//2
    int arr[5] = {1,2,3,4,5};
    int temp = 0;

    for(int i = 0; i <= 2; i++){
        temp = arr[i];
        arr[i] = arr[4-i];
        arr[4-i] = temp;
    }
    for(int i = 0; i <= 4; i++){
        printf("%d", arr[i]);
    }








    return 0;

}