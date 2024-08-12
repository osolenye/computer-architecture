#include <stdio.h>

int main()
{
	typedef int *int_pointer;
	int_pointer ip;
	printf("%p", ip);
	return 0;
}
