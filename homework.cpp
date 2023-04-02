#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

// Function to rolls to return a random number
int roll(int sides) {
    return rand() % (sides-0 +1);
}

// Overload the function to roll multiple dice with the given number of sides and rolls
int roll(int sides, int rolls) {
    int total = 0;
    for (int i = 0; i < rolls; i++) {
    // iterate and add the sides to the total
        total += roll(sides);
    }
    return total;
}

int main() {
    srand(time(NULL));
    
    cout << "6-sided: " << roll(6) << endl;
    cout << "12-sided: " << roll(12) << endl;
    cout << "20-sided: " << roll(20) << endl;
    cout<<endl;
    cout << "3d7: " << roll(7, 3) << endl;
    cout << "2d8: " << roll(8, 2) << endl;
    cout << "4d5: " << roll(5, 4) << endl;

    return 0;
}





// #include <iostream>

// using namespace std;

// // function that passes the array by reference 
// // function uses the search sort algorithm
// void maxNumbers(int (&array)[3]) 
// {
//     for (int i = 0; i < 2; i++) 
//     {
//         for (int j = i+1; j < 3; j++) 
//         {
//             if (array[i] < array[j]) 
//             {
//               // swapping the value
//               int temp = array[i];
//               array[i] = array[j];
//               array[j] = temp;
//             }
//         }
//     }
// }

// int main() {
//   // declaring the array and the number of elements also can use []
//     int arr[3];

//     // pushing the array elements from the console
//     cout << "Enter three different integers: ";
//     for (int i = 0; i < 3; i++) {
//         cin >> arr[i];
//     }
//     maxNumbers(arr);

//     // cout the sorted array
//     for (int i = 0; i < 3; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }
