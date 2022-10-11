#pragma once
#include "employee.h"
#include <iostream>
#include <string>
using namespace std;

class Professional: public Employee{
  protected:
    double vacHours = 20;
  public:
    Professional(string n, double s, double v); //Constructor
    double salaryCalc(); 
//pre: takes in no values
//post: takes monthly salary and divides by 4 to find weekly salary
    double vacCalc();
//pre: takes in no values
//post: returns vacHours since pros have set hours off
    double healthCalc();
//pre: takes in no values
//post: returns 1/20 (5%) of the salary
    void print();
//pre: takes no values
//post: formats an output of all required values/functions from this class
};