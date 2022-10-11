#include "professional.h"

Professional::Professional(string n, double s, double v){
      name = n;
      sal = s;
      hrsWorked = v;
    }
    double Professional::salaryCalc(){
      return sal/4;
    }
    double Professional::vacCalc(){
      return vacHours; //Pros have a set amount of hours per month
    }
    double Professional::healthCalc(){
      return sal/20; //pros get the company to pay for health insurance up to 5% of their paycheck
    }
    void Professional::print(){
      cout << "Employee: " << name << endl;
      cout << "Hours worked: " << hrsWorked << endl;
      cout << "Weekly Salary: $" << salaryCalc() << endl;
      cout << "Vacation Hours accumulated: " << vacCalc() << endl;
      cout << "Health Insurance Payments from Company: $" << healthCalc() << endl << endl << endl;
    }