#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
	int i;
	for (i = 0; i < len; i++) {
		printf(" %.2x", start[i]);
	}
	printf("\n");
}

void show_int(int x) {
	show_bytes(( byte_pointer) &x, sizeof(int));
}

void show_float(float x) {
	show_bytes( (byte_pointer) &x, sizeof(float));
}

void show_pointer(void *x) {
	show_bytes( (byte_pointer) &x, sizeof(void *));
}

int main() {
	int a = 0x12345678;

	byte_pointer ap = (byte_pointer) &a;
	show_bytes(ap, 1);
	show_bytes(ap, 2);
	show_bytes(ap, 3);

	show_int(a);
}

/* general result is 78 56 34 12 */
/* littile endian		big endian */
/* 78			12 */
/* 78 56			12 34 */
/* 78 56 32		12 34 56 */
