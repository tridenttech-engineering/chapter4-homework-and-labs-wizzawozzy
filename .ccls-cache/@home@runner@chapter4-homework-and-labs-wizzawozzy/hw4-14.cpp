// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double small = 0.0;
  double medium = 0.0;
  double large = 0.0;
  double family = 0.0;


  cout << "Small pizzas sold: "; 
  cin >> small;
  cout << "Medium pizzas sold: ";
  cin >> medium;
  cout << "Large pizzas sold: ";
  cin >> large;
  cout << "Family pizzas sold: " ;
  cin >> family;

double total = small + medium + large + family;
  cout<< endl << total;
double S_perc = small / (small + medium + large + family) * 100;
  cout << endl << "Small pizzas sold: " << S_perc << "%" << endl;

double M_perc = medium / (small + medium + large + family) * 100;
  cout << "Medium pizzas sold: " << M_perc << "%" << endl;

double L_perc = large / (small + medium + large + family) * 100;
  cout << "Large pizzas sold: " << L_perc << "%" << endl;

double F_perc = family / (small + medium + large + family) * 100;
  cout << "Family pizzas sold: " << F_perc << "%" << endl;


  return 0;
} // end of main function