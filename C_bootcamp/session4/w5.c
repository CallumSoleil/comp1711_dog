#include <stdio.h>

int strLen (char *string){
    int i = 0;
    while(string[i] != '\0'){
        i++;
    }
    return i;
}

char* strCat(char *str1, char *str2){
    int str1Len = strLen(str1);
    int str2Len = strLen(str2);

    static char newStr[1000];

    for(int i = 0; i<str1Len; i++){
        newStr[i] = str1[i];
    }
    for(int i = str1Len; i<str1Len + str2Len; i++){
        newStr[i] = str2[i-str1Len];
    }
    return newStr;

}

int main() {
    char str1[100] = "Hello";
    char str2[100] = "World";


    printf("%s\n", strCat(str1,str2));
    return 0;
}