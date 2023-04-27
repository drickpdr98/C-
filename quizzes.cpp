	
#include <iostream>
#include<time.h>
#include<cctype>

using namespace std;
// Create a function, named load_encrypt_array, that loads an 26 Capacity Array, named encrypt_offset, with Randon Numbers from 0 to 100.

void load_encrypt_array(int arr[], size_t size)
{
    cout << "Encrypted Offset: " << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (100 - 0 + 1) + 0;
        cout << arr[i] << " ";
    }
}

// Create another function, named encrypt_string, that passes the preceeding array,a All Upper Case input string and a Output String.

void encrypt_string(string str, int encrypt_offset[])
{
    string Output_String;

    cout << "Encrypted String: ";

    for (int i = 0; i < str.length(); i = i + 1)
    {
        //convert if not uppercase
        toupper(str[i]);

        char encrypt_Char = static_cast<char>((static_cast<int>(str[i]) + encrypt_offset[static_cast<int>(str[i]) - 65]) % 26 + 65);
        Output_String += encrypt_Char;
	}

    cout << Output_String<< endl;

}

int main()
{
    srand(time(NULL));
    const int CAPACITY = 26;

    cout << "Enter a string to encrypt > " << endl;
    string str;
    cin >> str;

    cout << endl;

    int encrypt_offset[CAPACITY] = {};

    cout << "Original String: " << str << endl;
  
    encrypt_string(str, encrypt_offset);

    load_encrypt_array(encrypt_offset, CAPACITY);
    
    return 0;
}

Given the following code and program output:
10 int main() {
11    char c = 'A';
12    string s = "Hi";
13    print(c);
14    print(s);
15    return 0;
16 }

Example Output
A
Hi

1) Code a function definition for the print function in line 13.
2) Overload the function definition for the print function in line 14.





Correct Answer:	
Correct 
Two functions with the same name but different parameter list.

1) void print(char x) { cout << x << "\n"; }
2) void print(string s) cout << s << "\n"; }
