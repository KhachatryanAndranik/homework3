//Exercise 1
/*
#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
	if (num <= 1) {
		return false;
	}

	for (int i = 2; i <= num / 2; i++) {
		if (num % i == 0) {
			return false;
		}
	}

	return true;
}

void find_prime_sum(int n) {
	bool found = false;

	printf("Prime numbers that sum up to %d are:\n", n);
	for (int i = 2; i <= n / 2; i++) {
		if (is_prime(i) && is_prime(n - i)) {
			printf("%d + %d\n", i, n - i);
			found = true;
		}
	}
	if (!found) {
		printf("There is not prime numbers that sum up to %d\n", n);
	}
}

int main() {
	int n;
	printf("Enter the number: ");
	scanf(" %d", &n);
	find_prime_sum(n);

	return 0;
}
*/

/*
//Exercise 2
#include <stdio.h>

int main() {
	int num1, num2, result;
	char c;

	printf("Enter an expression: \n");

	while (scanf(" %d %c %d", &num1, &c, &num2) != EOF) {
		switch (c) {
			case '+':
				result = num1 + num2;
				break;
			case '-':
				result = num1 - num2;
				break;
			case '*':
				result = num1 * num2;
				break;
			case '/':
				if (num2 == 0) {
					printf("Division by zero is undefined.\n");
					continue;	
				}
				result = num1 / num2;
				break;
			case '%':
				if (num2 == 0) {
					printf("Division by zero is undefined.\n");
					continue;
				}
				result = num1 % num2;
				break;
			
			default:
				printf("Invalid operator\n");
				continue;
		}
		printf("Result: %d\n", result);
		printf("Enter another expression: \n");
	}
	return 0;
}

*/

//Exercise 3
/*

#include <stdio.h>

void spaces(int count) {
	for (int i = 0; i < count; i++) {
		printf(" ");
	}
}

void generate_pyramid(int rows) {
	for (int i = 1; i <= rows; i++) {
		spaces(rows - i);
		for (int j = 0; j < i; j++) {
			printf(" *");
		}
		printf("\n");

	}
}

int main()
{
	int rows;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	generate_pyramid(rows);

	return 0;
}

*/
