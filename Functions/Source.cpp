#include <iostream>
#include <string>


int print(std::string input)
{
	std::cout << input;
	return 0;
}


bool IsmultipleofThree(int value)
{
	return value % 3 == 0;
}

void PrintValuesTo10()
{
	for (int i = 0; i <= 10; i++)
	{
		std::cout << i;
	}
	std::cout << std::endl;
	system("pause");
}
 
void PrintValuesBetween(int low, int high)
{
	for (int i = low + 1; i < high; high++)
	{
		std::cout << i;
	}
	std::cout << std::endl;
	system("pause");
}

//Create a function that will take in a array and the length of the array
//The function will return the sum of all the values in the array
int ArraySum(int arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum = arr[i] + sum;
	}
}

//create a function that will reverse the values in the array passed in.
//you will neeed to pass in a array and the size of the array as arguments.
//cannot use a second array
void RevArray(int arr[], int size)
{
	int rev;
	for (int i = 0; i < size; i++)
	{
		rev = arr[i] + rev;
	}

}

int main()
{
	int around[] = { 1, 2, 3, 4 };
	ArraySum(around, 4);

	int backwards[] = { 4, 3, 2, 1 };
	RevArray(backwards, 4);
}

//Homework
//1 

