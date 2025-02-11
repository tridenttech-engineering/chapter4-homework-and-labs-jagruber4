// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by Jake Gruber on 10 Feb

#include <iostream>
using namespace std;

int main() {

  //declare named constants and variables
  int smallTotal = 0;
  int mediumTotal = 0;
  int largeTotal = 0;
  int familyTotal = 0;
  int totalSold = 0;
  double smallPercent = 0.0;
  double mediumPercent = 0.0;
  double largePercent = 0.0;
  double familyPercent=0.0;

  //enter input items
  cout << "Small: ";
  cin >> smallTotal;
  cout << "Medium: ";
  cin >> mediumTotal;
  cout << "Large: ";
  cin >> largeTotal;
  cout << "Family: ";
  cin >> familyTotal;

  //calculate and display the total sold
  totalSold = smallTotal + mediumTotal + largeTotal + familyTotal;
  smallPercent = static_cast<double>(smallTotal) / totalSold * 100;
  mediumPercent = static_cast<double>(mediumTotal) / totalSold * 100;
  largePercent = static_cast<double>(largeTotal) / totalSold * 100;
  familyPercent = static_cast<double>(familyTotal) / totalSold * 100;
  cout << "Total sold: " << totalSold << endl;
  cout << "Small: " << smallPercent << "%" << endl;
  cout << "Medium: " << mediumPercent << "%" << endl;
  cout << "Large: " << largePercent << "%" << endl;
  cout << "Family: " << familyPercent << "%" << endl;

  return 0;
} // end of main function