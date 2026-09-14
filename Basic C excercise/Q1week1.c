// WAP to find whether a number is an Armstrong number for any number of digits

#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, rem, dig = 0, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (temp != 0) {
        dig++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        rem = temp % 10;
        sum = sum + (int)pow(rem, dig);
        temp /= 10;
    }
    if (sum == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
