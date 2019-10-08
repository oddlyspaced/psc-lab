#include<stdio.h>
#include<ctype.h>
void main() {
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    char c;
    printf("Enter character : \n");
    scanf("%c", &c);
    c = tolower(c);
    for (int i = 0; i < 5; i++) {
        if (c == vowels[i]) {
            printf("Vowel\n");
            return;
        }
    }
    printf("Consonant\n");
}
