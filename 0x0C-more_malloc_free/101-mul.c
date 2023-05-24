#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

// function to check if a string represents a positive number
int is_positive_number(char *str) {
	int i = 0;
	while (str[i]) {
		if (!isdigit(str[i])) {
			return 0;
		}
		i++;
	}
	return 1;
}

int main(int argc, char *argv[]) {
	// check if the correct number of arguments is provided
	if (argc != 3) {
		printf("Error\n");
		return 98;
	} 

	// check if the arguments are positive numbers
	if (!is_positive_number(argv[1]) || !is_positive_number(argv[2])) {
		printf("Error\n");
		return 98;
	}

	// convert the arguments to integers
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);

	// perform the multiplication
	int result = num1 * num2;

	// print the result
	printf("%d\n", result);

	return 0;
}
