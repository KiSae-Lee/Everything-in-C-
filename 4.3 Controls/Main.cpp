#include<iostream>

int main()
{
	bool ComparisonResult_1 = true;
	bool ComparisonResult_2 = false;

	if(ComparisonResult_1)
	{
		// Execute when ComparisonResult_1 is true.
	}
	else if(ComparisonResult_2)
	{
		// Execute when ComparisonResult_1 is false and
		// ComparisonResult_2 is true.
	}
	else
	{
		// Execute when ComparisonResult_1 is false and
		// ComparisonResult_2 is false.
	}

	int x = 3;
	bool IsSmaller = x < 1;
	bool IsBigger = x > 1;
	bool IsEqual = x == 1;

	// init-expression, cond-expression, loop-expression.
	// init-expression: Before any other element of the for statement,
	// init-expression is executed only once. Control then passes
	// to cond-expression.
	//
	// cond-expression: Before execution of each iteration of statement,
	// including the first iteration. statement is executed only if
	// cond-expression evaluates to true (nonzero).
	//
	// loop-expression: At the end of each iteration of statement. After
	// loop-expression is executed, cond-expression is evaluated.

	for(int i = 0; i < 3; i++)
	{
		// increasing style.
		// Execute body until i == 3.
	}

	for(int i = 3; i == 0; i--)
	{
		// decreasing style.
		// Execute body until i == 0.
	}

	while(false)
	{
		// Do something.
	}

	do
	{
		// Do this first.
	} while (false); // If Condition is true. Do again.

	int myCase = 0;

	switch (myCase)
	{
	case 0:
		std::cout << "myCase is equal to 0." << std::endl;
		break;
	case 1:
		std::cout << "myCase is equal to 0." << std::endl;
		break;
	default:
		std::cout << "Unknown..." << std::endl;
		break;
	}

	return 0;
}