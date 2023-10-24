#include <stdio.h>
#include <stdlib.h>

int main (){
    char filename[] = "./numbers.dat";
    float total = 0;
    int count = 0;
    FILE *file = fopen(filename, "a+");
    if (file == NULL){
        perror("File");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) 
    {
        count++;
        total += atof(line_buffer);

    }
    printf("%f\n", total/count);
    fclose(file);
    return 0;
}