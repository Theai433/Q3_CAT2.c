#include <stdio.h>

int main() {
    int customerId, unitsConsumed;
    char customerName[50];
    float chargesPerUnit, totalBill, surcharge = 0;

    // Prompt user to enter customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerId);
    printf("Enter Customer Name: ");
    scanf("%s", customerName);
    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    // Calculate charges per unit based on units consumed
    if (unitsConsumed <= 300) {
        chargesPerUnit = 175;
    } else if (unitsConsumed < 600) {
        chargesPerUnit = 200;
    } else if (unitsConsumed < 800) {
        chargesPerUnit = 300;
    } else {
        chargesPerUnit = 400;
    }

    // Calculate total bill
    totalBill = unitsConsumed * chargesPerUnit;

    // Apply surcharge if total bill exceeds Kshs. 500
    if (totalBill > 500) {
        surcharge = totalBill * 0.20;
    }

    // Ensure the minimum bill is Kshs. 200
    if (totalBill + surcharge < 200) {
        totalBill = 200;
    } else {
        totalBill += surcharge;
    }

    // Display output
    printf("\nCustomer ID: %d\n", customerId);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %d\n", unitsConsumed);
    printf("Charges per Unit: %.2f Ksh\n", chargesPerUnit);
    printf("Total Amount to Pay: %.2f Ksh\n", totalBill);

    return 0;
}
