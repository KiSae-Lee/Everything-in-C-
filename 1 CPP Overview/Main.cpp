// Codes run line by line in "main' function

// A header.
// It takes all of the contents of the file and copy and paste into current file.
#include <iostream>

// 6. This is a function.
//    Syntax:
//    ReturnDataType FunctionName (DataType_1 InputName_1, DataType_2 InputName_2, ...)
//    {
//        // Codes...
//        return Something; // DataType of 'Something' must match with ReturnDataType.
//    }

void MyLogInAnotherCPPFile();

void MyLog(const char *message)
{
	std::cout << message << std::endl; // Codes which will be executed when this function called.
}

int main() // Main function. Program always starts from here.
{
	// 1. Console output.
	//    "std" is a standard library for C++.
	//    "cout" and "endl" is a function in "std" library.
	//    "<<" is an operator.
	std::cout << "Hello CPP!" << std::endl;

	// 2. also you can do this like this.
	std::cout << "'\\n' do the same job as 'std::endl'\n";

	// 3. when you do something wrong.You can check the result after un-command line 19.
	//    Visual studio will tell you what is wrong in your code in "ErrorLists".
	//    In many times, "Output" window shows more details for your error. More reliable than "ErrorLists".
	//    Check the error code for your error.
	// std::cout << "Something is wrong."

	// 6. Calling MyLog Func.
	MyLog("This is my first log!");

	// 7. Calling MyLogInAnotherCPPFile Func in Mylog.cpp file.
	MyLogInAnotherCPPFile();

	// 4. Just for pause program. It requires for any input.
	std::cin.get();

	// 5. Tell computer that this program run successfully.
	return 0;
}

// Configuration and Platform.
// This project is CMake based.
// Checkout CMakeLists.txt file in the root directory.
// When Configuration setting is debug, optimization settings will be changed. (In VS project, Project Properties -> C/C++ -> Optimization)
// Debug mode runs much slower than release mode.

// When you just compile the cpp files. you can see the .obj files generated.
// COMPILE:
// 1. Select the file which you when to compile.
// 2. Right click and hit compile button.