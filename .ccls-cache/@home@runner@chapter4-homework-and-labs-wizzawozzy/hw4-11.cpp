// Introductory11.cpp - displays ending balance
// Created/revised by <your name> on <current date>

#include <iostream>
using namespace std;

int main() {
  double B_Balance, T_Deposits, T_Withdraws, E_balance;
  cout << "Beginning balance: ";
  cin >> B_Balance;
  cout << "Total deposits: ";
  cin >> T_Deposits;
  cout << "Total withdraws: ";
  cin >> T_Withdraws;

//calculations
  E_balance = B_Balance + T_Deposits - T_Withdraws;
  cout << "Ending balance: " << E_balance;

  return 0;
} // end of main function