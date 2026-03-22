#include "sort.h"

void bubblesort(int* num, int n) {
	for (int i = 0;i < n - 1;i++) {
		bool sort = false;
		for (int j = 0;j < n - 1 - i;j++) {
			if (num[j] > num[j + 1]) {
				int temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
				sort = true;
			}
		}
		if (!sort) break;
	}
}