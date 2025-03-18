#include <stdio.h>

int main() {
    int quantity;
    float price, total_amount, final_price;

    printf("Enter quantity and rate: ");
    scanf("%d %f", &quantity, &price);  // Accept both in one line

    total_amount = quantity * price;

    if (total_amount > 1000) {
        final_price = total_amount - (total_amount * 0.10); // 10% discount
    } else {
        final_price = total_amount;
    }

    printf("Total expenses = Rs. %.2f\n", final_price); // Fixed decimal places
    return 0;
}
