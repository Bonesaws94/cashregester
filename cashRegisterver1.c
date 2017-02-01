// Bo Singh 028866135 sect I

#include <stdio.h>
int main() {

	// Declare variables

	double amount_to_be_paid;
	double loonies_owed;
	double quarters_owed;
     

	int loonies;
	int quarters;

  

	printf("Please enter the amount to be paid: $");
	scanf("%lf", &amount_to_be_paid);
	loonies = amount_to_be_paid;  // this conversion causes a data loss that isolates the first number not the most elegant way of doing this but its kinda cool
	loonies_owed = amount_to_be_paid - loonies;
	quarters = loonies_owed / 0.25;  
	quarters_owed = loonies_owed - (quarters * 0.25);
	printf("Loonies required: %d, balance owing $%.2lf", loonies, loonies_owed);
	printf("\nQuarters required: %d, balance owing $%.2lf \n", quarters, quarters_owed); //something keeps going wrong with this line of output
	return 0;
}
