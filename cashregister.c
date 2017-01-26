// Bo Singh 028866135 sect i

#include <stdio.h>

int main() {

	// Declare variables

	float amount_to_be_paid;
	float loonie;
	float quarter;
	float loonies_required;
	float quarters_required;
        int workingamounta;    //this is the value for the ammount of loonies required before final calcaulation 
	int workingamountb;   //this is the value for the ammount of quaters required before final calcaulation 
	
	loonie = 1.00;
	quarter = 0.25;
	amount_to_be_paid = 0.00;
        //workingamounta = amount_to_be_paid * 100;
	//workingamountb = amount_to_be_paid * 100;
	
	loonies_required = workingamounta % 100;
	
	printf("Hello. \n Please enter the amount to be paid \n.");
	scanf("%f" , &amount_to_be_paid);
	printf ("\n");
	
	

	















