#include <iostream>

// Lab 5 — Richard Webster
// CIS 5 Week 05 · Eligibility check

using std::cout;
using std::cin;
using std::endl;

int main() {
  int age = 0;
  double gpa = 0.0;

  cout << "What is your age?" << endl;
  cin >> age;

  cout << "Enter your GPA: " << endl;
  cin >> gpa;

  bool adult = false;
  bool honors = false;

  adult = age >= 18;
  honors = gpa >= 3.5;

  if (adult && honors) {
    cout << "You are eligible for the honors program! Congratulations!" << endl;
  }else if (adult || honors) {
    cout << "You are lacking one requirement, you are not eligible for the honors program" << endl;
  }else {
    cout << "You do not meet both age and GPA requirements for the honors program." << endl;
  }
  // Edge values to run: 17 / 18 with a 3.8, and 3.4 / 3.5 with age 20

  return 0;
}
