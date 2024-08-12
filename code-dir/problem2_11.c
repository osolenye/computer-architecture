#include <stdio.h>


void inplace_swap(int *x, int *y) {
	*y = *x ^ *y;
	*x = *x ^ *y;
	*y = *x ^ *y;
}
	


void reverse_array(int a[], int cnt) {
		int first, last;
		for (first = 0, last = cnt -1;
				first <= last;
				first++, last--) 
		{
			if (first != last) {
				inplace_swap(&a[first], &a[last]);
			} else {
				/* inplace_swap(&a[first], &a[last]); */
			}
			printf("%d\n", first);
			printf("%d\n", last);
		}


}


int main() {
	int array[] = {1, 2, 3, 4, 5};
	int cnt;
	if (sizeof(array) % 2 == 0) {
		cnt = sizeof(array) / sizeof(array[0]); // Определяем размер массива
	} else {
		cnt = (sizeof(array) / sizeof(array[0])) + 1; // Определяем размер массива
	}

    reverse_array(array, cnt); // Разворачиваем массив

    // Выводим развернутый массив
    for (int i = 0; i < cnt; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
