#include "nonproffesional.h"

Nonpros::Nonpros(string n, double s, double v){
      name = n;
      sal = s;
      hrsWorked = v;
    }
    double Nonpros::salaryCalc(){
      return sal*hrsWorked;
    }
    double Nonpros::vacCalc(){
      return hrsWorked/200*5; //Nonpros get 5 hours of vacation for every 200 hours worked. Not much time off
    }
    double Nonpros::healthCalc(){
      return sal/100; //Nonpros get the company to pay for health insurance up to 1% of their paycheck
    }
    void Nonpros::print(){
      cout << "Employee: " << name << endl;
      cout << "Hours worked: " << hrsWorked << endl;
      cout << "Weekly Salary: $" << salaryCalc() << endl;
      cout << "Vacation Hours accumulated: " << vacCalc() << endl;
      cout << "Health Insurance Payments from Company: $" << healthCalc() << endl;
      cout << endl << endl;
    }