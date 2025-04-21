# Array User Input Program

This C++ program allows the user to input multiple numbers into an array dynamically. It demonstrates basic array handling, user input, and function usage in C++.

## Features

- Dynamically add numbers to an array.
- Ask the user whether they want to continue inputting numbers.
- Print the final array and its length.

## Functions

### `int ReadNumber()`
Prompts the user to enter a number and returns it.

### `void AddArrayElement(int Number, int arr[100], int& arrLength)`
Adds the given number to the array and updates the array length.

### `void InputUserNumbersInArray(int arr[100], int& arrLength)`
Continuously reads numbers from the user and adds them to the array until the user chooses to stop.

### `void PrintArray(int arr[100], int arrLength)`
Prints all elements of the array.

## Sample Output

```
Please enter your number 5

Do you want to add more numbers? [0]:No,[1]:yes?1
Please enter your number 8

Do you want to add more numbers? [0]:No,[1]:yes?0

Array Length: 2

Array elements: 5 8
```

## Compilation

To compile and run the program:

```bash
g++ ArrayUserInput.cpp -o ArrayUserInput
./ArrayUserInput
```

## License

This project is open source and free to use.
