//write include statements
#include <iostream>
#include "dna.h"

//write using statements
using std::cout;
using std::cin;
using std::string;


/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	string dna_input;
	auto exit = 'A';
	auto choice = '1';

	do
	{
		cout<<"Type '1' to get the GC content of a DNA string. \n";
		cout<<"Type '2' to get the DNA Complement for a DNA string. \n";
		cout<<"Enter: ";
		cin>>choice;

		if(choice == '1'){
			cout<<"Please enter a DNA string: ";
			cin>>dna_input;
			cout<<"The GC content of the DNA string is:"<<get_gc_content(dna_input)<<"\n";
		}
		else if(choice == '2'){
			cout<<"Please enter a DNA string: ";
			cin>>dna_input;
			cout<<"The DNA Complement of the DNA string is:"<<get_dna_compliment(dna_input)<<"\n";
		}
		else{
			cout<<"Invalid choice. \n";
		}

		cout<<"Exit? ";
		cin>>exit;


	}
	while(!(exit == 'Y' || exit == 'y'));

	return 0;
}