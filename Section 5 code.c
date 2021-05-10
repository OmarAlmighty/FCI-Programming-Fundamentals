#include<stdio.h>

int main()
{
#pragma region switch
	/*int num;
	scanf("%d", &num);
	switch (num) {
	case 7:
		printf("Value is 7\n");
		
	case 8:
		printf("Value is 8\n");
		
	case 9:
		printf("Value is 9\n");
		break;
	default:
		printf("Out of range\n");
		break;
	}*/
#pragma endregion
	int a, b;
	scanf("%d%d", &a, &b);

#pragma region Debug
	/*int a = 15;
	int b = 4;
	
	int sum = a + b;
	int sub = a - b;
	float avg = sum / 2;
	int mult = a * b;

	int shift_right = a >> 1;
	int shift_left = b << 2;

	int and_op = a & b;
	int or_op = a | b;
	int not_op = ~a;
	int xor_op = a^b;

	if (and_op >= or_op) {
		puts("The result of and operation is greater than or equal to or operation");
		printf("a & b = %d", and_op);
	}
	else if (and_op >= xor_op && and_op >= not_op) {
		puts("The result of and operation is greater than or equal to xor and not operations");
		printf("a ^ b = %d", xor_op);
	}

	if (5 * 5 > 10 * 10 || 5*5 <= 3*2) {
		puts("Hello To C");
		printf("%d\n", 10 * 10);
	}
	else if (6 / 6 == 8 / 8) {
		puts("Yes!");
		printf("%f\n", 6 / 8);
	}

	int x = 5;
	int y = 7;
	printf("%d\n", x++);
	printf("%d\n", ++x);
	y++;
	printf("%d\n", y);
	++y;
	printf("%d\n", y);

	double num1;
	double num2;
	scanf("%lf", &num1);
	scanf("%lf", &num2);
	double max = num1 > num2 ? num1 : num2;
	printf("The max is %lf\n", max);
*/
#pragma endregion

#pragma region Arithmetic_Largest_Value_and_Smallest_Value
	/*int a = 0;
	int b = 0;
	int c = 0;

	printf("%s", "Enter three different integers: ");
	scanf("%d%d%d", &a, &b, &c);

	int sum = a + b + c;
	int average = sum / 3;
	int product = a * b * c;

	int smallest = a;
	if (b < smallest) {
		smallest = b;
	}
	if (c < smallest) {
		smallest = c;
	}

	int largets = a;
	if (b > largets) {
		largets = b;
	}
	if (c > largets) {
		largets = c;
	}

	printf(
		"Sum is: %d\nAverage is: %d\nProduct is: %d\nSmallest number is: %d\nLargest number is: %d\n",
		sum,
		average,
		product,
		smallest,
		largets);*/
#pragma endregion

#pragma region Shapes_with_Asterisks

		//puts("*********          ***              *              *     ");
		//puts("*       *        *     *           ***            * *    ");
		//puts("*       *       *       *         *****          *   *   ");
		//puts("*       *       *       *           *           *     *  ");
		//puts("*       *       *       *           *          *       * ");
		//puts("*       *       *       *           *           *     *  ");
		//puts("*       *       *       *           *            *   *   ");
		//puts("*       *        *     *            *             * *    ");
		//puts("*********          ***              *              *     ");

#pragma endregion

#pragma region Vowels_or_Constants
	/*char c;
	int lowercase_vowel, uppercase_vowel;
	printf("Enter an alphabet: ");
	scanf("%c", &c);

	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		printf("%c is a lower case vowel.", c);
	else if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
		printf("%c is a upper case vowel.", c);
	else
		printf("%c is a consonant.", c);*/
#pragma endregion

#pragma region non_degrenant
		//int a, b, c;
		//scanf("%d %d %d", &a, &b, &c);

		//switch (a + b >= c && a + c >= b && b + c >= a)
		//{
		//case 1:
		//	puts("YES!");
		//	break;
		//default:
		//	puts("NO!");
		//	break;
		//}
		///*if (a + b >= c && a + c >= b && b + c >= a)
		//	puts("YES!");
		//else
		//	puts("NO!");*/
#pragma endregion

#pragma region Palindrome
	//int num;
	//printf("Enter a 5-digit number: ");
	//scanf("%d", &num);
	//int d1 = num % 10;
	//num /= 10;

	//int d2 = num % 10;
	//num /= 10;

	//int d3 = num % 10;
	//num /= 10;

	//int d4 = num % 10;
	//num /= 10;

	//int d5 = num % 10;

	//if (d1 == d5 && d2 == d4)
	//	puts("Palindrome");
	//else
	//	puts("Not Palindrom");

#pragma endregion

#pragma region Summation
	/*int num1, num2;
	printf("Enter two numbers: ");
	scanf("%d %d", &num1, &num2);
	int sum = ((num1 + num2) / 2) * (num2 - num1 + 1);
	printf("The summation is %d\n", sum);*/
#pragma endregion

#pragma region Integer_value_of_character
	/*printf("Integer value of character 'A' is: %d\n", 'A');
	printf("Integer value of character 'B' is: %d\n", 'B');
	printf("Integer value of character 'C' is: %d\n", 'C');
	printf("Integer value of character 'a' is: %d\n", 'a');
	printf("Integer value of character 'b' is: %d\n", 'b');
	printf("Integer value of character 'c' is: %d\n", 'c');
	printf("Integer value of character '0' is: %d\n", '0');
	printf("Integer value of character '1' is: %d\n", '1');
	printf("Integer value of character '2' is: %d\n", '2');
	printf("Integer value of character '$' is: %d\n", '$');
	printf("Integer value of character '*' is: %d\n", '*');
	printf("Integer value of character '+' is: %d\n", '+');
	printf("Integer value of character '/' is: %d\n", '/');
	printf("Integer value of blank character is: %d\n", ' ');*/

#pragma endregion

#pragma region car_pool_savings_calculator
	////  define variables
	//float kmPerDay, costOfGasoline, kmPerLitre, parkingFees, tolls;
	//float totalCost;

	////  prompt user to enter necessary information
	//printf("Please Enter The Following Values\n");
	//printf("\nTotal kilometers driven per day:");
	////  read the value
	//scanf("%f", &kmPerDay);

	//printf("\nCost per litre of gasoline:");
	//scanf("%f", &costOfGasoline);

	//printf("\nAverage kilometers per litre:");
	//scanf("%f", &kmPerLitre);

	//printf("\nParking fees per day:");
	//scanf("%f", &parkingFees);

	//printf("\nTolls per day:");
	//scanf("%f", &tolls);

	////  calculate the total cost per day
	//totalCost = ((kmPerDay / kmPerLitre)*costOfGasoline) + parkingFees + tolls;

	////  prompt user the total cost per day
	//printf("Your total cost per day of driving to work is %f TL.\n", totalCost);
#pragma endregion

/*******************************/
/*************DONE**************/
/*******************************/

#pragma region Separating_Digits_in_an_Integer
	//int number = 0;

	//printf("%s", "Enter 5 digit integer number: ");
	//scanf("%d", &number);

	//int firstDigit = number / 10000 % 10;
	//int secondDigit = number / 1000 % 10;
	//int thirdDigit = number / 100 % 10;
	//int fourthDigit = number / 10 % 10;
	//int fifthDigit = number % 10;

	//printf("%d\t%d\t%d\t%d\t%d\n", firstDigit, secondDigit,
	//	thirdDigit, fourthDigit, fifthDigit);

#pragma endregion

#pragma region table_of_squares_and_cubes
	//printf("%s", "number\tsquare\tcube\n");
	//printf("%d\t%d\t%d\n", 0, 0 * 0, 0 * 0 * 0);
	//printf("%d\t%d\t%d\n", 1, 1 * 1, 1 * 1 * 1);
	//printf("%d\t%d\t%d\n", 2, 2 * 2, 2 * 2 * 2);
	//printf("%d\t%d\t%d\n", 3, 3 * 3, 3 * 3 * 3);
	//printf("%d\t%d\t%d\n", 4, 4 * 4, 4 * 4 * 4);
	//printf("%d\t%d\t%d\n", 5, 5 * 5,5 * 5 * 5);
	//printf("%d\t%d\t%d\n", 6, 6 * 6, 6 * 6 * 6);
	//printf("%d\t%d\t%d\n", 7, 7 * 7, 7 * 7 * 7);
	//printf("%d\t%d\t%d\n", 8, 8 * 8, 8 * 8 * 8);
	//printf("%d\t%d\t%d\n", 9, 9 * 9, 9 * 9 * 9);
	//printf("%d\t%d\t%d\n", 10, 10 * 10, 10 * 10 * 10);
#pragma endregion

#pragma region final_velocity
	//int u = 0;
	//int a = 0;
	//int t = 0;

	//printf("%s", "Enter initial velocity: ");
	//scanf("%d", &u);

	//printf("%s", "Enter initial acceleration: ");
	//scanf("%d", &a);

	//printf("%s", "Enter elapsed time: ");
	//scanf("%d", &t);

	//int v = u + (a * t);
	//int s = (u * t) + (a * (t * t) * 0.5);

	//printf("Final velocity is: %d\nDistance traversed is: %d\n", v, s);

#pragma endregion

#pragma region bmi_calculator

	//double weight = 0.0;

	//printf("Enter your weight in kilograms: ");
	//scanf("%lf", &weight);

	//double height = 0.0;

	//printf("Enter your height in meters: ");
	//scanf("%lf", &height);

	//double bmi = weight / (height * height);
	//printf("\nYour BMI is: %.2lf\n", bmi);
	//puts(
	//	"BMI VALUES\n"
	//	"Underweight: less than 18.5\n"
	//	"Normal:      between 18.5 and 24.9\n"
	//	"Overweight:  between 25 and 29.9\n"
	//	"Obese:       30 or greater\n");

	//if (bmi < 18.5)
	//	puts("You are underwieght");
	//else if (bmi >= 18.5 && bmi <= 24.9)
	//	puts("You areNormal");
	//else if (bmi >= 25 && bmi <= 29.9)
	//	puts("You areOverweight");
	//else
	//	puts("You areObese");
#pragma endregion

#pragma region Initials

	//puts("      o      ");
	//puts("  o        o ");
	//puts(" o          o ");
	//puts("o            o");
	//puts(" o          o ");
	//puts("  o        o ");
	//puts("      o      ");

	//puts("A");
	//puts("    A");
	//puts("        A");
	//puts("      A     A");
	//puts("      A         A");
	//puts("      A            A");
	//puts("      A         A");
	//puts("      A      A");
	//puts("        A");
	//puts("    A");
	//puts("A");

	//puts("A");
	//puts("    A");
	//puts("        A");
	//puts("      A     A");
	//puts("      A         A");
	//puts("      A            A");
	//puts("      A         A");
	//puts("      A      A");
	//puts("        A");
	//puts("    A");
	//puts("A");

#pragma endregion

#pragma region Checkerboard_Pattern_of_Asterisks
	//printf("%s", " * * * * * * * *  \n");
	//printf("%s", "  * * * * * * * * \n");
	//printf("%s", " * * * * * * * *  \n");
	//printf("%s", "  * * * * * * * * \n");
	//printf("%s", " * * * * * * * *  \n");
	//printf("%s", "  * * * * * * * * \n");
	//printf("%s", " * * * * * * * *  \n");
	//printf("%s", "  * * * * * * * * \n");

	//printf("%s", "\n\n\n");

	//printf("%s",
	//	" * * * * * * * *  \n"
	//	"  * * * * * * * * \n"
	//	" * * * * * * * *  \n"
	//	"  * * * * * * * * \n"
	//	" * * * * * * * *  \n"
	//	"  * * * * * * * * \n"
	//	" * * * * * * * *  \n"
	//	"  * * * * * * * * \n");

#pragma endregion
}