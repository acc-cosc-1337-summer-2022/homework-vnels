//write include statements
#include <iostream>
#include "decisions.h"

using std::cout;
using std::cin;

int main() 
{

	string input_letter = "empty";
	auto input_hours = 0;
	auto total_hours = 0;
	auto grade_point_total = 0;
	string ask_continue = "empty";

	do
	{
		cout<<"Please enter a letter grade: \n";
		cin>>input_letter;
		cout<<"\n";

		cout<<"Please enter the course hours: \n";
		cin>>input_hours;
		cout<<"\n";

		grade_point_total += get_grade_points(input_letter) * input_hours;
		total_hours += input_hours;

		cout<<"Would you like to continue? (Y/N): \n";
		cin>>ask_continue;
		cout<<"\n";
	}
	while (ask_continue == "Y" || ask_continue == "y");

	cout<<"Your GPA is: "<<calculate_gpa(total_hours, grade_point_total)<<"\n";
	cout<<"Your total grade points are: "<<grade_point_total<<"\n";
	cout<<"Your total class hours are: "<<total_hours<<"\n";

	return 0;
}