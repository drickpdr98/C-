#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

void certificateOfDeposit(float amount, int years, float interestRate, int compoundTerm, int totalTerms)
{
  // using this formula to calculate newPrincipal because if it divides by 1 it becomes 0
  float newInterest = (amount*interestRate)/compoundTerm;

  // calculates the new principal
  float newPrincipal = amount + newInterest;

  // returns when the term ends
  if(totalTerms == (years * compoundTerm))
  {
    cout << setw(5) <<totalTerms
     << setw(15) << fixed << setprecision(1) << amount
     << setw(20) << fixed << setprecision(3) << newInterest
     << setw(20) << fixed << setprecision(1) << newPrincipal << endl;
     return;
  }


   cout << setw(5) <<totalTerms
     << setw(15) << fixed << setprecision(1) << amount
     << setw(20) << fixed << setprecision(3) << newInterest
     << setw(20) << fixed << setprecision(1) << newPrincipal << endl;

// calling the function again until the term meets it length
    certificateOfDeposit(newPrincipal,years, interestRate, compoundTerm,(totalTerms +1));
}
int main(){

  cout << "Please enter the amount you are investing: " << endl;
  float principal;
  cin >> principal;

  cout << "Please enter the amount of years you are investing to : " << endl;
  int years;
  cin >> years;

  cout << "Please enter the interest rate  : " << endl;
  float interestRate;
  cin >> interestRate;

  cout << "Please enter the term (monthly, quarterly, semi-annually or yearly): " << endl;
  int compoundTerm;
  cin >> compoundTerm;

  
  cout << "Term" << setw(5) 
       << "Principal" << setw(15) 
       << "Interest" << setw(5) 
       << "New Principal" << endl;

certificateOfDeposit(principal,years,interestRate,compoundTerm,0);

  return 0;
}

