#include <stdio.h>
int main() {
    int numoitem, num, i, sum=0;
    printf("Enter number of items you will be entering : ");
    scanf("%d", &numoitem);

    for(i=1; i<=numoitem; i++) {
        printf("Enter number %d : ", i);
        scanf("%d", &num);
        if(num<0) {
            continue;
        } else {
            sum += num;
        }
    }
    printf("Sum of numbers = %d", sum);
    return 0;
}