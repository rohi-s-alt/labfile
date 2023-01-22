#include <stdio.h>
int add(int n);
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum of %d natural number(s) = %d", num, add(num));
    return 0;
}

int add(int n) {
    if(n == 0) {
        return n;
    } else {
        return n + add(n - 1);
    }
}