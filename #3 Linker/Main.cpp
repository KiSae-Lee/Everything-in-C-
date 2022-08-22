#include<iostream>

int Plus(int a, int b);
// There is no "Minus" Function in another cpp file.
int Minus(int a, int b);

// Even if there is an error, no error listed and build succeed.
inline void MinusAndPrint(int a, int b)
{
	std::cout << Minus(a, b) << std::endl;
}

int main()
{
	std::cout << Plus(3, 4);

	return 0;
}

// 1. What Linker do?
// Link those compiled .obj files together.
// If I compile only "Math.cpp", it does not have any error.
// But, If you want to build a project contains only "Math.cpp",
// build going to be failed. because there are no 'main' function.
//
// Link error code looks like this - LNK000.
//
// If you use 'static' keyword in front of a function, it means that your
// function only declared for this translation unit.
// Which means, If your static function has an error but never used,
// Both compiler and linker those not return any error(Just remove the function).
//
// 'inline' keyword does similar function as 'static' in this example.