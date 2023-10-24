#include <stdio.h>

int main (){
    char filename[] = "./squares.dat";
    int n;
    FILE *file = fopen(filename, "w");
    if (file == NULL){
        perror("File");
        return 1;
    }
    printf("Enter max square ");
    scanf("%d", &n);    
    for (int i = 1; i<= n; i++){
        fprintf(file, "%d\n", i*i);
    }
    fclose(file);
    return 0;
}