#include<iostream>

void MyLogInAnotherCPPFile();
int Plus(int a, int b);
int Minus(int a, int b);

int main()
{
	MyLogInAnotherCPPFile();
	std::cout << Plus(1, 2) << std::endl;
	std::cout << Minus(5, 2) << std::endl;

	return 0;
// 4. 
// Look at here. "#include" is just copying and pasting.
#include "CurlyBracket.h"

// 1.
// Every single .cpp file will be compiled into a .obj file.
// You can call a .cpp file as a translation unit essentially.

// 2.
// C++ does not care about files. files are not something that exist in C++.
// File is just a way to feed the compiler with source code.S
// .cpp extension is just telling hw the compiler should treat the file.
// Extension is just a convension. Files has no meaning.

// 3.
// Compile each of the cpp files and see the resualt.
// Directory: 
// root\out\build\x64-Debug\#2 Compiler\Main.obj
// root\out\build\x64-Debug\#2 Compiler\Mylog.obj
// root\out\build\x64-Debug\#2 Compiler\Math.obj
// or look into this directory:
// root\out\build\x64-Debug\#2 Compiler\CMakeFiles\002_Compiler.dir

// 4.
// Preprocessor:
// Most common preprocessor statement: "#include".
// Before run a program, preprocessor will open and read 
// the "#include" files and copy and paste into the current cpp file.
// To see the preprocessed file, 
// Project -> ProjectProperties -> C/C++ -> Preprocessor -> Preprocess to a File -> Yes.
// You can see the .i file.

// 5.
// There are more preprocessor statement such as "#define" and "#if"-"#endif".
// Take a look at Math.cpp file.

// 6.
// .obj file is a binary file(Machine Code).
// you can read this file through change the settings following below.
// Project -> ProjectProperties -> C/C++ -> Output Files -> Assembler Output -> Assembly-Only Listing (/FA)
// and compile it. It creates .asm file which is readable.