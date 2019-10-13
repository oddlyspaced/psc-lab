// Program to print the following pattern
// 123454321
//  1234321
//   12321
//    121
//     1

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void main() {
    int tot = 9;
    int c = 1;
    int d = (int)ceil((double)tot/2);
    for (int i = 0; i < tot; i = i + 2) {
        for (int j = 0; j < i/2; j++) {
            printf(" ");
        }
        c = 1;
        d = (int)ceil((double)(tot-i)/2);
        for (int j = 0; j < tot - i; j++) {
            if (c == d)
                c = c * -1;
            printf("%d", abs(c));
            c++;
        }
        printf("\n");
    }
}
