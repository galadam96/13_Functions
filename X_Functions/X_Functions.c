//Date: 2023.08.17
//Purpose: Creating functions for: addition, greatest common divider, absolute number 

#include <stdio.h>

//---function declarations

int add(int x, int y);
int gcd(int x, int y);
float absolute(float x);
float sqroot(float x);

//-- main function

int main() {
	int result = add(5, 3);
	printf("Addition of 5 + 3 is: %i\n", result);
	int result2 = gcd(83, 240);
	printf("GCD of 83 and 240 is: %i\n", result2);

	printf("Absolute number of -10.543 is: %2f\n", absolute(-10.543));
	float result4 = sqroot(-10);
	printf("Sqr root is: %2f\n", result4);
	return 0;
}

//-- Function definitions
int add(int x, int y) {
	//function for adding 2 numbers
	int result_local = x + y;
	return result_local;
}

int gcd(int x, int y) {
	//function for getting greatest common divisor 
	int greater;
	int highest;
	//comparing which is greater, x or y and store it
	if (x > y) {
		greater = x;
	}
	else if (y > x) {
		greater = y;
	}

	//looping from 1 to greater to find biggest divident and store it
	for (int i = 1; i <= greater; i++)
	{
		if (x % i == 0 && y % i == 0) {
			highest = i;
		}
	}
	return highest;
}

float absolute(float x) {
	//function for getting the absolute value of a floating number
	if (x < 0) {
		x = -x;
	}
	return x;
}

float sqroot(float x) {
	//function for getting the square root of a number.
	// !! HELPER FUNCTION: absolute();
	float result;
	if (x < 0) {
		result = -1.0;
		printf("Can't be a negative number. Returning -1.0\n");
	}
	else {
		result = absolute(x);
		//computing sqrt
		//result = 
	}

	return result;
}