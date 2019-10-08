#include<stdio.h>
void main() {
    //. Write a menu driven program for banking to deposit amount, withdraw amounts, computes the interest and compute the balance based on the user inputs. [Assume interest rate and initial amount by yourself]
    int amt = 1000, choice;
    printf("Enter\n1 for depositing amount.\n2 for withdrawing amount.\n3 for computing interest.\n");
    scanf(" %d", &choice);
    if (choice == 1) {
        int d;
        printf("Enter amount to deposit\n");
        scanf("%d", &d);
        amt = amt + d;
        printf("%d deposited.\n", d);
    }
    else if (choice == 2) {
        int w;
        printf("Enter amount to withdraw\n");
        scanf("%d", &w);
        if (w > amt) {
            printf("Unable to withdraw\n");
        }
        else {
            amt = amt - w;
        }
    }
    else if (choice == 3) {
        double i = (amt*5.0)/100.0; // r = 5%
        printf("Interest on %d rupees at 5 percent interest is : %lf\n", amt, i);
    }
    printf("Balance : %d", amt);
}
