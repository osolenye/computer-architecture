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
	/* short x = 12345; */
	/* short mx = -x; */

	/* show_bytes( (byte_pointer) &x, sizeof(short)); */
	/* show_bytes( (byte_pointer) &mx, sizeof(short)); */

	short sx = -12345;
	unsigned short usx = sx;
	int x = sx;
	unsigned int ux = usx;

	printf("sx = %d\n", sx);
	show_bytes( (byte_pointer) &sx, sizeof(short));

	printf("usx = %d\n", usx);
	show_bytes( (byte_pointer) &usx, sizeof(short));

	printf("x = %d\n", x);
	show_bytes( (byte_pointer) &x, sizeof(int));

	printf("ux = %d\n", ux);
	show_bytes( (byte_pointer) &ux, sizeof(int));
}
