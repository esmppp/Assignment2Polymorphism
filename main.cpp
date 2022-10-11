#include <iostream>
#include "employee.h"
#include "nonproffesional.h"
#include "professional.h"
using namespace std;

int main() {
  Professional p1("Charles", 7420, 37);
  p1.print();
  //cout << endl;
  Nonpros w1("Brandon", 15, 8);
  w1.print();
  //Lets see if this works
}