#include <stdio.h>

// 1st method: using if...else and for

int factorial()
{
	int n, i;
	unsigned long long fact = 1;	// the factorial of a number may be very large, the type of factorial variable is declared as unsigned long long
	printf("Enter an integer: ");
	scanf_s("%d", &n);

	// shows error if the user enters a negative integer
	if (n < 0)
	{
		printf("Error! Factorial of a negative number doesn't exist.");
	}
	//else if (n == 0)
	//{
	//	fact = 1;
	//	printf("Factorial of %d = %llu", n, fact);
	//}
	else
	{
		for (i = 1; i <= n; ++i)
		{
			fact *= i;
		}
		printf("Factorial of %d = %llu", n, fact);
	}
	return 0;
}


// 2nd method: using while

