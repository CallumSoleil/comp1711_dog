#include <stdio.h>

int main (){
    char filename[] = "./data.txt";
    FILE *file = fopen(filename, "w");
    if (file == NULL){
        perror("File");
        return 1;
    }
    fprintf(file, "Hello World\n");
    fclose(file);
    return 0;
}