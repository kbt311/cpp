#include "sort.h"

void quicksort(int* num, int left, int right) {
	if (left >= right) return;
	int i = left;
	int j = right;
	int mid = left + ((right - left) >> 1);
	int p = num[mid];
	while (i <= j) {
		while (num[i] < p) i++;
		while (num[j] > p) j--;
		if (i <= j) {
			int temp = num[i];
			num[i] = num[j];
			num[j] = temp;
			i++;
			j--;
		}
	}
	if (left < j) quicksort(num, left, j);
	if (right > i) quicksort(num, i, right);
}