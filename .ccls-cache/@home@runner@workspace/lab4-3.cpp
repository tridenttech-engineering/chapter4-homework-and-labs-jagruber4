//Lab4-3.cpp - displays a salesperson's commission
//Created/revised by Jake Gruber on 10 Feb

#include <iostream>
using namespace std;

int main()
{
  //declare named variables
  double COMM_RATE = 0.0;
  double sales = 0.0;
  double commission = 0.0;

  //enter input items
  cout << "Sales amount: ";
  cin >> sales;
  cout << "Commission rate : ";
  cin >> COMM_RATE;

  //calculate and display the commision
  commission = sales * COMM_RATE;
  cout << "Commission: $" << commission << endl;

  return 0;

} //end of main function
