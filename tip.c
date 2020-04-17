#include <stdio.h>
#include "relative.h"


double tip (int food,int place, double budget, double bill)
{
	int food_score=relative_food(food);
	int place_score=relative_place(place);
	double budget_score=relative_budget(budget);
	double bill_score=relative_bill(bill);
	double aggregate_score = food_score + place_score + budget_score + bill_score ;
	return aggregate_score;
	
}



void main(){
	int Food,Place;
	double Budget;
	printf("Enter the rating of the Food: ");
	scanf("%d",&Food);
	printf("Enter the rating of the Place: ");
	scanf("%d",&Place);
	Budget=get_double("Enter your Budget: ");
	printf("Your tip rating is %f \n",tip(Food,Place,Budget,1500));


}
