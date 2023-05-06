#include <iostream>
#include<time.h>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;



int main()
{

// a) Create a string of lowercase letters, alphastr, that contains: "a,d,a,l,w,f,g,g". 
    string alphastr = "a,d,a,l,w,f,g,g";

// b) Create an integer array, alphacnt, that will be used to count each occurrence of a letter.
    int alphacnt = {};

// c) Parse out the string using the parser istringstream and using static_casting count the number of times a letter appears in the alphacnt array.  


    return 0;
}

// // a)	Create a loadArray Function that loads an array of random numbers between 1 and 150. Pass to the function as parameter the Array, the capacity of the array and the number of values needed.

// void loadArray(int arr[],size_t size, int numberOfValues)
// {
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = rand() % (150 - 1 + 1) + 1;

//     }
// }

// // b)	Create a printRange function which prints all values of the array between A and B inclusive.  The function parameters should be the array, the number of elements and the two values (low value and high value) to output on.

// void printRange(int arr[], size_t size, int low, int high)
// {
//     for (int i = 0; i < size;i++)
//     {
//         if(arr[i]>=low && arr[i]<=high)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// }
// // c)	In main code create a random number between 10 and 30 to determine how many random numbers are needed (num_Elements) in the array. Also in main code accept the range’s low and high value to output on.  Call the init function and the print function.
// int main()
// {
   
//     srand(time(NULL));

//     const int CAPACITY = 20;

//     int arr[] = {};

//     int num_Elements = rand() % (30 - 10 + 1) + 10;

//     cout << "Please enter a low value: " << endl;
//     int low;
//     cin >> low;

//     cout << "Please enter a high value: " << endl;
//     int high;
//     cin >> high;

//     loadArray(arr, CAPACITY,num_Elements);
//     printRange(arr, CAPACITY, low, high);

//     return 0;

// }

// const int numAstros = 7;
// const int numFields = 3;

// int main() {

//     string astronautinfo[numAstros][numFields]={};
//     int astronautorder[numAstros]={};

//     ifstream input("input.txt");

//     for (int i = 0; i < numAstros; i++) {
//         getline(input, astronautinfo[i][0], '|');
//         getline(input, astronautinfo[i][1], '|');
//         getline(input, astronautinfo[i][2]);

//         astronautorder[i] = stoi(astronautinfo[i][2]);
//     }
    
//     cout << left << setw(20) << "Order" << left << setw(25) 
//          << "Astronaut" << left << "State" << endl;
         
//     cout << endl;

//     for (int i = 0; i <=numAstros; i++) {
//         for (int j = 0; j < numAstros; j++) {
//         if (astronautorder[j] == i) {
//             cout << left << setw(20) << i << left 
//             << setw(25) << astronautinfo[j][0] << left << astronautinfo[j][1] << endl;
//             break;
//         }
//     }

// }
//     input.close();  

//     return 0;
// }



// int main() {
//     ifstream input("input.txt");  

//     ofstream output("output.txt"); 

//     string record;

//     while (getline(input, record)) { 
//         output << record << endl; 
//     }

//     input.close();
//     output.close();

//     return 0;
// }

// // Create a function, named load_encrypt_array, that loads an 26 Capacity Array, named encrypt_offset, with Randon Numbers from 0 to 100.

// void load_encrypt_array(int arr[], size_t size)
// {
//     cout << "Encrypted Offset: " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = rand() % (100 - 0 + 1) + 0;
//         cout << arr[i] << " ";
//     }
// }

// // Create another function, named encrypt_string, that passes the preceeding array,a All Upper Case input string and a Output String.

// void encrypt_string(string str, int encrypt_offset[])
// {
//     string Output_String;

//     cout << "Encrypted String: ";

//     for (int i = 0; i < str.length(); i = i + 1)
//     {
//         //convert if not uppercase
//         toupper(str[i]);

//         char encrypt_Char = static_cast<char>((static_cast<int>(str[i]) + encrypt_offset[static_cast<int>(str[i]) - 65]) % 26 + 65);
//         Output_String += encrypt_Char;
// 	}

//     cout << Output_String<< endl;

// }

// int main()
// {
//     srand(time(NULL));
//     const int CAPACITY = 26;

//     cout << "Enter a string to encrypt > " << endl;
//     string str;
//     cin >> str;

//     cout << endl;

//     int encrypt_offset[CAPACITY] = {};

//     cout << "Original String: " << str << endl;
  
//     encrypt_string(str, encrypt_offset);

//     load_encrypt_array(encrypt_offset, CAPACITY);
    
//     return 0;
// }

// void printGreaterThanX(int arr[],int value, size_t size)
// {
//     for (int i = 0; i < size;i++)
//     {
//         if(arr[i]>value)
//             cout << arr[i] << " ";
        
//     }
// }

// int main()
// {
//     const int SIZE = 7;
//     int array[SIZE] = {7, 34, 1, 6, 27, 8, 2};

//     printGreaterThanX(array, 10, SIZE);

//     return 0;
// }

// void print(char arr[], size_t size)
// {
//     for (int i = 0; i < size;i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// void init(char arr[], size_t size)
// {
//     for (int i = 0; i < size;i++)
//     {
//         arr[i] = 65+i;
//     }
// }

// int main()
// {
//     const int CAPACITY = 3;

//     //implicit casting
//     char arr[CAPACITY] = {};

//     init(arr, CAPACITY);
//     print(arr, CAPACITY);

//     return 0;
// }
// bool hasValue(int arr[], int value, size_t size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i] == value)
//             return true;
//     }
//     return false;
// }

// void randArray(int arr[], size_t size)
// {
//     int ran;
//     for (int i = 0; i < size; i++)
//     {
//         int ran;
//         do 
//         {
//             ran = rand() % (9-0+1)+0; 
//         } while (hasValue(arr, ran, i)); 

//         arr[i] = ran;
//     }
// }

// void print(int arr[], size_t size)
// {
//     for (int i = 0; i < size;i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     srand(time(NULL)); 


//     const int CAPACITY = 10;

//     int arr[CAPACITY] = {};

//     randArray(arr, CAPACITY);

//     print(arr, CAPACITY);
// }


////////////////////////////////////////////////////////////////
// const int CAPACITY = 5;

// void print( int arr[])
// {
//     for (int i = 0; i < CAPACITY;i++)
//         cout << arr[i] << "  ";
//     cout << endl;
// }

// void offset(int arr[])
// {
//     int ran = rand() % (5 - (-5) + 1) - 5;
//     cout << "Rand Value: ";
//     for (int i = 0; i < CAPACITY; i++)
//     {
//         arr[i] +=ran ;
//         cout<< ran<<" ";
//     }
//     cout << endl;
// }

// void init(int arr[])
// {
//     for (int i = 0; i < CAPACITY;i++)
//     {
//         arr[i] = rand() % (9 - 1 + 1) + 1;
//     }
// }

// int main()
// {
//     srand(time(NULL));
//     int arr[CAPACITY] = {};

//     init(arr);
//     cout << "Original:    ";
//     print(arr);
//     offset(arr);
//      cout << "Offset:      ";
//     print(arr);
//     return 0;
// }
////////////////////////////////////////////////////////////////
// const int ROWS = 8;
// const int COLUMNS = 8;

// void print(int arr[])
// {
//     int count = 0;
//     for (int i = 0; i < ROWS; i++)
//     {
//         for (int j = 0; j < COLUMNS;j++)
//         {
//             if(arr[i]==j)
//                 cout << "Q"
//                      << " ";
//             else
//                 cout << "."
//                      << " ";
//             count++;
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     int arr[ROWS] = {0, 4, 2, 5, 6, 7, 1, 3};
//     print(arr);
//     return 0;
// }
///////////////////////////////////////////////////

// void deleteAt(int arr[], int &size, int index)
// {
//     for (int i = index; i < size; i++) {
//         arr[i] = arr[i + 1];
//     }
    
//     size--;
// }

// void print(int arr[],size_t size)
// {
//     for( int i = 0; i < size;i++)
//         cout << arr[i] << " ";
//     cout << endl;
// }

// void init( int arr[],size_t size)
// {
//     for (int i = 0; i < size;i++)
//     {
//         arr[i] = rand() % (99 - 1 + 1) + 1;
//     }
// }

// int main()
// {
//     srand(time(NULL));

//     const int CAPACITY = 100;
//     int size = 5;

//     int arr[CAPACITY] = {};

//     init(arr,size);
//     print(arr, size);
//     deleteAt(arr, size, 2);
//     print(arr, size);


//     return 0;
// }

// const int rows = 3;
// const int  columns = 4;

// float average(int arr[][columns], size_t size)
// {
//     float total = 0;
//     for (int i = 0; i < rows; i++)
//     {
//         for (int c = 0; c < columns;c++)
//         {
//             total=+arr[i][c];
//         }
//     }

//     return total / size;
// }
// void print(int arr[][columns])
// {
//      for (int i = 0; i < rows;i++)
//     {
//         for (int j = 0; j < columns;j++)
//         {
//             cout << arr[i][j] <<" ";
//         }
//         cout << endl;
//     }

// }
// int init( int arr[][columns], int rows, int columns)
// {
//     for (int i = 0; i < rows;i++)
//     {
//         for (int c = 0; c < columns;c++)
//         {
//             arr[i][c] = rand() % (99 - 10 + 1) + 10;
//         }
//     }
// }

// int main()
// {
//     srand(time(NULL));
//     int arr[rows][columns] = {};


//     init(arr, rows, columns);
//     print(arr);
//     cout << endl;
//     cout<<"Average: " << average(arr, (rows * columns)) << endl;


//     return 0;
// }
///////////////////////////////////////////////////////////////

// void replaceAt(int arr[], int index, int newValue)
// {
//     arr[index] = newValue;
// }

// void init(int arr[], size_t size)
// {
 
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = i;
//     }
// }

// int main(){

//     const int CAPACITY = 10;

//     int arr[CAPACITY] = {};

//     init(arr,CAPACITY);
//     replaceAt(arr, 4, 40);
//     replaceAt(arr, 7, 70);

//     for(auto x: arr)
//         cout << x <<" ";

//     return 0;
// }





////////////////////////////////////////////////////////////////

// const int CAPACITY = 10;

// void print( int arr[])
// {
//     for( int i = 0; i < CAPACITY; i++)
//         cout << arr[i]<< " ";
// }

// void init(int arr[])
// {
//     int start = 10;

//     for (int i = 0; i < CAPACITY; i++)
//     {
//         arr[i] = start;
//         start += 10;
//     }
// }

// int main(){

//     int arr[CAPACITY] = {};

//     init(arr);
//     print(arr);
//     return 0;
// }

////////////////////////////////////////////////////////////////////////////////

// const int CAPACITY = 20;

// void reverse(float arr[])
// {
//     size_t size = CAPACITY-1;

//     for (int i = 0; i <CAPACITY; i++)
//     {
//         cout<<arr[size]<<" ";
//         size--;
//     }
// }

// void copy(float arr[], float arr2[])
// {
//     for (int i = 0; i < CAPACITY;i++)
//     {
//          arr2[i] = arr[i];
//     }

//     for( int i = 0; i < CAPACITY;i++)
//         cout << arr2[i] << " ";
// }

// void init(float arr[])
// {
//     for (int i = 0; i < CAPACITY;i++)
//     {
//         arr[i] = rand() % (999 - 100 + 1) + 100;
//     }
// }

// int main()
// {
//     srand(time(NULL));

//     float arr1[CAPACITY] = {};
//     float arr2[CAPACITY] = {};

//     init(arr1);
//     copy(arr1, arr2);

//     cout << endl;
//     reverse(arr1);

//     return 0;
// }
////////////////////////////////////////////////////////////////
// const int rows = 4;
// const int columns = 4;

// double average( int arr[][columns])
// {
//     double total = 0;

//     for (int i = 0; i < rows; i++)
//     {
//      for (int j = 0; j < columns; j++)
//         {
//             total+=arr[i][j];
//         }
//     }

//     return total / (rows / columns);
// }

// void init( int arr[][columns])
// {
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             arr[i][j] = rand() % (99 - 10 + 1) + 10;
//         }
//     }
// }
// int main()
// {
//     srand(time(NULL));

//     int arr[rows][columns] = {};

//     init(arr);

//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

//     cout << endl;

//     cout<<"Average: " << average(arr) << endl;

//     return 0; 
// }

////////////////////////////////////////////////////////////////

// const int rows = 3;
// const int columns = 4;


// void print(int arr[rows][columns])
// {
//     for (int i = 0; i < rows;i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// void *init (int (*arr)[columns])
// {
//     int start = 10;

//     for (int i = 0; i < rows;i++)
//     {
//         for (int j = 0; j < columns; j++)
//         {
//             arr[i][j] = start;
//             start++;
//         }
//     }
// }

// int main()
// {
//     srand(time(NULL));
 
//     int arr[rows][columns] = {};

//     int (*ptr)[columns] = arr;

//     init(ptr);

//     print(arr);

//     //  delete[] arr;
//     return 0;

// }
///////////////////////////////////////////////////////////////
// const int CAPACITY = 10;

// int replaceAt(int *arr, size_t size, int index, int newValue)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i] ==arr[index])
//             arr[i] = newValue;
//     }
        
// }

// void *init(int *arr)
// {
//     int start = 0;
//     for (int i = 0; i < CAPACITY; i++)
//     {
//         arr[i] = start;
//         start ++;
//     }
// }

// int main()
// {
//     int arr[CAPACITY] = {};
//     int *ptr = arr;

//     init(ptr);
//     for( auto x: arr)
//     {
//         cout << arr[x] << " ";
//     }

//     cout << endl;
//     replaceAt(ptr, CAPACITY, 4, 40);
//     replaceAt(ptr, CAPACITY, 7, 70);
//    for (int i = 0; i < CAPACITY; i++)
//     {   
//     cout << *(ptr + i) << " ";
//     }

//     return 0;
// }

///////////////////////////////////////////////////////////////

// const int CAPACITY = 10;
// void print( int arr[])
// {
//     for (int i = 0; i < CAPACITY; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// void init(int (&arr)[CAPACITY]) 
// {
//     int start = 10;
//     for (int i = 0; i < CAPACITY; i++)
//     {
//         arr[i] = start;
//         start += 10;
//     }
// }
// int main()
// {
//     int arr[CAPACITY] = {};

//     init(arr);
//     print(arr);
//     return 0;
// }
///////////////////////////////////////////////////////////////
// void print(char c)
// {
//   cout << c << endl;
// }

// void print(string s)
// {
//   cout << s << endl;
// }
  
// int main()
// {
//   char c = 'A';
//   string s = "Hi";

//   print(c);

//   print(s);

//   return 0;
// }
//    // int main()
//    // {
//    //   char a[3][4] = {  {'A','D','E','F'},  {'I','R','O','N'},  {'R','U','N','U'}  };

//    //   for (int i = 0; i < 3; i++)
//    //   {
//    //     for (int j = 0; j < 4; j++)
//    //     {
//    //       if(j>1 && j< 3)
//    //         cout << a[i][j] << " ";
//    //     }
//    //   }

//    //   cout << endl;

//    //   for (int i = 0; i < 3; i++)
//    //   {
//    //     for (int j = 0; j < 4; j++)
//    //     {
//    //       if(i>0 && i< 2)
//    //         cout << a[i][j] << " ";
//    //     }
//    //   }
//    // }
//    ////////////////arrays//////////////////////////////////////////////////////
//    ///////////////1////////////////////

//    ////////////////2////////////////////

//    ////////////////3///////////////////////////////////??//

//    ////////////////4///////////////////////

//    /////////////////////////////////////

//    // int main()
//    // {
//    //   const int row = 4;
//    //   const int column = 5;

//    //   int arr[row][column] = {};

//    //   int count = 10;

//    //   for (int i = 0; i < row;i++)
//    //   {
//    //     for (int j = 0; j < column; j++)
//    //     {
//    //       arr[i][j] = count ++;
//    //       cout << arr[i][j] << " ";
//    //     }
//    //     cout << endl;
//    //   }

//    //   cout << endl;

//    //   return 0;
//    // }

//    // void linearSearch(int arr[],int value)
//    // {
//    //   for (int i = 0; i < SIZE;i++)
//    //   {
//    //     if(arr[i]==value)
//    //       cout<<"Index: " << i << endl;
//    //   }
//    // }

//    //  int main()
//    // {
//    //   srand(time(NULL));

//    //   cout << "Enter an integer: " << endl;
//    //   int val;
//    //   cin >> val;

//    //   int arr[SIZE] = {};

//    //   for (int i = 0; i < SIZE;i++)
//    //   {
//    //     arr[i] = rand() % SIZE+1;
//    //     cout << arr[i] << " ";
//    //   }
//    //   cout << endl;

//    //   linearSearch(arr,val);

//    //   return 0;
//    // }

//    // int main()
//    // {
//    //   string arr[] = {"Dravin", "D", "Sookraj"};

//    //   cout<<arr[1]<<endl;

//    //   for(auto x: arr)
//    //     cout << x << " ";

//    //   return 0;
//    // }

//    ////////////////////////////////////////////////////////////////////////////

//    // int average(int arr[], size_t size)
//    // {
//    //     double total = 0;

//    //     for (int i = 0; i < size;i++)
//    //         total += arr[i];

//    //     return total / size;
//    // }
//    //  int main()
//    // {
//    //     srand(time(NULL));

//    //     const int SIZE = 10;

//    //     int array[SIZE] = {};

//    //     for (int i = 0; i < SIZE;i++)
//    //     {
//    //         array[i] = rand() % 20;
//    //     }

//    //     cout << average(array, SIZE) << endl;

//    //     return 0;
//    // }

//    ////////////////////////////////////////////////////////////////////////////

//    // void linearSearch(int arr[], size_t size, int value)
//    // {
//    //     for (int i = 0; i < size;i++)
//    //     {
//    //         if(arr[i]==value)
//    //             cout << i << endl;
//    //     }
//    // }
//    // int main()
//    // {
//    //     srand(time(NULL));

//    //     const int SIZE = 20;

//    //     int array[SIZE] = {};

//    //     for (int i = 0; i < SIZE;i++)
//    //     {
//    //         array[i] = rand() % 20;
//    //     }

//    //     linearSearch(array, SIZE, 13);

//    //     return 0;
//    // }

//    ///////////////////////////////////////////////////////////////////////////////

//    // int main()
//    // {
//    //     int const SIZE = 26;

//    //     char array[SIZE] = {};

//    //     for (int i = 0; i < SIZE; i++)
//    //     {
//    //         array[i] = 65+i;
//    //     }

//    //     for( char x: array)
//    //         cout << x << " ";

//    //         return 0;
//    // }

//    ///////////////////////////////////////////////////////////////////////////////
//    // int main()
//    // {
//    //     const int SIZE = 25;
//    //     int arr[SIZE] = {};

//    //     int j = 0;
//    //     for (int i = 2; i < 50 && j< SIZE; i++) {
//    //         if (i % 2 == 0) {
//    //             arr[j] = i;
//    //             j++;
//    //         }
//    //     }

//    //     for (auto x : arr)
//    //         cout << x << " ";

//    //     return 0;
//    // }

//    // int main()
//    // {
//    //     string names[] = {"John", "William", "Henry"};
//    //     cout << names[1]<<endl;

//    //     for(auto i: names)
//    //         cout << i << " ";
//    //     return 0;

//    // }
//    ///////////////////////////////////////////////////////////////////////////////

//    // // new stock value changes every year
//    // double stockValueInNyears(double &stock1, double &stock2, int &numberOfYears)
//    // {
//    //     const double AMAZON = 4.0;
//    //     const double GOOGLE = 10.0;
//    //     stock1 = stock1 + (stock1 * (AMAZON / 100));
//    //     stock2= stock2 + (stock2 * (GOOGLE / 100));

//    //     // base case
//    //     if (stock1 == stock2)
//    //     {
//    //         return numberOfYears;
//    //     }

//    // //    recursive case
//    //     numberOfYears++;
//    //     return stockValueInNyears(stock1, stock2, numberOfYears);

//    // }

//    // int main()
//    // {
//    //     // starting portfolio
//    //    double AmazonStocks100 = 250.0;
//    //    double GoogleStocks120 = 125.0;
//    //    int years = 0;

//    //    stockValueInNyears(AmazonStocks100, GoogleStocks120, years);
//    //    cout << AmazonStocks100 << " " << GoogleStocks120 << " " << years << endl;

//    //    return 0;
//    // }

//    // // Function to rolls to return a random number
//    // int roll(int sides) {
//    //     return rand() % (sides-0 +1);
//    // }

//    // // Overload the function to roll multiple dice with the given number of sides and rolls
//    // int roll(int sides, int rolls) {
//    //     int total = 0;
//    //     for (int i = 0; i < rolls; i++) {
//    //     // iterate and add the sides to the total
//    //         total += roll(sides);
//    //     }
//    //     return total;
//    // }

//    // int main() {
//    //     srand(time(NULL));

//    //     cout << "6-sided: " << roll(6) << endl;
//    //     cout << "12-sided: " << roll(12) << endl;
//    //     cout << "20-sided: " << roll(20) << endl;
//    //     cout<<endl;
//    //     cout << "3d7: " << roll(7, 3) << endl;
//    //     cout << "2d8: " << roll(8, 2) << endl;
//    //     cout << "4d5: " << roll(5, 4) << endl;

//    //     return 0;
//    // }

//    // // #include <iostream>

//    // // using namespace std;

//    // // // function that passes the array by reference
//    // // // function uses the search sort algorithm
//    // // void maxNumbers(int (&array)[3])
//    // // {
//    // //     for (int i = 0; i < 2; i++)
//    // //     {
//    // //         for (int j = i+1; j < 3; j++)
//    // //         {
//    // //             if (array[i] < array[j])
//    // //             {
//    // //               // swapping the value
//    // //               int temp = array[i];
//    // //               array[i] = array[j];
//    // //               array[j] = temp;
//    // //             }
//    // //         }
//    // //     }
//    // // }

//    // // int main() {
//    // //   // declaring the array and the number of elements also can use []
//    // //     int arr[3];

//    // //     // pushing the array elements from the console
//    // //     cout << "Enter three different integers: ";
//    // //     for (int i = 0; i < 3; i++) {
//    // //         cin >> arr[i];
//    // //     }
//    // //     maxNumbers(arr);

//    // //     // cout the sorted array
//    // //     for (int i = 0; i < 3; i++) {
//    // //         cout << arr[i] << " ";
//    // //     }

//    // //     return 0;
//    // // }

//    // // void winNums(int &num1, int &num2, int &num3, int &num4, int &num5, int &mega)
//    // // {

//    // //   num1 =  rand() %( (75 - 1 + 1)+1);
//    // //   num2 =  rand() %( (75 - 1 + 1)+1);
//    // //   num3 =  rand() %( (75 - 1 + 1)+1);
//    // //   num4 =  rand() %( (75 - 1 + 1)+1);
//    // //   num5 =  rand() %( (75 - 1 + 1)+1);
//    // //   mega =  rand() %( (15 - 1 + 1)+1);
//    // // }

//    // // int main()
//    // // {
//    // //   srand(time(NULL));

//    // //   int a, b, c, d, e, m = 0;

//    // //   winNums(a, b, c, d, e, m);

//    // //   cout << a<<" "
//    // //        << b<<" "
//    // //        << c<<" "
//    // //        << d<<" "
//    // //        << e<<" "
//    // //        << "mega: "<< m << endl;

//    // //   return 0;
//    // // }

//    // // // int main()
//    // // // {

//    // //   int x = 10;
//    // //   int y = 5;
//    // //   int z = x;

//    // //   cout << x << " " << y << endl;

//    // //   x = y;
//    // //   y = z;

//    // //   cout << x << " " << y << endl;

//    // //   return 0;
//    // // }

//    // // void certificateOfDeposit(float amount, int years, float interestRate, int compoundTerm, int totalTerms)
//    // // {
//    // //   // using this formula to calculate newPrincipal interests because if it divides by 1 it becomes 0
//    // //   float newInterest = (amount*interestRate)/compoundTerm;

//    // //   // calculates the new principal
//    // //   float newPrincipal = amount + newInterest;

//    // //   // returns when the term ends
//    // //   if(totalTerms == (years * compoundTerm))
//    // //   {
//    // //     cout << setw(5) <<totalTerms
//    // //      << setw(15) << fixed << setprecision(1) << amount
//    // //      << setw(20) << fixed << setprecision(3) << newInterest
//    // //      << setw(20) << fixed << setprecision(1) << newPrincipal << endl;
//    // //      return;
//    // //   }

//    // //    cout << setw(5) <<totalTerms
//    // //      << setw(15) << fixed << setprecision(1) << amount
//    // //      << setw(20) << fixed << setprecision(3) << newInterest
//    // //      << setw(20) << fixed << setprecision(1) << newPrincipal << endl;

//    // // // calling the function again until the term meets it length
//    // //     certificateOfDeposit(newPrincipal,years, interestRate, compoundTerm,(totalTerms +1));
//    // // }
//    // // int main() {
//    // //   try {
//    // //       cout << "Please enter the amount you are investing: " << endl;
//    // //       float principal;
//    // //       cin >> principal;
//    // //       if (cin.fail())
//    // //       {
//    // //           throw "Invalid input for principal. Please enter a numeric value.";
//    // //       }

//    // //       cout << "Please enter the number of years you are investing: " << endl;
//    // //       int years;
//    // //       cin >> years;
//    // //       if (cin.fail())
//    // //       {
//    // //           throw "Invalid input for years. Please enter a whole number.";
//    // //       }

//    // //       cout << "Please enter the interest rate: " << endl;
//    // //       float interestRate;
//    // //       cin >> interestRate;
//    // //       if (cin.fail())
//    // //       {
//    // //           throw "Invalid input for interest rate. Please enter a numeric value.";
//    // //       }

//    // //       cout << "Please enter the compounding term (monthly(12), quarterly(4), semi-annually(2) or yearly(1)): " << endl;
//    // //       int compoundTerm;
//    // //       cin >> compoundTerm;
//    // //       if (cin.fail())
//    // //       {
//    // //           throw "Invalid input for compounding term. Please enter a whole number.";
//    // //       }

//    // //       int startTerm = 0;

//    // //       cout << left << setw(6) << "Term"
//    // //             << setw(16) << "Principal"
//    // //             << setw(16) << "Interest"
//    // //             << setw(16) << "New Principal" << endl;

//    // //       certificateOfDeposit(principal, years, interestRate / 100, compoundTerm, startTerm);

//    // //   } catch (const char* error) {
//    // //       cerr << "Error: " << error << endl;
//    // //       return 1;
//    // //   }

//    // //     return 0;
//    // // }

// #include <iostream>
// #include <iomanip>
// #include <cstdlib>
// #include <time.h>
// using namespace std;



// int main() {
//   const int SIZE = 100;
//   const int MAXCOUNT = 100000; 
//     int arr[SIZE] = {};
//     int highest = 0;
//     int lowest = MAXCOUNT;
//     float total = 0;

//     srand(time(NULL));

//     for (int i = 0; i < MAXCOUNT; i++) {
//         int num = rand() % (SIZE-0+1)+0;
//         arr[num]++;
//     }

//     for (auto x : arr) {
//         highest = max(highest, x);
//         lowest = min(lowest, x);
//         total += x;
//     }
//     float average = total / SIZE;

//     cout << "Highest: " << highest << endl;
//     cout << "Lowest: " << lowest << endl;
//     cout << "Average: " << average << endl;
    
//     cout << endl;
//     cout<< setw(6) << "Number" << setw(6) << "Count" << setw(12) << "Percent %" << endl;
//     cout << endl;

//     for (int i = 0; i < SIZE; i++) {
//         float percent = 100.0 * arr[i] / MAXCOUNT;
//         cout  << i << setw(10) << arr[i] << setw(11) << setprecision(4) << percent<< endl;
//     }


//     return 0;
// }

