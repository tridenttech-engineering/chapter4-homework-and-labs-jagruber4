// Introductory11.cpp - displays ending balance
// Created/revised by Jake Gruber on 10 Feb

#include <iostream>
using namespace std;

int main() {

  // declare named constants and variables
  double initialBalance = 0.0;
  double deposit = 0.0;
  double withdrawal = 0.0;
  double finalBalance = 0.0;

  // enter input items
  cout << "Enter the initial balance: ";
  cin >> initialBalance;
  cout << "Enter the total deposits: ";
  cin >> deposit;
  cout << "Enter the total withdrawals: ";
  cin >> withdrawal;
  
  //calculate and display the total 
  finalBalance = initialBalance + deposit - withdrawal;
  cout << "Final Balance: $" << finalBalance << endl;
  
  return 0;
} // end of main function