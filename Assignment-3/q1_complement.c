// author - Hardik Srivastava (oddlyspaced)
#include<stdio.h>
void main() {
    char bin[1000];
    char com[1000];
    printf("Enter binary number: \n");
    gets(bin);
    for (int i = 0; bin[i] != '\0'; i++) {
        if (bin[i] == '0')
            com[i] = '1';
        else  
            com[i] = '0';
    }
    printf("Complementary: \n");
    puts(com);
}