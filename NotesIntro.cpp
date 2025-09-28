#include <iostream> // Include the iostream library for input and output

using namespace std; // Use the standard namespace to avoid prefixing standard library names with "std::"

int main() // Main function - execution starts here, anything inside the curly braces will be executed
{
  cout << "Kyle Walsh"; // cout is an object used to output text to the console
  cout << endl; // endl is used to insert a new line in the console output
  cout << "Kyle Walsh"; 
  cout << endl;
  cout << "2025 \n"; // numbers can be printed directly without quotes, numbers can also be printed as strings when enclosed in quotes
  cout << 2000 + 25; // arithmetic operations can be performed directly in the output statement
  cout << endl;
  cout << 81 * 25;
  cout << "Kyle\tWalsh\n"; // \t is used to insert a tab space in the output text
  cout << "Kyle \n"; // \n is also used to insert a new line in the output text
  cout << "Walsh \n";
  cout << "Kyle " << "Walsh \n"; // Multiple items can be printed in a single statement using the << operator
  cout << "2025 \n\n"; // An extra new line is added with \n\n
  return 0; // Return 0 to indicate that the program ended successfully
} 

// \" is used to include double quotes in the output text
// \' is used to include single quotes in the output text
// \\ is used to include a backslash in the output text
// \a is used to produce an alert sound (if supported by the system)
// \b is used to insert a backspace in the output text
// \r is used to return the cursor to the beginning of the line in the output text
// \f is used to insert a form feed in the output text
// \v is used to insert a vertical tab in the output text
// \? is used to include a question mark in the output text
// \0 is used to represent the null character in the output text
// \ooo is used to represent a character using its octal value in the output text
// \xhh is used to represent a character using its hexadecimal value in the output text
// C++ is case-sensitive, meaning that "cout" and "Cout" would be considered different identifiers