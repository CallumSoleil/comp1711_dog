#include <stdio.h>
#include <stdlib.h>

int main (){
    char filename[] = "./squares.dat";
    int n;
    float total, count = 0;
    FILE *file = fopen(filename, "r");
    if (file == NULL){
        perror("File");
        return 1;
    }

    int buffer_size = 100;
    char line_buffer[buffer_size];
    while (fgets(line_buffer, buffer_size, file) != NULL) 
    {
        count++;
        total += atoi(line_buffer);

    }
    printf("Mean is %f\n", total/count);
    fclose(file);
    return 0;
}