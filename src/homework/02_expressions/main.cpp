//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cout;
using std::cin;


int main()
{
	auto meal_amount = 0.0;
	auto tip_rate = 0.0;
	auto tip_amount = 0.0;
	auto tax_amount = 0.0;
	auto total = 0.0;

	cout<<"Please enter the meal amount: ";
	cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);
	cout<<"Please enter the tip rate: ";
	cin>>tip_rate;
	tip_amount = get_tip_amount(meal_amount, tip_rate);
	total = meal_amount + tax_amount + tip_amount;

	cout<<"\n"<<"\n"<<"\n";
	cout<<"Meal Amount: "<<meal_amount<<"\n";
	cout<<"Tax Amount: "<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total Bill: "<<total<<"\n"; 



	

	return 0;
}
