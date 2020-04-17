#include <stdio.h>
#include "../headers/relative.h"


double tip (int food,int place, double budget, double bill)
{
	int food_score=relative_food(food);
	int place_score=relative_place(place);
	double budget_score=relative_budget(budget);
	double bill_score=relative_bill(bill);
	double aggregate_score = food_score + place_score + budget_score + bill_score ;
	return aggregate_score;	
}


int userinput (void){

		printf("Enter the rating of the Food: ");
		Food=conv2int();	

		printf("Enter the rating of the Place: ");
		Place=conv2int();
		
		printf("Enter your Budget: ");
		Budget=conv2int();

		printf("Enter your Bill: ");
	      	Bill=conv2int();

}

void main(){
	
	userinput();	
	printf("Your tip rating is %f \n",tip(Food,Place,Budget,Bill));
}
