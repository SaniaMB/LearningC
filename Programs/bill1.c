#include <stdio.h>

int main()
{
float billAmount, discount = 0.0, finalAmount;

printf("Enter the total bill amount: $");
scanf("%f", &billAmount);
if (billAmount >= 500) {
discount = 0.20; 
} else if (billAmount >= 300) {
discount = 0.15; 
} else if (billAmount >= 100) {
discount = 0.10;
} else {
discount = 0.0; 
}
finalAmount = billAmount - (billAmount * discount);
printf("Discount applied: %.2f%%\n", discount * 100);
printf("Final amount after discount: $%.2f\n", finalAmount);

return 0;
}