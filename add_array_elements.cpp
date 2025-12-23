/* Algorithm Challenge & Problem Solving
 * 36 - Add Array Elements Semi-Dynamically
 *
 * This program simulates a semi-dynamic array using a fixed-size array (maximum 100 elements).
 * The user is prompted to enter numbers one by one, and each number is stored sequentially
 * in the array. After each insertion, the user is asked whether they want to add another number.
 *
 * The program demonstrates:
 * - Passing arrays to functions
 * - Using reference parameters to track array length
 * - Modular function design
 * - Basic input/output handling in C++
 */

#include <iostream>
using namespace std;

// Reads a single number from the user and returns it
int ReadNumber()
{
    int Number;
    cout << "Please Enter a Number\n";
    cin >> Number;
    return Number;
}

// Adds a new element to the array and updates its logical length
void AddArrayElement(int Number, int arr[100], int &arrlength)
{
    // Increase array length to accommodate the new element
    arrlength++;

    // Store the number at the correct index (length - 1)
    arr[arrlength - 1] = Number;
}

// Handles user input and keeps adding numbers until the user chooses to stop
void InputUserNumbersInArray(int arr[100], int &arrlength)
{
    bool addMore = true;

    do
    {
        // Read a number and add it to the array
        AddArrayElement(ReadNumber(), arr, arrlength);

        // Ask the user if they want to add more numbers
        cout << "\nDo you want to add more numbers? 1 = Yes, 0 = No\n";
        cin >> addMore;

    } while (addMore); // Continue as long as the user chooses to add more
}

// Prints all elements stored in the array
void PrintArray(int arr[100], int arrlength)
{
    for (int i = 0; i < arrlength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100], arrlength = 0;

    // Fill the array with user input
    InputUserNumbersInArray(arr, arrlength);

    // Display array length and elements
    cout << "\nArray Length: " << arrlength << endl;
    cout << "Array Elements: ";
    PrintArray(arr, arrlength);

    return 0;
}
