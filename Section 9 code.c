#include<stdio.h>

#pragma region prototypes
int sum_loop(int n);
int sum_recr(int n);
long factorial_loop(int n);
long factorial_recr(int n);
unsigned long long int factorial(unsigned int number); // for large numbers
int fib_loop(int n);
int fib_recr(int n);
long power_of_two(int n);
long x_power_n(int x, int n);
void isPalindrom(char txt[], int start, int end);
int gcd(int n1, int n2);
#pragma endregion



int main() {
	
	int n[] = { 1,2,3,4,5 };
	int x[5];

	int i;
	for (i = 0; i < 5; i++) {
		x[i] = n[i];
	}
	
	for (i = 0; i < 5; i++) {
		printf("%d\n", x[i]);
	}

}



#pragma region sum_loop

int sum_loop(int n) {
	int sum = 0;
	while (n > 0) {
		sum += n;
		n--;
	}
	return sum;
}
#pragma endregion

#pragma region sum_recursion

int sum_recr(int n) {

	if (n == 1) { // base case
		return n;
	}
	else {
		return n + sum_recr(n - 1);
	}
}

#pragma endregion

#pragma region factorial_loop
long factorial_loop(int n)
{
	long res = 1;
	while (n > 0) {
		res = res * n;
		n--;
	}
	return res;
}
#pragma endregion

#pragma region factorial_recursion
long factorial_recr(int n)
{
	if (n == 0) { //base case ... the condition can be (number <= 1)
		return 1;
	}
	else {
		// what if we write n * factorial_recr(n);
		long res = n * factorial_recr(n - 1);
		return res;
	}
}
#pragma endregion

#pragma region factorial_recursion_large
unsigned long long int factorial(unsigned int n)
{
	// base case
	if (n == 0) { //base case ... the condition can be (number <= 1)
		return 1;
	}
	else { // recursive step
		return (n * factorial(n - 1));
	}
}

#pragma endregion

#pragma region fibanocci_loop
int fib_loop(int n)
{
	int fib0 = 0;
	int fib1 = 1;
	int next;
	int i;
	for (i = 2; i <= n; i++) {
		next = fib0 + fib1;
		fib0 = fib1;
		fib1 = next;
	}
	return next;
}
#pragma endregion

#pragma region fibanocci_recursion
int fib_recr(int n)
{
	if (n == 0) { //base case 1
		return 0;
	}
	else if (n == 1) { //base case 2
		return 1;
	}
	else {
		return fib_recr(n - 1) + fib_recr(n - 2);
	}
}
#pragma endregion

#pragma region power_of_two_EX3
long power_of_two(int n)
{
	if (n == 1) {
		return 2;
	}
	else {
		return 2 * power_of_two(n - 1);
	}
}
#pragma endregion

#pragma region x_power_of_n_EX4
long x_power_n(int x, int n)
{
	if (n == 1) {
		return x;
	}
	else {
		return x * x_power_n(x, n - 1);
	}
}
#pragma endregion

#pragma region TASK1_is_palindrom
void isPalindrom(char txt[], int start, int end)
{
	char c1 = txt[start];
	char c2 = txt[end];
	if (start <= end) {
		printf("The word is palindrom\n");
		return;
	}
	else if (c1 != c2) {
		printf("The word is not palindrom\n");
		return;
	}
	else {
		isPalindrom(txt, start + 1, end - 1);
	}
}
#pragma endregion

#pragma region TASK2_GCD
int gcd(int n1, int n2)
{
	if (n1 % n2 == 0) {
		return n2;
	}
	else {
		return gcd(n2, n1 % n2);
	}
}
#pragma endregion
