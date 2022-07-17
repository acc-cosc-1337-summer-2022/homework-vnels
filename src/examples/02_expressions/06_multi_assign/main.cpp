#include <iostream>
#include "multi_assign.h"

using std::cout, std::cin;

int main()
{
    auto num1 = 0;
    cout<<"Enter a number to be multiplied by 5: ";
    cin>>num1;
    cout<<"The result is:"<<multiply_numbers(num1)<<"\n";

    auto num2 = 4;
    cout<<"Enter a number: ";
    cin>>num2;
    cout<<"The result is:"<<multiply_numbers(num2)<<"\n";



    return 0;
}