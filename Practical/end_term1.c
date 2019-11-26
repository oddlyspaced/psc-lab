#include<stdio.h>
#include<string.h>
void encrypt(char*);
void decrypt(char*);
void print(char*);
void main() {
    int choice;
    char message[100];
    char *address;
    int messageEncrypted = 0;
    while(1) {
        printf("***********************\n1. for Entering message.\n2. for Encrypting message.\n3. for Decrypting message.\n4. for Showing the message.\n5. Exit.\n***********************\n");
        printf("Enter choice: \n");
        scanf(" %d", &choice);
        getchar();
        switch (choice) {
            case 1: printf("Enter message: \n");
                    gets(message);
                    break;
            case 2: address = &message;
                    encrypt(address);
                    printf("Message Encrypted!\n");
                    messageEncrypted = 1;
                    break;
            case 3: if (messageEncrypted == 0) {
                        printf("Error: Please encrypt message first!\n");
                    }
                    else {
                        address = &message;
                        decrypt(address);
                        printf("Message Decrypted!\n");
                    }
                    break;
            case 4: address = &message;
                    print(address);
                    break;
            case 5: return;
            default: return;
        }
    }
}

void encrypt(char* address) {
    while(*address != '\0') {
        *address = *address + 5;
        *address++;
    }
}

void decrypt(char* address) {
    while(*address != '\0') {
        *address = *address - 5;
        *address++;
    }
}

void print(char* address) {
    while(*address != '\0') {
        printf("%c", *address);
        address++;
    }
    printf("\n");
}

