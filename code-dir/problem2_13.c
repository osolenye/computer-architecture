#include <stdio.h>

int main()
{

}

int bool_or(int x, int y) {
	int result = bis(x, y);
	return result;
}

int bool_xor(int x, int y) {
	int result = bis(bic(x, y), bic(x, y));
	return result;
}

/* bis sets to one when from x bit is 1 and at this position in m it's one */
/* something like logical operation OR */
int bis(int x, int m);

/* sets to 0 x bit, at this position m has 1 */
/* something like AND and than complementing the result */
int bic(int x, int m);
