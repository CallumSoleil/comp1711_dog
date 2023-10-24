#include <stdio.h>

int main (){
    char filename[] = "./data.txt";
    FILE *file = fopen(filename, "a");
    if (file == NULL){
        perror("File");
        return 1;
    }
    fprintf(file, "THATS SO SLAY\n");
    fclose(file);
    return 0;
}