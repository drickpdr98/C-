#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

// void mulitplicationOfNumber(int num);

// int main() {

//     cout << "Please enter a number: " << endl;
//     int number;
//     cin >> number;

//     mulitplicationOfNumber(number);

//     return 0;
// }

// void mulitplicationOfNumber(int num){

//     for (int i = 1; i <=num;i++){
//         cout << i << " * "<< num<<" = "<< (i * num) << endl;
//     }
// }

void sieveOfEratosthenes(int num);

int main(){

    cout << "Enter an integer value: " << endl;
    int num;
    cin >> num;

    if(cin.fail() || typeid(num)==typeid(float))
    {
        cout << "Enter a valid integer." << endl;
        return 0;
    }

    sieveOfEratosthenes(num);

    return 0;
}


void sieveOfEratosthenes(int num)
{

    // using a vector to fill it with true
    vector <int> nums(num, true);

    //  empty vector to store the prime numbers
    vector <int> isPrime;

    //  o and 1 are not prime numbers;
    nums[0] = false;
    nums[1] = false;

//  starting at 2 since 0 and 1 is not prime
    for (int i = 2; i < nums.size(); i++)
    {
        if(nums[i])
        {
            isPrime.push_back(i);

            for (int j = i * i; j < nums.size(); j+=i)
            {
                nums[j] = false;
            }
        }
    }
    cout << "Prime numbers from 1 to 100 inclusive: " << endl;

    for (int i = 0; i < isPrime.size();i++)
    {
        cout << isPrime[i] << " ";
    }

}
