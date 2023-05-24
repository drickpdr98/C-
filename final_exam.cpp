
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cctype>
#include<iomanip>

using namespace std;

int main()
{
  ifstream input("inputnum.txt");
  ofstream output("output2.txt");

  string token;
  string previous;

  while (getline(input, token))
  {
    stringstream concatedLine;
    concatedLine << previous << ' ' << token;
    previous = concatedLine.str();

    output << previous << endl;
  }

  input.close();
  output.close();

  return 0;
}

