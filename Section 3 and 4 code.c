#include <stdio.h>

int main() 
{
#pragma region Example 01
	/*short a;
	int b;
	long c;
	double d;

	printf("size of short = %d bytes\n", sizeof(a));
	printf("size of int = %d bytes\n", sizeof(b));
	printf("size of long = %d bytes\n", sizeof(c));
	printf("size of float = %d bytes\n", sizeof(d));*/

#pragma endregion

#pragma region Example 02
	/*int a = 21, b = 10;
	int c;

	c = a + b;
	printf("a + b is %d\n", c);

	printf("a - b is %d\n", a - b);

	c = a * b;
	printf("a * b is %d\n", c);

	c = a / b;
	printf("a / b is %d\n", c);

	printf("a %% b is %d\n", a % b);
	a = a++;
	b = b--;
	printf("The new value of a: %d\n", a);
	printf("The new value of b: %d\n", b);*/
#pragma endregion

#pragma region Example 03
	/*float x = 22.12; float y = 14.61;

	float result = (x + y) - (x - y);

	printf("The result is: %f\n", result);*/

#pragma endregion

#pragma region Example 04
	/*int x = 5;
	int y = x >> 3;

	int a = 8;
	int b = a << 3;

	printf("Right shift of x is: %d\n", y);
	printf("Left shift of a is: %d\n", b);*/

#pragma endregion

#pragma region Example 05
	/*int x = 0; //initialize x to 0

	 // print the value of x
	printf("x initial value = %d\n", x);

	// prompte the user to enter a value
	printf("Enter a value for x:");

	// store user's input at the address of the variable x
	scanf("%d: ", &x);

	// print the new value of x
	printf("Now x is: %d\n ", x);*/

#pragma endregion

	/*int x = 1; int y = 0;
	printf("%d\n", x&y);
	printf("%d\n", x|y);
	printf("%d\n", ~x);*/

#pragma region Exercise 01
	//printf("This\t is my first \"C\" program\n");
	//printf("\\**/\n");

#pragma endregion

#pragma region Exercise 02
	/*char a;
	long double b;
	float c;

	printf("size of char = %d bytes\n", sizeof(a));
	printf("size of long double = %d bytes\n", sizeof(b));
	printf("size of float = %d bytes\n", sizeof(c));*/

#pragma endregion

#pragma region Exercise 03
	/*float x = 22.12; float y = 14.61;

	float result1 = (x + y) / (x - y);

	float result2 = (x + y) * (x - y);

	printf("(x + y) / (x - y) is: %f\n", result1);

	printf("(x + y) * (x - y) is: %f\n", result2);*/

#pragma endregion

#pragma region Exercise 04
	//int x = 1; // Try 15, 0
	//int y = 0; // Try 3, 8

	//printf("1 AND 0 = %d\n", x&y);
	//printf("1 OR 0 = %d\n", x | y);
	//printf("NOT 1 = %d\n", ~x); // Strange result !
	//printf("1 XOR 0 = %d\n", x^y);

#pragma endregion

#pragma region Exercise 05
	/*int x = 0; //initialize x to 0
	int y = 0; //initialize y to 0

	printf("Enter a value for x: "); // tell the user to enter a value for x
	scanf("%d", &x); // get value of x from user
	printf("Enter a value for y: "); // tell the user to enter a value for y
	scanf("%d", &y); // get value of y from user

	//				 /*Begin swapping*/
	//int z = x;
	//x = y;
	//y = z;
	//// print the results
	//printf("Now x is: %d, and y is: %d \n", x, y);*/

#pragma endregion

#pragma region Exercise 06
	//int x = 0; //initialize x to 0
	//int y = 0; //initialize y to 0

	//printf("Enter a value for x: "); // tell the user to enter a value for x
	//scanf("%d", &x); // get value of x from user
	//printf("Enter a value for y: "); // tell the user to enter a value for y
	//scanf("%d", &y); // get value of y from user

	//				 /*Begin swapping. You can use multiplication and division*/
	//x = x + y;
	//y = x - y;
	//x = x - y;
	//// print the results
	//printf("Now x is: %d, and y is: %d \n", x, y);

#pragma endregion

#pragma region Exercise 07
	//	// define x, y
	//int x = 0;
	//int y = 0;
	//
	//// read x, y
	//printf("Enter a value for x: ");
	//scanf("%d", &x);
	//printf("Enter a value for y: ");
	//scanf("%d", &y);
	//
	////calculate quotint
	//int quot = x / y;
	////calculate reminder
	//int remi = x % y;
	//
	////output quotient, reminder
	//printf("The quotient = %d\n", quot);
	//printf("The reminder = %d\n", remi);


#pragma endregion

#pragma region Exercise08
	/*/int days = 0;

	printf("Enter number of days: ");

	scanf("%d", &days);

	int years = days / 365;
	days = days % 365;

	int months = days / 30;
	days = days % 30;

	printf("This animal lived for: %d years, \
	/%d months, %d days\n", years, months, days);*/

#pragma endregion

#pragma region Exercise09
	//int x = 0;

	//printf("Enter the location of the friend: ");
	//scanf("%d", &x);

	//int steps = (x + 4) / 5;

	//printf("The minimum number of steps = %d\n", steps);

#pragma endregion

#pragma region Exercise 10
	//int x = 0;
	//
	//printf("Enter the location of the friend: ");
	//scanf("%d", &x);
	//
	//int steps = (x + 4) / 5;
	//
	//printf("The minimum number of steps = %d\n", steps);

#pragma endregion

#pragma region Exercise 11
	/*int a = 0;
	int b = 0; 

	printf("Enter first value: ");
	scanf("%d", &a);
	printf("Enter second value: ");
	scanf("%d", &b);
	
	if(a>=b)
	{
		puts("Yes");
	}
	else
	{
		puts("No");
	}*/
#pragma endregion

#pragma region Exercise 12
	/*char ch;
	printf("enter a character: ");
	scanf("%c", &ch);

	if (ch >= 65 && ch <= 90)
		printf("character is a capital letter\n");
	else if (ch >= 97 && ch <= 122)
		printf("character is a small letter\n");
	else if (ch >= 48 && ch <= 57)
		printf("character is a digit\n");
	else if ((ch>0 && ch <= 47) || (ch >= 58 && ch <= 64) ||
		(ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
		printf("character is a special symbol\n");*/

#pragma endregion

#pragma region Exercise 13
	//int grade;
	//printf("Enter student's grade: ");
	//scanf("%d", &grade);

	//if (grade >= 90 && grade <= 100)
	//	puts("A");
	//else if (grade >= 75 && grade < 90)
	//	puts("B");
	//else if (grade >= 60 && grade < 75)
	//	puts("C");
	//else if (grade >= 50 && grade < 60)
	//	printf("D\n");
	//else
	//	printf("F\n");
#pragma endregion

#pragma region Exercise 14
	/*float cost_price, selling_price;

	printf("Enter the cost price of an item: ");
	scanf("%f", &cost_price);

	printf("Enter the selling price of an item: ");
	scanf("%f", &selling_price);

	if (selling_price > cost_price)  {
		float profit = selling_price - cost_price;
		printf("We earn %.2f profit by selling item.\n", profit);
	}
	else if (selling_price < cost_price)   {
		float loss = cost_price - selling_price;
		printf("We incurred %.2f loss on selling item.\n", loss);
	}
	else    {
		printf("We don't get any loss and profit on selling item\n");
	}*/

#pragma endregion

int x = 5;
x = x << 3;
printf("%d\n", x);
return 0;
}