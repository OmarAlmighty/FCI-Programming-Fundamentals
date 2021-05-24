#include<stdio.h>
#define SIZE 100
#define ARRAY_SIZE 10
int main() {
	int num[5];
	int i;
	for (i = 0; i < 5; i++) {
		printf("Enter the number (%d): ", i);
		scanf("%d", &num[i]);
	}
#pragma region EXAMPLE1_Print_array_values
	//int arr[5] = { 5, 10, 15, -3, 4};

	//for (int i = 0; i < 5; i++) {
	//	printf("%d  ", arr[i]);
	//}
	//puts("");
#pragma endregion

#pragma region EXAMPLE2_Find_Max
	//int arr[10];
	//for (int index = 0; index < 10; index++) {
	//	printf("Enter a value for index %d: ", index);
	//	int n;
	//	scanf("%d", &n);
	//	arr[index] = n;
	//}
	//int max = arr[0];
	//for (int index = 1; index < 10; index++) {
	//	if (arr[index] > max)
	//		max = arr[index];
	//}
	//printf("The maximum value is %d\n", max);
#pragma endregion

#pragma region EXAMPLE3_string_chars
	//char str[5] = "abcd";
	//printf("The individual characters are:\n");
	//for (int i = 0; i < 5; i++) {
	//	printf("%s\n",str[i]); //what is wrong here
	//}
#pragma endregion

#pragma region Example4_Welcome_your_name
	//char name[80];
	//printf("Enter your name: ");
	//scanf("%s", name); //gets(name);
	//printf("Welcome %s\n", name);
#pragma endregion

#pragma region EXAMPLE5_count_chars
	/*char name[] = "Omar Atef";
	int counter = 0;
	while (name[counter] != '\0')
		counter++;
	printf("The number of characters is: %d\n", counter);*/
#pragma endregion

#pragma region EXAMPLE6_2d_array
	//int table[3][4] = {
	//	{1,2,3,4},
	//	{5,6,7,8},
	//	{9,10,11,12}
	//};
	///*print values*/
	//for (int row = 0; row < 3; row++) {
	//	for (int column = 0; column < 4; column++) {
	//		printf("%d ", table[row][column]);
	//	}
	//	printf("\n");
	//}
#pragma endregion

#pragma region EXAMPLE_3D_array
	//int cube[3][2][4] = {
	//	{
	//		{1,2,3,4}, {5,6,7,8}
	//	},
	//	{
	//		{9,10,11,12}, {13,14,15,16}
	//	},
	//	{
	//		{17,18,19,20}, {21,22,23,24}
	//	}
	//};

	////print 11
	//printf("%d\n", cube[1][0][2]);
	//// print 19, 15, 24??

	///*print full matrix*/
	//for (int row = 0; row < 3; row++) {
	//	printf("We are at row %d\n", row);
	//	for (int layer = 0; layer < 2; layer++) {
	//		printf("\tWe are at layer %d\n", layer);
	//		for (int col = 0; col < 4; col++) {
	//			printf("\t\tWe are at column %d\n", col);
	//			printf("\t\t\tThe value is %d\n", cube[row][layer][col]);
	//		}
	//	}
	//}
#pragma endregion

#pragma region EX1
	/*int arr[] = {1,2,3,4,5,6,7,8,9};

	for (int i = 8; i >= 0; i--) {
		printf("%d  ",arr[i]);
	}
	puts("");*/
#pragma endregion

#pragma region EX2
	//int size=0;
	//printf("Enter the size of the array: ");
	//scanf("%d", &size);

	//int arr[size]; //is not supported in MS c++ compiler

	/**/
	/*int size;
	printf("Enter the size of the array: ");
	scanf("%d", &size);
	double *arr = malloc(size * sizeof(*arr));

	for (int i = 0; i < size; i++) {
		printf("Enter number[%d]: ", i);
		scanf("%lf", &arr[i]);
		puts("");
	}
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	printf("Average is: %0.2lf\n", sum / size);*/
#pragma endregion

#pragma region EX3
	//int size;
	//printf("Enter the size of the array: ");
	//scanf("%d", &size);
	//int *arr = malloc(size * sizeof(*arr));

	//for (int i = 0; i < size; i++) {
	//	printf("Enter number[%d]: ", i);
	//	scanf("%d", &arr[i]);
	//	puts("");
	//}
	//int min = arr[0];
	//for (int i = 1; i < size; i++) {
	//	if (arr[i] < min)
	//		min = arr[i];
	//}
	//printf("The minimum value is %d\n",min);
#pragma endregion

#pragma region EX4
	//char str[SIZE];
	//int vowels = 0;
	//int consonants = 0;
	//gets(str); // What if we use scanf("%s", str)
	//for (int i = 0; i < SIZE; i++) {
	//	if (str[i] == '\0')
	//		break;

	//	else if (str[i] == ' ')
	//		continue;
	//	else if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
	//		str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
	//		str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
	//		str[i] == 'U')
	//		vowels++;
	//	else
	//		consonants++;
	//}
	//printf("The number of vowels is: %d\n", vowels);
	//printf("The number of consonants is: %d\n", consonants);
#pragma endregion

#pragma region Task1
	/*int num;
	printf("Enter the number of student: ");
	scanf("%d", &num);
	int *students = malloc(num * sizeof(*students));

	printf("Enter %d scores: ", num);

	for (int i = 0; i < num; i++) {
	scanf("%d", &students[i]);
	}
	int best = students[0];
	for (int i = 1; i < num; i++) {
		if (best < students[i])
			best = students[i];
	}

	for (int i = 0; i < num; i++) {
		int score = students[i];
		if (score >= best - 10)
			printf("Student %d score is and grade is A\n", i);
		else if (score >= best - 20)
			printf("Student %d score is and grade is B\n", i);
		else if (score >= best - 30)
			printf("Student %d score is and grade is C\n", i);
		else if (score >= best - 40)
			printf("Student %d score is and grade is D\n", i);
		else
			printf("Student %d score is and grade is F\n", i);
	}*/
#pragma endregion

#pragma region TASK2
	//int nums[10];
	//for (int i = 0; i < 10; i++) {
	//	int n;
	//	scanf("%d", &n);
	//	nums[i] = n;
	//}

	//for (int i = 0; i < 10; i++) {
	//	int j;
	//	for (j = 0; j < i; j++)
	//		if (nums[i] == nums[j])
	//			break;
	//	if (i == j)
	//		printf("%d ", nums[i]);

	//}
	//puts("");
#pragma endregion


}