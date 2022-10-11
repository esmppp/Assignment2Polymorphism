#pragma once
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

class Nonpros: public Employee{
  public:
    Nonpros(string n, double s, double v); //Constructor
    double salaryCalc();
//pre: takes no values
//post: Returns salary * hours worked this week
    double vacCalc();
//pre: takes no values
//post: returns 1/20*5*hours worked. Nonprofessionals get 2.5% of worked hours as time off
    double healthCalc();
//pre: takes no values
//post: Since nonprofessionals aren't as important as professionals, they only get 1% of their paycheck back as healthcare. Sucks for them
    void print();
//pre: takes no values
//post: formats an output of all required values/functions from this class
};