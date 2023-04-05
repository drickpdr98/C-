	
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
