// Bo Singh 028866135 sect i

#include <stdio.h>

int main() {

	// Declare variables

	double amount_to_be_paid;
	double loonie;
	double quarter;
	double loonies_required;
	double quarters_required;
	double dimes_owed;
	double nickles_owed;
	double pennies_owed;
		
        int workingamounta;     //this is the value for the amount of loonies required before final calcaulation 
	int workingamountb;    //this is the value for the amount of quaters required before final calcaulation 
	int workingamountc;   //this is the value for the amount of dimes required before final calcaulation
	int workingamountd;  //this is the value for the amount of nickles required before final calcaulation
	int workingamountf;  //this is the value for the amount of pennys required before final calcaulation
	loonie = 1.00;
	quarter = 0.25;
	amount_to_be_paid = 0.00;
        //workingamounta = amount_to_be_paid * 100;
	//workingamountb = amount_to_be_paid * 100;
	
	loonies_required = workingamounta % 100;
	
	printf("Hello. \n Please enter the amount to be paid \n.");
	scanf("%f" , &amount_to_be_paid);
	printf ("\n");
	
	

	















