// Bo Singh 028866135 sect i

#include <stdio.h>
#define GST 1.13 // Value for tax as a constant value
int main() {

	// Declare variables

	double amount_to_be_paid;
	double loonies_owed;
	double quarters_owed;
	double dimes_owed;
	double nickles_owed;
	double pennies_owed;
	double balance;
	
	
        int loonies, 
	int quarters, 
	int dimes, 
	int nickels, 
	int pennies;
	
	balance = amount_paid * GST;
	
	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount_to_be_paid
	printf("GST: ", GST);
	balance = amount__to_be_paid * GST;
	printf("Balance owing: %.2lf", balance);
	loonies = balance;
	loonies_owed = balance - loonies;
	quarters = loonies_owed / 0.25;
	quarters_owed = loonies_owed - (quarters * 0.25);
	dimes = quarters_owed / 0.10;
	dimes_owed = quarters_owed - (dimes * 0.10);
	nickels = dimes_owed / 0.05;
	nickels_owed = dimes_owed - (nickels * 0.05);
	pennies = nickels_owed / 0.01;
	pennies_owed = nickels_owed - (pennies * 0.01);
	printf("\nLoonies required: %d, balance owing $%.2lf", loonies, loonies_owed);
	printf("\nQuarteres required: %d, balance owing $%.2lf", quarters, quarters_owed);
	printf("\nDimes required: %d, balance owing $%.2lf", dimes, dimes_owed);
	printf("\nNickels required: %d, balance owing $%.2lf", nickels, nickels_owed);
	printf("\nPennies required: %d, balance owing $%.2lf\n", pennies, pennies_owed);
return 0;
}
	

	















