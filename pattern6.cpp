// C program to print number pyramid patterns using for loop
#include <stdio.h>

int main()
{

	int rows, columns, number = 1, n = 5;

	// first for loop is used to identify number of rows
	for (rows = 0; rows <= n; rows++) {

		// second for loop is used to identify number of
		// columns and here the values will be changed
		// according to the first for loop
		for (columns = 0; columns < rows; columns++) {

			// printing number pattern based on the number
			// of columns
			printf("%d ", number);

			// incrementing number at each column to print
			// the next number
			number++;
		}

		// print the next line for each row
		printf("\n");
	}
	return 0;
}
