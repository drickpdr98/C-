#include <iostream>
#include <vector>
#include <cctype>
using namespace std;


void reverse( string n, size_t s ){
    
    if(s==0){
        cout<<n[0]<<endl;
        return;
        }

    cout<<(n[s])<<endl;

    reverse(n, s-1);
    }
    
int main ( )
{
    
string str = "Hello";

reverse(str,str.length()-1);
 
  return 0;
}

// int sum( int n){
//     if(n==0)
//         return 0 ;
//     return n + sum(n-1);
//     }

// int main ( )
// {

// cout<<sum(5)<<endl;
 
//   return 0;
// }

// void countdown(int n)
// {
//     // up -- output before function call
//     // down -- output after function call
//     if(n == 0 )
//            return ;
//     countdown(n - 1);
//     cout << n << endl;

// }

// int main(){
//     countdown(5);
//     return 0;
// }

// void countLetters(const string input) {
//     // Create a vector of size 26 (one for each letter) and initialize all counts to 0
//     vector<int> counts(26, 0);

//     // Iterate through each character in the input string
//     for (char c : input) {
//         // Check if the character is an alphabetical letter (A-Z or a-z)
//         if (isalpha(c)) {
//             // Convert the character to uppercase 
//             c = toupper(c);
//             // Increment the count 
//             counts[c - 'A']++;
//         }
//     }

//     for (int i = 0; i < 26; i++) {
//         // Check if the count for the current letter is greater than 0
//         if (counts[i] > 0) {
//             // Calculate the uppercase letter corresponding to the current index
//             char letter = 'A' + i;
//             // Display the count for the current letter both uppercase and lowercase 
//             cout << "Number of " << letter << "/" << static_cast<char>(tolower(letter)) << "   " << counts[i] << endl;
//         }
//     }
// }

// int main() {
//     string str;

//     while (true) {
//         cout << "Enter a string to analyze (Enter 'END' to end) > " << endl;
//         getline(cin, str);21`


//         // Check if the user entered "END"; if so, break the loop
//         if (str == "END") {
//             break;
//         }

//         countLetters(str);
//     }

//     return 0;
// }




// int main(){
//     int num = 5;

//     for (int i = 0; i < num;i++)
//     {
//         for (int j = 0; j < num; j++)
//            { 
//             if(num == 5 && i < (num/2)+1 || j >= (num/2) )
//                { if(i == 2 && j== num-1)
//                     cout << "X";
//                 else if (i == 1 && j >=(num/2)+1)
//                     cout << "X";
//                 else if (i == 0 && j >=(num/2))
//                     cout << "X";
//                 else
//                     cout << "0";}
//             else if ( num ==3 && i ==0 && j==num-1)
//                 cout << "X";
//             else
//                 cout << "0";
//            }
//         cout << endl;
//     }

//         return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int num = 7;

//     for (int i = 0; i < num; i++) {
//         for (int j = 0; j < num; j++) {
//             if (i % 3 == 0 && j % 3 == 0 || j == (num/2)  || j == num-1) {
//                 if (i == (num/2) && j == (num/2) ) {
//                     cout << "0";
//                 } else {
//                     cout << "X";
//                 }
//             } else if (i == (num/2) ) {
//                 if (j != (num/2) ) {
//                     cout << "X";
//                 } else {
//                     cout << "0";
//                 }
//             } else {
//                 cout << "0";
//             }
//         }
//         cout << endl;
//     }

//     return 0;
// }


// void letterCounter(string str){
// // declaring a vector to store the values
//     vector <char> letters;

// // looping over the string 
//     for (char i = 0; i < str.length();i++){
//         if (i == " " )
//             return;
//         else
//             letters.push_back(str[i]);
//     }

// // printing out the elements from the vector
//     for (char j = 0; j < letters.size();j++){
//         cout << letters[j];
//     }
// }

// int main(){
//     letterCounter("Hello World");
//     return 0;
// }

// void mulitplicationOfNumber(int num){

//     for (int i = 1; i <=num;i++){
//         cout << i << " * "<< num<<" = "<< (i * num) << endl;
//     }
// }

// int main() {

// //     cout << "Please enter a number: " << endl;
// //     int number;
// //     cin >> number;

// //     mulitplicationOfNumber(number);

// //     return 0;
// // }



// // void sieveOfEratosthenes(int num);

// // int main(){

// //     cout << "Enter an integer value: " << endl;
// //     int num;
// //     cin >> num;

// //     if(cin.fail() || typeid(num)==typeid(float))
// //     {
// //         cout << "Enter a valid integer." << endl;
// //         return 0;
// //     }

// //     sieveOfEratosthenes(num);

// //     return 0;
// // }


// // void sieveOfEratosthenes(int num)
// // {

// //     // using a vector to fill it with true
// //     vector <int> nums(num, true);

// //     //  empty vector to store the prime numbers
// //     vector <int> isPrime;

// //     //  o and 1 are not prime numbers;
// //     nums[0] = false;
// //     nums[1] = false;
    

// //     //  starting at 2 since 0 and 1 is not prime
// //     for (int i = 2; i < nums.size(); i++)
// //     {
// //         if(nums[i])
// //         {
// //             isPrime.push_back(i);

// //             for (int j = i * i; j < nums.size(); j+=i)
// //             {
// //                 nums[j] = false;
// //             }
// //         }
// //     }
// //     cout << "Prime numbers from 1 to 100 inclusive: " << endl;

// //     for (int i = 0; i < isPrime.size();i++)
// //     {
// //         cout << isPrime[i] << " ";
// //     }

// // }

// // int multiply(int num1, int num2){
// //     return num1 * num2;
// // }

// // int main(){

// //     cout << multiply(5, 6) << endl;

// //     return 0;
// // }

// // bool isValid(int n )
// // {
// //     return (n >= 1 && n <= 20);
// // }

// // int main(){

// //     cout << "Enter an integer from 1 to 20 inclusive: " << endl;
// //     int num;
// //     cin >> num; 

// //     if(isValid(num))
// //         cout <<"The number is in range" << endl;
// //     else 
// //         cout <<"The number is not in range" << endl;


// //     return 0;
// // }


// // function that converts kpl to mpg 
// double kilometersPerLiterToMilesPerGallon(double kpl) 
// {
//     const double milesPerGallon = 2.3521458;

//     return kpl * milesPerGallon ;
// }

// // function that calculates the average miles per hour
// //  takes in the kilometers 
// double averageMilesPerHour(double kpl, double time)
// {
//     const int hour = 60;
//     const double miles = 0.62137119;

//     double minutes = time / hour;
//     double milesPerHour = (kpl * miles)/minutes;

//     return milesPerHour;
// }

// int main (){

//     cout << "Enter the Number of Liters used: "<<endl;
//     double liters;
//     cin >> liters;

//     cout << "Enter the Number of Kilometers Driven: "<<endl;
//     double km;
//     cin >> km;

//     cout << "Enter the number of minutes Driven: "<<endl;
//     double minutes;
//     cin >> minutes;

//     double averageMiles = averageMilesPerHour(km, minutes);
//     double milesPG = kilometersPerLiterToMilesPerGallon(liters);

//     cout << "Your Miles per Gallon is "<<fixed<<setprecision(2) << milesPG<< " mpg" << endl;
//     cout << "Your average MPH is "<<fixed<<setprecision(2) << averageMiles << " mph" << endl;

//     return 0;
// }
