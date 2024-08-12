#include <stdio.h>

int main()
{
	int x = 0x87654321;

	/* a) */
	int result = x & 0xFF;
	printf("%#010x\n", result);

	result = (~x & ~0xFF) | (x & 0xFF);
	printf("%#010x\n", result);

	result = (x & 0xFFFFFF) | (x | 0xFF);
	printf("%#010x\n", result);
}
