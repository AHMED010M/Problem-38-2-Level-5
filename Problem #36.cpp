#include <iostream>
#include<cstdlib>
using namespace std;

int ReadNumber(string Message)
{
	int number;
	cout << Message;
	cin >> number;
	return number;

}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
	
	arrLength++;
	arr[arrLength - 1] = Number;
}


void InputUserNumbersInArray(int arr[100], int& arrLength)	
{
	bool AddMore = true;
	do
	{
		AddArrayElement(ReadNumber("Please enter your number "), arr, arrLength);

		cout << "\nDo you want to add more numbers? [0]:No,[1]:yes?";
		cin >> AddMore;

	} while (AddMore);
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
}



int main()
{
	int arr[100];    
	int arrLength = 0; 

	
	InputUserNumbersInArray(arr, arrLength);

	
	cout << "\nArray Length: " << arrLength << endl;

	cout << "\nArray elements: ";
	PrintArray(arr, arrLength);





}

