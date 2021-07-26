#include <stdio.h>

int main() {
	// loop from 1 to 10
	for (int x= 1; x <= 10; x++) {

		// If x is equals to 6,
		// continue to next iteration
		// without printing
		if (x == 4)
			continue;

		else
			// otherwise print the value of x
			printf("%d", x);
			
			printf("%d ", x);
	}

	return 0;