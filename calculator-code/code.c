#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, interest, amount;

    // Input principal, rate and time
    printf("Enter principal: ");
    scanf("%lf", &principal);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    printf("Enter time: ");
    scanf("%lf", &time);

    // Calculate compound interest and amount
    interest = principal * pow((1 + rate/100), time) - principal;
    amount = principal + interest;

    // Output the results
    printf("Compound interest = %0.2lf\n", interest);
    printf("Amount = %0.2lf\n", amount);

    return 0;
}