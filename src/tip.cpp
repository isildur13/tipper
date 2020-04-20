#include <iostream>
#include "../headers/relative.h"
using namespace std;
double tip (int food,int place,double budget,double bill)
{
	int food_score=relative_food(food);
	int place_score=relative_place(place);
	double budget_score=relative_budget(budget);
	double bill_score=relative_bill(bill);
	double aggregate_score = food_score + place_score + budget_score + bill_score ;
	return aggregate_score;	
}


int userinput (void){
		
		
		cout<<"Enter the rating of the Food: "<< "\n";
		cin >> Food;
		cout<<"Enter the rating of the Place: "<< "\n";
		cin >> Place;
		cout<<"Enter your Budget: "<< "\n";
		cin >>Budget;
		cout<<"Enter your Bill: "<< "\n";
	      	cin >>Bill;		
	

}
int main(void){
	userinput();	
	cout<<"Your tip rating is "<< tip(Food,Place,Budget,Bill) << "\n";
	return 0;
}
