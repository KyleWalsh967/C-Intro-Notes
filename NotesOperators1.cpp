#include <iostream> // Include the iostream library for input and output

using namespace std;

int main ()
{
   int x = 2000 + 25; // Declare an integer variable named x, demonstrating the use of the addition operator (+)
   int y = 81 * 25; // Declare an integer variable named y, demonstrating the use of the multiplication operator (*)
   int z = 2050 - 25; // Declare an integer variable named z, demonstrating the use of the subtraction operator (-)
   int a = 4050 / 2; // Declare an integer variable named a, demonstrating the use of the division operator (/)
   int b = 7 % 2; // Declare an integer variable named b, demonstrating the use of the modulus operator (%)
   int d = 2024; // Declare an integer variable named d and assign it the value 2024
   int e = 2026; // Declare an integer variable named e and assign it the value 2026
   d++; // Increment the value of d by 1 using the increment operator (++)
   cout << "This year is " << d << endl; // Output the value of d to the console
   e--; // Decrement the value of d by 1 using the decrement operator (--)
   cout << "This year is " << e << endl; // Output the value of d to the console
   cout << "This year is " << x << endl; // Output the value of x to the console
   cout << "This year is " << a << endl; // Output the value of a to the console
   cout << "This year is " << b * 2025 << endl; // Output the value of b (1) * 2025 to the console
   cout << "This year is " << x - y + z << endl; // Output the result of the expression x - y + z to the console
   return 0;
}

// + is the addition operator, used to add two numbers together
// - is the subtraction operator, used to subtract one number from another
// * is the multiplication operator, used to multiply two numbers together
// / is the division operator, used to divide one number by another
// % is the modulus operator, used to find the remainder of a division operation