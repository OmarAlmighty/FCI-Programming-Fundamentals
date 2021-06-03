#include<stdio.h>
#include<math.h>
#include<string.h>
float sum(float n1, float n2);
void max(int a[], int size);
int main() {
#pragma region MatrixMulti_1
	//int m1[2][3] = {
	//	{ 1,2,3 },
	//	{ 4,5,6 }
	//};
	//int m2[3][2] = {
	//	{ 7,8 },
	//	{ 9,10 },
	//	{ 11,12 }
	//};

	//int res[2][2] = { { 0,0 },{ 0,0 } }; // what if we remove the initialzation part??

	//int i;
	//int j;
	//int k;
	//for (i = 0; i < 2; i++) {
	//	for (j = 0; j < 2; j++) {
	//		for (k = 0; k < 3; k++) {
	//			res[i][j] += m1[i][k] * m2[k][j];
	//		}
	//	}
	//}

	//for (i = 0; i < 2; i++) {
	//	for (int j = 0; j < 2; j++) {
	//		printf("%d   ", res[i][j]);
	//	}
	//	puts("");
	//}
#pragma endregion

#pragma region MatrixMulti_2
	//int m1[3][3] = {
	//	{ 1,2,3 },
	//	{ 4,5,6 },
	//	{ 1,1,1 }
	//};
	//int m2[3][3] = {
	//	{ 7,8,1 },
	//	{ 9,10,1 },
	//	{ 11,12,1 }
	//};

	//int res[3][3] = { { 0,0,0 },{ 0,0,0 }, {0,0,0} }; // what if we remove the initialzation part??

	//int i;
	//int j;
	//int k;
	//for (i = 0; i < 3; i++) {
	//	for (j = 0; j < 3; j++) {
	//		for (k = 0; k < 3; k++) {
	//			res[i][j] += m1[i][k] * m2[k][j];
	//		}
	//	}
	//}

	//for (i = 0; i < 3; i++) {
	//	for (int j = 0; j < 3; j++) {
	//		printf("%d\t", res[i][j]);
	//	}
	//	puts("");
	//}
#pragma endregion

#pragma region strings
	//char name1[30];
	//char name2[30];

	//printf("Enter name 1: ");
	//gets(name1);
	//printf("Enter name 2: ");
	//gets(name2);

	////Using strlen function
	//printf("The length of name 1 is: %d\n", strlen(name1));
	//printf("The length of name 2 is: %d\n", strlen(name2));
	//strlen("Hello");
	////Using strcpy function
	//char temp[30];
	//strcpy(temp, name1);
	//printf("temp is: %s\n", temp);
	//
	////Using strcat function
	//strcat(temp, name2);
	//printf("temp is %s\n", temp);

	////Using strcmp function
	//char str1[] = "welcome";
	//char str2[] = "WELCOME";
	//char str3[] = "welcome";
	//char str4[] = "The first string";
	//char str5[] = "The second string";
	//printf("str1 and str2: %d\n", strcmp(str1, str2));
	//printf("str1 and str3: %d\n", strcmp(str1, str3));
	//printf("str4 and str5: %d\n", strcmp(str4, str5));
#pragma endregion

#pragma region EX5
	//char username[30];
	//char password[30];
	//printf("Enter username: ");
	//gets(username);


	//int x = strcmp(username, "admin");
	//if (x == 0) {
	//	printf("Enter password: ");
	//	scanf("%s", password);
	//	int y = strcmp(password, "adminXY123");
	//	if (y == 0) {
	//		puts("You logged in successfully");
	//	}
	//	else {
	//		puts("Incorrect password");
	//	}
	//}
	//else {
	//	puts("Incorrect username");
	//}
#pragma endregion

	char name1[] = "Ahmed";
	char name2[] = "Ahmed";
	char x[] = "Beshoy";
	char y[] = "AHMED";
	char z[] = "123";

	printf("%d\n", strcmp(x, name1));
}

#pragma region TASK1
//void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
//void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int multResult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond);
//void display(int mult[][10], int rowFirst, int columnSecond);
//
//int main()
//{
//	int firstMatrix[10][10], secondMatrix[10][10], mult[10][10], rowFirst, columnFirst, rowSecond, columnSecond, i, j, k;
//
//	printf("Enter rows and column for first matrix: ");
//	scanf("%d %d", &rowFirst, &columnFirst);
//
//	printf("Enter rows and column for second matrix: ");
//	scanf("%d %d", &rowSecond, &columnSecond);
//
//	// If colum of first matrix in not equal to row of second matrix, asking user to enter the size of matrix again.
//	while (columnFirst != rowSecond)
//	{
//		printf("Error! column of first matrix not equal to row of second.\n");
//		printf("Enter rows and column for first matrix: ");
//		scanf("%d%d", &rowFirst, &columnFirst);
//		printf("Enter rows and column for second matrix: ");
//		scanf("%d%d", &rowSecond, &columnSecond);
//	}
//
//	// Function to take matrices data
//	enterData(firstMatrix, secondMatrix, rowFirst, columnFirst, rowSecond, columnSecond);
//
//	// Function to multiply two matrices.
//	multiplyMatrices(firstMatrix, secondMatrix, mult, rowFirst, columnFirst, rowSecond, columnSecond);
//
//	// Function to display resultant matrix after multiplication.
//	display(mult, rowFirst, columnSecond);
//
//	return 0;
//}
//
//void enterData(int firstMatrix[][10], int secondMatrix[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
//{
//	int i, j;
//	printf("\nEnter elements of matrix 1:\n");
//	for (i = 0; i < rowFirst; ++i)
//	{
//		for (j = 0; j < columnFirst; ++j)
//		{
//			printf("Enter elements a%d%d: ", i + 1, j + 1);
//			scanf("%d", &firstMatrix[i][j]);
//		}
//	}
//
//	printf("\nEnter elements of matrix 2:\n");
//	for (i = 0; i < rowSecond; ++i)
//	{
//		for (j = 0; j < columnSecond; ++j)
//		{
//			printf("Enter elements b%d%d: ", i + 1, j + 1);
//			scanf("%d", &secondMatrix[i][j]);
//		}
//	}
//}
//
//void multiplyMatrices(int firstMatrix[][10], int secondMatrix[][10], int mult[][10], int rowFirst, int columnFirst, int rowSecond, int columnSecond)
//{
//	int i, j, k;
//
//	// Initializing elements of matrix mult to 0.
//	for (i = 0; i < rowFirst; ++i)
//	{
//		for (j = 0; j < columnSecond; ++j)
//		{
//			mult[i][j] = 0;
//		}
//	}
//
//	// Multiplying matrix firstMatrix and secondMatrix and storing in array mult.
//	for (i = 0; i < rowFirst; ++i)
//	{
//		for (j = 0; j < columnSecond; ++j)
//		{
//			for (k = 0; k<columnFirst; ++k)
//			{
//				mult[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
//			}
//		}
//	}
//}
//
//void display(int mult[][10], int rowFirst, int columnSecond)
//{
//	int i, j;
//	printf("\nOutput Matrix:\n");
//	for (i = 0; i < rowFirst; ++i)
//	{
//		for (j = 0; j < columnSecond; ++j)
//		{
//			printf("%d  ", mult[i][j]);
//			if (j == columnSecond - 1)
//				printf("\n\n");
//		}
//	}
//}
#pragma endregion

#pragma region TASK2
//int getSum(int n)
//{
//	int sum = 0;
//	while (n != 0) {
//		sum = sum + n % 10;
//		n = n / 10;
//	}
//	return sum;
//}
#pragma endregion

#pragma region TASK3
//long get_seconds(int h, int m, int s) {
//	long seconds = 3600 * h + 60 * m + s;
//	return seconds;
//}
#pragma endregion

#pragma region TASK4
//void upper_string(char s[]) {
//	int c = 0;
//
//	while (s[c] != '\0') {
//		if (s[c] >= 'a' && s[c] <= 'z') {
//			s[c] = s[c] - 32;
//		}
//		c++;
//	}
//}
#pragma endregion



