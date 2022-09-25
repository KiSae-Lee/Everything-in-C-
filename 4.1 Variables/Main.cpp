#include<iostream>

int main()
{
	int integer = 3; // Range: about -2,000,000,000 ~ 2,000,000,000
	// 1 byte = 8 bit
	// 'int' is 4 bytes(32bit) data.
	// Except negative sign, 31 bit left.
	// There is two possible value which is 0 and 1 for 31 bit of data.
	// Do a simple math, 2^31 = 2,147,483,648.

	unsigned int unsignedInt = 2; // Range: about 0 ~ 4,000,000,000
	// unsigned dataType has no negative sign. Only Positive.

	bool BOOL; // 1 byte. 0 is false, anything except 0 is true.
	char CHAR; // 1 byte.
	// 'char' can store character.
	// Compiler will treat stored number inside 'char' as character.
	// For example:
	char myA = 65;
	std::cout << myA << std::endl;
	short my65 = 65;
	std::cout << my65 << std::endl;
	short SHORT = 1; // 2 bytes.
	int INT; // 4 bytes.
	float FLOAT = 5.5f; // 4 bytes. Decimal.
	double DOUBLE = 5.5; // 8 bytes. Decimal.
	long LONG; // 4 bytes. Depends on compiler.
	long long LONGLONG; // 8 bytes. Depends on compiler.

	// You can check the size of data type with this.
	std::cout << sizeof(bool) << " byte(s)." << std::endl;

	return 0;
}