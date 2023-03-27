#include <iostream>
#include <iomanip>

using namespace std;

void certificateOfDeposit(float amount, int years, float interestRate, int compoundTerm, int totalTerms)
{
  // using this formula to calculate newPrincipal interests because if it divides by 1 it becomes 0
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
int main() {
  try {
      cout << "Please enter the amount you are investing: " << endl;
      float principal;
      cin >> principal;
      if (cin.fail()) 
      {
          throw "Invalid input for principal. Please enter a numeric value.";
      }

      cout << "Please enter the number of years you are investing: " << endl;
      int years;
      cin >> years;
      if (cin.fail()) 
      {
          throw "Invalid input for years. Please enter a whole number.";
      }

      cout << "Please enter the interest rate: " << endl;
      float interestRate;
      cin >> interestRate;
      if (cin.fail()) 
      {
          throw "Invalid input for interest rate. Please enter a numeric value.";
      }

      cout << "Please enter the compounding term (monthly(12), quarterly(4), semi-annually(2) or yearly(1)): " << endl;
      int compoundTerm;
      cin >> compoundTerm;
      if (cin.fail()) 
      {
          throw "Invalid input for compounding term. Please enter a whole number.";
      }

      int startTerm = 0;

      cout << left << setw(6) << "Term"
            << setw(16) << "Principal"
            << setw(16) << "Interest"
            << setw(16) << "New Principal" << endl;

      
      certificateOfDeposit(principal, years, interestRate / 100, compoundTerm, startTerm);

  } catch (const char* error) {
      cerr << "Error: " << error << endl;
      return 1;
  }

    return 0;
}

