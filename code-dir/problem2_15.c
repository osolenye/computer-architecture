#include <stdio.h>
#include <stdbool.h>


int equal(int x, int y) {
	return (x == y);
}

int main()
{
	int x = 5;
	int y = 5;
	int result;
	result = equal(x, y);
	printf("%d\n", result);
}

