#include<stdio.h>

int main() {

#pragma region while_example
	//int num = 1;  // control variable (counter)

	//while (num <= 5) // while the condition is true
	//{
	//	printf("The number is %d\n", num);
	//	num = num + 1; // Increment operation
	//}

#pragma endregion

#pragma region do_while_example
	/*int counter = 1;
	int num = 1;*/
	/*do {
		printf("%d ", counter);
		counter += 1;
	} while (counter <= 5);*/

	// variation
	/*do {
		printf("%d ", counter);
	} while (++counter <= 10);*/

	//variation ( is this equivalent to the above code?? )
   //while (num++ <= 5) // while the condition is true
   //{
   //	printf("the number is %d\n", num);
   //}
#pragma endregion

#pragma region for_example
	/*for (int counter = 1; counter <= 5; counter++)
	{
		printf("The counter is %d\n", counter);
	}*/

	// Variation
	//int counter = 1;
	//for ( ; counter <=10 ; )
	//{
	//	printf("The counter is %d\n", counter);
	//	counter += 1;
	//}

	// Variation 2
	//int x = 1;
	//int counter;
	//for (counter = x; counter <= 10; counter = counter + 1)
	//{
	//	printf("The counter is %d\n", counter);
	//}
#pragma endregion

#pragma region break_example
	//unsigned int x; // declared here so it can be used after loop
	//// loop 10 times
	//for (x = 1; x <= 10; ++x)
	//{
	//	// if x is 5, terminate loop
	//	if (x == 5) {
	//	// break loop only if x is 5
	//		break;
	//	}
	//	printf("%u ", x);
	//}
	//printf("\nBroke out of loop at x == %u\n", x);
#pragma endregion

#pragma region continue_example
	// loop 10 times
	//for (int x = 1; x <= 10; ++x)
	//{
	//	// if x is 5, continue with next iteration of loop
	//	if (x == 5) {
	//		continue; // skip remaining code in loop body
	//	}
	//	printf("%d ", x);
	//}
	//puts("\nUsed continue to skip printing the value 5");
#pragma endregion

#pragma region nested_loop
	//int counter_for = 0;
	//int counter_while = 0;
	//for (int i = 0; i < 10; i = (i + 1) * 2) {
	//	counter_for++;
	//	int x = 3; 
	//	while (x < (i + 3) * 2) {
	//		puts("\tInner loop");
	//		x++;
	//		counter_while++;
	//	}
	//	puts("Outer loop");
	//}
	//printf("The for loop executed %d times\n", counter_for);
	//printf("The while loop executed %d times\n", counter_while);

#pragma endregion

#pragma region break_nested_loop
	/*for (int i = 0; i < 10; i = (i + 1) * 2) {
		int x = 3;
		while (x < (i + 3) * 2) {
			printf("\tx = %d\n", x);
			if (x == 2) {
				break;
			}
			x++;
		}
		printf("i = %d\n", i);
	}*/
#pragma endregion

#pragma region continue_nested_loop
	/*for (int i = 0; i < 10; i = (i + 1) * 2) {
	int x = 3;
	while (x < (i + 3) * 2) {
		printf("\tx = %d\n", x);
		if (x == 2) {
			continue;
		}
		x++;
		}
	printf("i = %d\n", i);
	}*/
#pragma endregion

#pragma region vars_outside_inside_loop
	//int x = 15;
	//int y = 20;
	//while (x > 5) {
	//	printf("x is %d\n", x);
	//	x--;
	//	int number = 3;
	//	printf("The number is %d\n",number);
	//	number += 2;
	//}
	//puts("We are outside loop now");
	//printf("x is %d\n", x);
	//printf("y is %d\n", y);
	////printf("number is %d\n", number);

#pragma endregion

#pragma region logical_ops
//int x = 3;
//int y = 20;
//while (x > 5 || y > 5) {
//	x--;
//	y--;
//}
//printf("Now x is %d\nNow y is %d\n", x, y);
#pragma endregion

#pragma region many_exps_in_for
//for (int i = 0, num = 5; i < 3 && num > 1; i += 1, num -= 1) {
//	printf("i = %d", i);
//	printf("\tnum = %d\n", num);
//}
#pragma endregion

#pragma region Sentinel_controlled_iteration_example
//int num;
//printf("Enter a number: ");
//scanf("%d", &num);
//while (num != 0) {
//	printf("You entered %d\n", num);
//	printf("Enter a number: ");
//	scanf("%d", &num);
//}
#pragma endregion

/************************************/

#pragma region Ex1
//for (int i = 1; i < 11; i++)
//	printf("%d ", i);
//
//printf("\n");
#pragma endregion

#pragma region Ex2
//int sum = 0;
//int num;
//
//while (sum < 200) {
//	printf("Enter a number: ");
//	scanf("%d", &num);
//	sum += num;
//}
//
//printf("The sum is %d\n", sum);
#pragma endregion

#pragma region Ex3
//int num;
//printf("Enter the number of values to read: ");
//scanf("%d", &num);
//int min = 9999999;
//for (int i = 0; i < num; i++) {
//	int myInput;
//	scanf("%d", &myInput);
//	if (myInput < min) {
//		min = myInput;
//	}
//}
//printf("The minimum number is %d\n", min);
//
//	int n;
//	int x;
//	int counter;
//
//	printf("Enter the numbers:  ");
//	scanf("%d", &counter);
//
//	for (int i = 0; i < counter; i++) {
//		printf("Enter a number: ");
//		scanf(" %d", &n);
//		if (i == 0)
//			x = n;
//		else
//			if (n < x)
//				x = n;
//	}
//
//	printf("The smallest integer is %d", x);
#pragma endregion

#pragma region Ex4
//int num, evenSum = 0, oddSum = 0, rem;
//printf("Enter any number: ");
//scanf("%d", &num);
//while (num>0) // 0 
//{												// 15687 % 10 = 7
//												// 15687 / 10 = 1568
//	rem = num % 10; //rem = 1 % 10 = 1
//	if (rem % 2 == 0) // 2 % 2 == 0
//		evenSum = evenSum + rem; //evenSum = 10 + 2 = 12
//	else
//		oddSum = oddSum + rem; //oddSum = 5 + 1 = 6 
//	num = num / 10; // num = 1 / 10 = 0 
//}
//printf("Sum of Even Digits = %d\n", evenSum);
//printf("Sum of Odd Digits = %d\n", oddSum);
#pragma endregion

#pragma region Ex5
/*int num, count = 1, rem, sum;

while (count <= 500)
{
	num = count;
	sum = 0;

	while (num > 0 )
	{
		rem = num % 10;
		sum = sum + (rem * rem * rem);
		num = num / 10;
	}

	if (count == sum)
	{
		printf("%d is a Armstrong number\n", count);
	}

	count++;
}*/
#pragma endregion

#pragma region Ex6
////shape A
//puts("SHAPE (A)");
//for (int count = 0; count < 10; count++)
//{
//	for (int j = 0; j < count + 1; j++) {
//		printf("*");
//	}
//	puts("");
//}

////shape B
//puts("\nSHAPE (B)");
//for (int count = 11; count >= 0; count--)
//{
//	for (int j = 0; j < count - 1; j++)
//		printf("*");
//	puts("");
//}

////shape C
//puts("\nSHAPE (C)");
//for (int count = 0; count < 10; count++)
//{
//	for (int index = 1; index < count + 1; index++)
//		printf(" ");

//	for (int star = 10; star > count; star--)
//		printf("*");

//	puts("");
//}

////shape D
//puts("\nSHAPE (D)");
//for (int count = 10; count > 0; count--)
//{
//	for (int index = 0; index < count - 1; index++)
//		printf(" ");

//	for (int star = 10; star > count - 1; star--)
//		printf("*");

//	puts("");
//}

#pragma endregion

#pragma region Ex7
	//double sum = 0;
	//int number = 0;
	//int quantity;
	//while (number != -1)
	//{
	//	printf("Enter product number and quantity sold for next product (-1 0 to exit): ");
	//	//display menu
	//	puts("1 -Product 1, $2.98");
	//	puts("2 -Product 2, $4.50"); 
	//	puts("3 -Product 3, $9.98"); 
	//	puts("4 -Product 4, $4.49");
	//	puts("5 -Product 5, $6.87");
	//	scanf("%d %d", &number, &quantity);
	//	switch (number)
	//	{
	//	case 1:
	//		sum += 2.98 * quantity;
	//		break;
	//	case 2:
	//		sum += 4.50 * quantity;
	//		break;
	//	case 3:
	//		sum += 9.98 * quantity;
	//		break;
	//	case 4:
	//		sum += 4.49 * quantity;
	//		break;
	//	case 5:
	//		sum += 6.87 * quantity;
	//		break;
	//	}
	//}
	//printf("Total value is: %f\n", sum);
#pragma endregion

#pragma region Ex8
	//int n1, n2, i, gcd;

	//printf("Enter two integers: ");
	//scanf("%d %d", &n1, &n2);

	//for (i = 1; i <= n1 && i <= n2; ++i)
	//{
	//	// Checks if i is factor of both integers
	//	if (n1%i == 0 && n2%i == 0)
	//		gcd = i;
	//}	

	//printf("G.C.D of %d and %d is %d\n", n1, n2, gcd);
#pragma endregion

#pragma region Ex9
	/*int i, n, t1 = 0, t2 = 1;
	printf("Enter the number of terms: ");
	scanf("%d", &n);
	printf("Fibonacci Series: %d, %d, ", t1, t2);

	for (i = 1; i <= n; ++i) {
		int nextTerm = t1 + t2;
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
	}
	puts("");*/
#pragma endregion

#pragma region Ex10
	/*int n = 0;
	printf("Enter the number of monsters: ");
	scanf("%d", &n);

	int monsterPower = 0;
	int marioPower = 100;

	for (int i = 0; i < n; i++) {
		scanf("%d", &monsterPower);
		marioPower -= monsterPower;
	}
	if (marioPower > 0)
		printf("Alive\n");
	else
		puts("Game Over");*/
#pragma endregion

#pragma region Ex11
		//		/*WRONG*/
		//	int n;
		//	int rem, i = 1;
		//	printf("Enter a decimal number: ");
		//	scanf("%d", &n);
		//	while (n != 0) {
		//		if (n % 2 == 0)
		//			printf("0");
		//		else
		//			printf("1");
		//
		//		n /= 2;
		//	}
		//	puts("");
		//
		//	/*CORRECT*/
		//
		//int n;
		//int rem, i = 1;
		//printf("Enter a decimal number: ");
		//scanf("%d", &n);
		//long long bin = 0;
		//while (n != 0) {
		//	rem = n % 2;
		//	n /= 2;
		//	bin += rem * i;
		//	i *= 10;
		//}
		//printf("%lld\n", bin);
#pragma endregion


	/************************************/

#pragma region TASK1
	//// Initialise variables
	//int accountNumber, oldCreditLimit, newCreditLimit, balance;
	//int count;

	//// While count < 3
	//for (count = 1; count <= 3; count++)
	//{
	//	// Input account number
	//	printf("\nInput account number: ");
	//	scanf("%d", &accountNumber);

	//	// Input credit limit before the recession
	//	printf("Input credit limit before the recession: ");
	//	scanf("%d", &oldCreditLimit);

	//	// Input current balance
	//	printf("Input current balance: ");
	//	scanf("%d", &balance);

	//	// Calculate and print new credit limit
	//	newCreditLimit = oldCreditLimit / 2;
	//	printf("Customer's new credit limit is $%d\n", newCreditLimit);

	//	// Print if customer has exceeded their credit limit
	//	if (balance > newCreditLimit)
	//	{
	//		printf("Customer with account %d has exceeded their credit limit!!\n", accountNumber);
	//	}
	//}

#pragma endregion

#pragma region TASK2
	//printf("%7s %13s %5s %11s\n", "Decimal", "Binary", "Octal", "Hexadecimal");
	//for (int number = 1; number <= 256; ++number) {
	//	int currentDecimal = number;
	//	int remainder;
	//	int factor = 1;
	//	long long binaryNumber = 0;
	//	while (currentDecimal != 0) {
	//		remainder = currentDecimal % 2;
	//		currentDecimal /= 2;
	//		binaryNumber += remainder * factor;
	//		factor *= 10;
	//	}
	//	printf(
	//		"%7u %13llu %5o %11X\n",
	//		number,
	//		binaryNumber,
	//		number,
	//		number);
	//}
#pragma endregion

#pragma region TASK3
	//int i, j, k;

	//int max = 4;

	//for (i = 0; i <= max; i++)
	//{
	//	for (j = 0; j<(max - i); j++)
	//		printf(" ");
	//	for (k = 0; k<(1 + (i * 2)); k++)
	//		printf("*");
	//	puts("");
	//}

	//for (i = max - 1; i >= 0; i--)
	//{
	//	for (j = 0; j<(max - i); j++)
	//		printf(" ");
	//	for (k = 0; k<(1 + (i * 2)); k++)
	//		printf("*");
	//	puts("");
	//}
#pragma endregion

#pragma region TASK4
	//int hoursWorked = 0;
	//int WEEKLY_HOURS = 40;
	//float OVERPAY_RATE = 1.5;

	//printf("%s", "Enter # or hours worked (-1 to end): ");
	//scanf("%d", &hoursWorked);

	//while (hoursWorked != -1) {
	//	
	//	float hourlyRate;
	//	printf("%s", "Enter hourly rate of the worker ($00.00): ");
	//	scanf("%f", &hourlyRate);


	//	int overpayTime = hoursWorked - WEEKLY_HOURS;
	//	if (overpayTime < 0) {
	//		overpayTime = 0;
	//	}

	//	int straightTime = hoursWorked - overpayTime;

	//	float salary = (straightTime * hourlyRate) + (overpayTime * (hourlyRate * OVERPAY_RATE));

	//	printf("Salary is $%.2f\n\n", salary);

	//	printf("%s", "Enter # or hours worked (-1 to end): ");
	//	scanf("%d", &hoursWorked);
	//}

#pragma endregion

#pragma region TASK5
//printf("N \t 10*N \t 100*N \t 1000*N \n \n");
//for (int i = 1; i <= 10; i++) {
//	printf("%d \t %d \t %d \t %d \n", i, 10 * i, 100 * i, 1000 * i);
//}
#pragma endregion

#pragma region TASK6
//for (int i = 3; i < 1000; i++)
//	printf("%d, ", i);
//puts("");
//
//for (int i = 20; i > -1000; i-=6)
//	printf("%d, ", i);
//puts("");
//
//for (int i = 3; i < 234375; i*=5)
//	printf("%d, ", i);
//puts("");
//
//for (int i = 1; i < 8192; i*=2)
//	printf("%d, ", i);
//puts("");
#pragma endregion

#pragma region TASK7
	//int n;
	//printf("Enter n: ");
	//scanf("%d", &n);
	//long evenSum = 0;
	//long oddProduct = 1;
	//for (int i = 1; i <= n; i++) {
	//	if (i % 2 == 0)
	//		evenSum += i;
	//	else
	//		oddProduct *= i;
	//}
	//printf("The sum of evens = %d and the product of odds = %d\n", evenSum, oddProduct);
#pragma endregion

#pragma region TASK8
	//for (int number = 1; number <= 5; ++number) {
	//	int currentNum = number;
	//	long long factorial = 1;
	//
	//	while (currentNum > 0) {
	//		factorial *= currentNum;
	//		--currentNum;
	//	}
	//	printf("%-7d%llu\n", number, factorial); //search online what is this : "%-7d%llu"
	//}
#pragma endregion

}
