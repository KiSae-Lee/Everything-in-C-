#include<iostream>

// FUNCTION
// Syntax:
// DataType Signature(DataType pram1, ...)
// {
//		// Function body
//		// return something.('void' has no return value)
// }

int Plus(int a, int b)
{
	return a + b;
}

int PlusAndLog(int a, int b)
{
	std::cout << a + b << std::endl;
	return a + b;
}

int main()
{
	int result = Plus(3, 4);
	std::cout << result << std::endl;

	PlusAndLog(10, 3);

	return 0;
}