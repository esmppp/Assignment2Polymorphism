#pragma once
#include <iostream>
#include <string>
using namespace std;

class Employee{
  protected:
    string name;
    double sal;
    double hrsWorked;
  public:
    virtual void print() = 0;
    virtual double salaryCalc() = 0;
    virtual double vacCalc() = 0;
    virtual double healthCalc() = 0;
};