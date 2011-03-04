#include <stdio.h>

#include "stack.h"
#include "fib.h"

int main(void) {
	int choice, value;

	do {
		printf("Enter value: ");
		scanf("%d", &choice);

		value = fib(choice);

		if (choice > 1) push(value);
		else if (choice >= 0) printf("value on top is %d\n", pop());

	} while(choice != -1);
	return 0;
}
