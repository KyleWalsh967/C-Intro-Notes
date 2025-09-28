#include <iostream> // Include the iostream library for input and output

using namespace std;

int main ()
{
   int x = 2024;
    x += 1; // Increment x by 1 using the addition assignment operator (+=)
    cout << "This year is " << x << endl; // Output the value of x to the console
   int y = 2026;
    y -= 1; // Decrement y by 1 using the subtraction assignment operator (-=)
    cout << "This year is " << y << endl; // Output the value of y to the console
   int z = 81;
    z *= 25; // Multiply z by 25 using the multiplication assignment operator (*=)
    cout << "This year is " << z << endl; // Output the value of z to the console
   int a = 4050;
    a /= 2; // Divide a by 2 using the division assignment operator (/=)
    cout << "This year is " << a << endl; // Output the value of a to the console
   double b = 1012.50; // Double used to hold decimal values
    b *= 2; // Multiply b by 2 using the multiplication assignment operator (*=)
    cout << "This year is " << b << endl; // Output the value of b * 100 to the console
   int c = 2026;
    c %= 2001; // Use the modulus assignment operator (%=) to get the remainder of c divided by 2024
    cout << "This year is " << c * 81 << endl; // Output the value of c * 81 to the console
   cout << "This year is " << (y == x) + 2024 << endl; // Use the equality operator (==) to compare y and x, returns 1 (true) then adds 2024
   cout << "This year is " << (a > x) + 2025 << endl; // Use the greater than operator (>) to compare y and x, returns 0 (false) then adds 2024
   cout << "This year is " << (a >= x) + 2024 << endl; // Use the greater than or equal to operator (>=) to compare y and x, returns 1 (true) then adds 2024
   cout << "This year is " << (y < x && a > x) + 2025 << endl; // Use the logical AND operator (&&) to compare y and x, and a and x, returns 0 (false) then adds 2024
   cout << "This year is " << (y < x || a == x) + 2024 << endl; // Use the logical OR operator (||) to compare y and x, and a and x, returns 1 (true) then adds 2024
   cout << "This year is " << !(y < x) + 2024 << endl; // Use the logical NOT operator (!) to negate the comparison of y and x, returns 1 (true) then adds 2024
   return 0;
}

// += is the addition assignment operator, used to add a value to a variable and assign the result to that variable
// -= is the subtraction assignment operator, used to subtract a value from a variable and assign the result to that variable
// *= is the multiplication assignment operator, used to multiply a variable by a value and assign the result to that variable
// /= is the division assignment operator, used to divide a variable by a value and assign the result to that variable
// %= is the modulus assignment operator, used to find the remainder of a division operation and assign it to a variable
// == is the equality operator, used to compare two values for equality
// != is the inequality operator, used to compare two values for inequality
// > is the greater than operator, used to compare two values
// < is the less than operator, used to compare two values
// >= is the greater than or equal to operator, used to compare two values
// <= is the less than or equal to operator, used to compare two values
// && is the logical AND operator, used to combine two boolean expressions
// || is the logical OR operator, used to combine two boolean expressions
// ! is the logical NOT operator, used to negate a boolean expression