#include <iostream>
#include<time.h>

using namespace std;
////////////////arrays//////////////////////////////////////////////////////
const int SIZE = 20;

int main()
{
  const int row = 4;
  const int column = 5;

  int arr[row][column] = {};

  int count = 10;

  for (int i = 0; i < row;i++)
  {
    for (int j = 0; j < column; j++)
    {
      arr[i][j] = count ++;
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl; 

  return 0; 
}

// void linearSearch(int arr[],int value)
// {
//   for (int i = 0; i < SIZE;i++)
//   {
//     if(arr[i]==value)
//       cout<<"Index: " << i << endl;
//   }
// }


//  int main()
// {
//   srand(time(NULL));

//   cout << "Enter an integer: " << endl;
//   int val;
//   cin >> val;

//   int arr[SIZE] = {};

//   for (int i = 0; i < SIZE;i++)
//   {
//     arr[i] = rand() % SIZE+1;
//     cout << arr[i] << " ";
//   }
//   cout << endl;

//   linearSearch(arr,val);

//   return 0;
// }

// int main()
// {
//   string arr[] = {"Dravin", "D", "Sookraj"};

//   cout<<arr[1]<<endl;

//   for(auto x: arr)
//     cout << x << " ";

//   return 0;
// }

////////////////////////////////////////////////////////////////////////////


// int average(int arr[], size_t size)
// {
//     double total = 0;

//     for (int i = 0; i < size;i++)
//         total += arr[i];

//     return total / size;
// }
//  int main()
// {
//     srand(time(NULL));

//     const int SIZE = 10;

//     int array[SIZE] = {};


//     for (int i = 0; i < SIZE;i++)
//     {
//         array[i] = rand() % 20;
//     }

//     cout << average(array, SIZE) << endl;

//     return 0;
// }


////////////////////////////////////////////////////////////////////////////

// void linearSearch(int arr[], size_t size, int value)
// {
//     for (int i = 0; i < size;i++)
//     {
//         if(arr[i]==value)
//             cout << i << endl;
//     }
// }
// int main()
// {
//     srand(time(NULL));

//     const int SIZE = 20;

//     int array[SIZE] = {};


//     for (int i = 0; i < SIZE;i++)
//     {
//         array[i] = rand() % 20;
//     }

//     linearSearch(array, SIZE, 13);

//     return 0;
// }

///////////////////////////////////////////////////////////////////////////////

// int main()
// {
//     int const SIZE = 26;

//     char array[SIZE] = {};

//     for (int i = 0; i < SIZE; i++)
//     {
//         array[i] = 65+i;
//     }

//     for( char x: array)
//         cout << x << " ";

//         return 0;
// }

///////////////////////////////////////////////////////////////////////////////
// int main()
// {
//     const int SIZE = 25;
//     int arr[SIZE] = {};

//     int j = 0; 
//     for (int i = 2; i < 50 && j< SIZE; i++) { 
//         if (i % 2 == 0) {
//             arr[j] = i; 
//             j++; 
//         }
//     }

//     for (auto x : arr)
//         cout << x << " ";

//     return 0;
// }



// int main()
// {
//     string names[] = {"John", "William", "Henry"};
//     cout << names[1]<<endl;

//     for(auto i: names)
//         cout << i << " ";
//     return 0;

// }
///////////////////////////////////////////////////////////////////////////////

// // new stock value changes every year
// double stockValueInNyears(double &stock1, double &stock2, int &numberOfYears)
// {
//     const double AMAZON = 4.0;
//     const double GOOGLE = 10.0;
//     stock1 = stock1 + (stock1 * (AMAZON / 100));
//     stock2= stock2 + (stock2 * (GOOGLE / 100));

//     // base case
//     if (stock1 == stock2)
//     {
//         return numberOfYears;
//     }
    
// //    recursive case
//     numberOfYears++;
//     return stockValueInNyears(stock1, stock2, numberOfYears);
    
// }

// int main()
// {
//     // starting portfolio
//    double AmazonStocks100 = 250.0;
//    double GoogleStocks120 = 125.0;
//    int years = 0;

//    stockValueInNyears(AmazonStocks100, GoogleStocks120, years);
//    cout << AmazonStocks100 << " " << GoogleStocks120 << " " << years << endl;

//    return 0;
// }

// // Function to rolls to return a random number
// int roll(int sides) {
//     return rand() % (sides-0 +1);
// }

// // Overload the function to roll multiple dice with the given number of sides and rolls
// int roll(int sides, int rolls) {
//     int total = 0;
//     for (int i = 0; i < rolls; i++) {
//     // iterate and add the sides to the total
//         total += roll(sides);
//     }
//     return total;
// }

// int main() {
//     srand(time(NULL));
    
//     cout << "6-sided: " << roll(6) << endl;
//     cout << "12-sided: " << roll(12) << endl;
//     cout << "20-sided: " << roll(20) << endl;
//     cout<<endl;
//     cout << "3d7: " << roll(7, 3) << endl;
//     cout << "2d8: " << roll(8, 2) << endl;
//     cout << "4d5: " << roll(5, 4) << endl;

//     return 0;
// }





// // #include <iostream>

// // using namespace std;

// // // function that passes the array by reference 
// // // function uses the search sort algorithm
// // void maxNumbers(int (&array)[3]) 
// // {
// //     for (int i = 0; i < 2; i++) 
// //     {
// //         for (int j = i+1; j < 3; j++) 
// //         {
// //             if (array[i] < array[j]) 
// //             {
// //               // swapping the value
// //               int temp = array[i];
// //               array[i] = array[j];
// //               array[j] = temp;
// //             }
// //         }
// //     }
// // }

// // int main() {
// //   // declaring the array and the number of elements also can use []
// //     int arr[3];

// //     // pushing the array elements from the console
// //     cout << "Enter three different integers: ";
// //     for (int i = 0; i < 3; i++) {
// //         cin >> arr[i];
// //     }
// //     maxNumbers(arr);

// //     // cout the sorted array
// //     for (int i = 0; i < 3; i++) {
// //         cout << arr[i] << " ";
// //     }

// //     return 0;
// // }



// // void winNums(int &num1, int &num2, int &num3, int &num4, int &num5, int &mega)
// // {

// //   num1 =  rand() %( (75 - 1 + 1)+1);
// //   num2 =  rand() %( (75 - 1 + 1)+1);
// //   num3 =  rand() %( (75 - 1 + 1)+1);
// //   num4 =  rand() %( (75 - 1 + 1)+1);
// //   num5 =  rand() %( (75 - 1 + 1)+1);
// //   mega =  rand() %( (15 - 1 + 1)+1);
// // }

// // int main()
// // {
// //   srand(time(NULL));

// //   int a, b, c, d, e, m = 0;

// //   winNums(a, b, c, d, e, m);

// //   cout << a<<" "
// //        << b<<" "
// //        << c<<" "
// //        << d<<" "
// //        << e<<" "
// //        << "mega: "<< m << endl;

// //   return 0;
// // }

// // // int main()
// // // {

// //   int x = 10;
// //   int y = 5;
// //   int z = x;

// //   cout << x << " " << y << endl;

// //   x = y;
// //   y = z;

// //   cout << x << " " << y << endl;

// //   return 0;
// // }

// // void certificateOfDeposit(float amount, int years, float interestRate, int compoundTerm, int totalTerms)
// // {
// //   // using this formula to calculate newPrincipal interests because if it divides by 1 it becomes 0
// //   float newInterest = (amount*interestRate)/compoundTerm;

// //   // calculates the new principal
// //   float newPrincipal = amount + newInterest;

// //   // returns when the term ends
// //   if(totalTerms == (years * compoundTerm))
// //   {
// //     cout << setw(5) <<totalTerms
// //      << setw(15) << fixed << setprecision(1) << amount
// //      << setw(20) << fixed << setprecision(3) << newInterest
// //      << setw(20) << fixed << setprecision(1) << newPrincipal << endl;
// //      return;
// //   }


// //    cout << setw(5) <<totalTerms
// //      << setw(15) << fixed << setprecision(1) << amount
// //      << setw(20) << fixed << setprecision(3) << newInterest
// //      << setw(20) << fixed << setprecision(1) << newPrincipal << endl;

// // // calling the function again until the term meets it length
// //     certificateOfDeposit(newPrincipal,years, interestRate, compoundTerm,(totalTerms +1));
// // }
// // int main() {
// //   try {
// //       cout << "Please enter the amount you are investing: " << endl;
// //       float principal;
// //       cin >> principal;
// //       if (cin.fail()) 
// //       {
// //           throw "Invalid input for principal. Please enter a numeric value.";
// //       }

// //       cout << "Please enter the number of years you are investing: " << endl;
// //       int years;
// //       cin >> years;
// //       if (cin.fail()) 
// //       {
// //           throw "Invalid input for years. Please enter a whole number.";
// //       }

// //       cout << "Please enter the interest rate: " << endl;
// //       float interestRate;
// //       cin >> interestRate;
// //       if (cin.fail()) 
// //       {
// //           throw "Invalid input for interest rate. Please enter a numeric value.";
// //       }

// //       cout << "Please enter the compounding term (monthly(12), quarterly(4), semi-annually(2) or yearly(1)): " << endl;
// //       int compoundTerm;
// //       cin >> compoundTerm;
// //       if (cin.fail()) 
// //       {
// //           throw "Invalid input for compounding term. Please enter a whole number.";
// //       }

// //       int startTerm = 0;

// //       cout << left << setw(6) << "Term"
// //             << setw(16) << "Principal"
// //             << setw(16) << "Interest"
// //             << setw(16) << "New Principal" << endl;

      
// //       certificateOfDeposit(principal, years, interestRate / 100, compoundTerm, startTerm);

// //   } catch (const char* error) {
// //       cerr << "Error: " << error << endl;
// //       return 1;
// //   }

// //     return 0;
// // }

