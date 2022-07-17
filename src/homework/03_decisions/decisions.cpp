//write include statement for decisions header
#include "decisions.h"

//Write code for function(s) code here
int get_grade_points(string grade_letter)
{
    if(grade_letter == "A" || grade_letter == "a"){
        return 4;
    }

    else if(grade_letter == "B" || grade_letter == "b"){
        return 3;
    }

    else if(grade_letter == "C" || grade_letter == "c"){
        return 2;
    }

    else if(grade_letter == "D" || grade_letter == "d"){
        return 1;
    }

    else if(grade_letter == "F" || grade_letter == "f"){
        return 0;
    }
    else{
        return -1;
    }
}

double calculate_gpa(int credit_hours, double credit_points)
{
    if(credit_hours != 0){
        return credit_points / credit_hours;
    }
    else{
        return -1;
    }
}
