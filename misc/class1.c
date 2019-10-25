// Program to count the number of consonants and vowel in a given array
// author - Hardik Srivastava (oddlyspaced)
#include<stdio.h>
int isVowel(char);

int isVowel(char c) {
    if (c == 'A' || c == 'a' || c == 'E' || c == 'e' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u') {
        return 1;
    }
    else {
        return 0;
    }
}

void main() {
    int c = 0, v = 0, n;
    //printf("Enter size of array : \n");
    //scanf("%d", &n);
    char arr[5];
    printf("Enter characters : \n");
    for (int i = 0; i < 5; i++) {
        scanf(" %c", &arr[i]);
        if (isVowel(arr[i]) == 1)
            v++;
        else
            c++;
    }
    printf("Vowels : %d, Consonant : %d", v, c);
}
