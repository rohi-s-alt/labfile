#include <stdio.h>
int main() {
    int quantity;
    float mrp, cost;
    printf("Enter Price of the item : ");
    scanf("%f", &mrp);
    printf("Enter Quantity of the item : ");
    scanf("%d", &quantity);

    cost = mrp * quantity;
    if(quantity>100) {
        cost -= (cost/10);
    }
    printf("Final Cost to Pay for %d item(s) : %f", quantity, cost);
    return 0;
}